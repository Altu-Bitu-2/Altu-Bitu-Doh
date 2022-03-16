#include <iostream>
#include <string>
#include <stack>
#include <vector>
#include <algorithm>
using namespace std;
string answer;
int alphabet[26] = { 0, }; //알파벳별로 들어오는 개수 저장할 배열(홀수개 들어오는 알파벳이 2개 이상 X)
bool check(string s) {
	int len = s.length();
	int odd = 0;//홀수개의 알파벳이 몇개인지 저장할 변수 선언
	int index_odd_char;
	for (int i = 0; i < len; i++) {
		alphabet[s[i] - 'A']++;
	}
	for (int i = 0; i < 26; i++) {
		if (alphabet[i] % 2 == 1) {
			odd++;
			index_odd_char = i;//홀수개인 알파벳 index 저장(line 26에 그 알파벳을 찾기 위해)
		}
	}
	if (odd >= 2) {//홀수개인 알파벳이 두개 이상이면 생성할 수 없음.
		return false;
	}
	else if (odd == 1) {
		char odd_alphabet = index_odd_char + 'A';
		string temp = "";//홀수번 등장한 알파벳을 제외하고 저장할 string 
		bool tc = true;
		for (int j = 0; j < s.length(); j++) {
			if (tc && s[j] == odd_alphabet) { //odd_alphabet과 같은 알파벳일 경우 한번만 시행
				tc = false;
				continue;
			}
			temp += s[j];
		}
		sort(temp.begin(), temp.end()); //알파벳순으로 정렬
		//temp를 반으로 나눠서 half string에 저장
		string half = "";
		for (int i = 0; i < temp.length(); i += 2) { //저장 방식: AAAABB => (두칸씩 띄어서)AAB
			half += temp[i];
		}
		answer = half + odd_alphabet;
		reverse(half.begin(), half.end());
		answer += half;
		return true;
	}
	else {
		sort(s.begin(), s.end());
		string half = "";
		for (int i = 0; i < s.length(); i += 2) {
			half += s[i];
		}
		answer = half;
		reverse(half.begin(), half.end());
		answer += half;
		return true;
	}
}
void show(bool b) {
	if (!b) {
		cout << "I'm Sorry Hansoo";
	}
	else {
		cout << answer;
	}
}
int main() {
	string s;
	cin >> s;
	show(check(s));
	return 0;
}
