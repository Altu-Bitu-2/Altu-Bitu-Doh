#include <iostream>
#include <stack>
using namespace std;
int main() {
	//��ȣ�� ������ ���� ��������Ѵ�.
	string s;
	int answer = 0, temp;
	cin >> s;
	bool check = true;//��ȣ�� �ùٸ� ������ üũ
	temp = 1;//���� ��ȣ�� ����� �ֱ� ����
	stack<char> c;//��ȣ ������ stack
	for (int i = 0; i < s.length(); i++) {
		if (s[i] == '(') {
			//���� 2�� ���������
			temp *= 2;
			c.push('(');
		}
		else if (s[i] == ')') {
			if (c.empty() || c.top() != '(') {
				//���� ��ȣ�� ������ �� ���� stack�� ����ִٸ� �ùٸ� ��ȣ�� �ƴ�
				check = false;
				break;
			}
			else {
				//���� �� �ٷ� ������ ������ȣ�� �ݴ� �Ŷ�� answer�� 2�� �����ְ� �ٽ� temp�� ����
				if (s[i - 1] == '(') {
					answer += temp;
				}
				temp /= 2;
				c.pop();
			}
		}
		else if (s[i] == '[') {
			//*3�� ���ְ� answer�� ���������.
			temp *= 3;
			c.push('[');
		}
		else if (s[i] == ']') {
			if (c.empty() || c.top() != '[') {
				//���� ��ȣ�� ������ �� ���� stack�� ����ִٸ� �ùٸ� ��ȣ�� �ƴ�
				check = false;
				break;
			}
			else {
				//���� �� �ٷ� ������ ������ȣ�� �ݴ� �Ŷ�� answer�� 2�� �����ְ� �ٽ� temp�� ����
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