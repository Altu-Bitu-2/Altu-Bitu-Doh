#include <iostream>
#include <stack>
using namespace std;
int main() {
	//괄호가 닫히는 순간 더해줘야한다.
	string s;
	int answer = 0, temp;
	cin >> s;
	bool check = true;//괄호가 올바른 것인지 체크
	temp = 1;//열린 괄호를 계산해 주기 위해
	stack<char> c;//괄호 저장할 stack
	for (int i = 0; i < s.length(); i++) {
		if (s[i] == '(') {
			//값에 2를 곱해줘야함
			temp *= 2;
			c.push('(');
		}
		else if (s[i] == ')') {
			if (c.empty() || c.top() != '(') {
				//닫힌 괄호가 들어왔을 때 만일 stack이 비어있다면 올바른 괄호가 아님
				check = false;
				break;
			}
			else {
				//만일 이 바로 이전에 열린괄호를 닫는 거라면 answer에 2를 더해주고 다시 temp를 수정
				if (s[i - 1] == '(') {
					answer += temp;
				}
				temp /= 2;
				c.pop();
			}
		}
		else if (s[i] == '[') {
			//*3을 해주고 answer에 더해줘야함.
			temp *= 3;
			c.push('[');
		}
		else if (s[i] == ']') {
			if (c.empty() || c.top() != '[') {
				//닫힌 괄호가 들어왔을 때 만일 stack이 비어있다면 올바른 괄호가 아님
				check = false;
				break;
			}
			else {
				//만일 이 바로 이전에 열린괄호를 닫는 거라면 answer에 2를 더해주고 다시 temp를 수정
				if (s[i - 1] == '[') {
					answer += temp;
				}
				temp /= 3;
				c.pop();
			}
		}
	}
	if (check && c.empty()) {
		cout << answer;
	}
	else {
		cout << 0;
	}
	return 0;
}