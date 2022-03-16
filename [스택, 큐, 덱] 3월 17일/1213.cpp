#include <iostream>
#include <string>
#include <stack>
#include <vector>
#include <algorithm>
using namespace std;
string answer;
int alphabet[26] = { 0, }; //���ĺ����� ������ ���� ������ �迭(Ȧ���� ������ ���ĺ��� 2�� �̻� X)
bool check(string s) {
	int len = s.length();
	int odd = 0;//Ȧ������ ���ĺ��� ����� ������ ���� ����
	int index_odd_char;
	for (int i = 0; i < len; i++) {
		alphabet[s[i] - 'A']++;
	}
	for (int i = 0; i < 26; i++) {
		if (alphabet[i] % 2 == 1) {
			odd++;
			index_odd_char = i;//Ȧ������ ���ĺ� index ����(line 26�� �� ���ĺ��� ã�� ����)
		}
	}
	if (odd >= 2) {//Ȧ������ ���ĺ��� �ΰ� �̻��̸� ������ �� ����.
		return false;
	}
	else if (odd == 1) {
		char odd_alphabet = index_odd_char + 'A';
		string temp = "";//Ȧ���� ������ ���ĺ��� �����ϰ� ������ string 
		bool tc = true;
		for (int j = 0; j < s.length(); j++) {
			if (tc && s[j] == odd_alphabet) { //odd_alphabet�� ���� ���ĺ��� ��� �ѹ��� ����
				tc = false;
				continue;
			}
			temp += s[j];
		}
		sort(temp.begin(), temp.end()); //���ĺ������� ����
		//temp�� ������ ������ half string�� ����
		string half = "";
		for (int i = 0; i < temp.length(); i += 2) { //���� ���: AAAABB => (��ĭ�� ��)AAB
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
