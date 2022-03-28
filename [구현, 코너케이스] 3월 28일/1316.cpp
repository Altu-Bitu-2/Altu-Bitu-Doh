#include <iostream>
using namespace std;
int main() {
	int N;
	cin >> N;
	int cnt = 0;
	char store;
	for (int i = 0; i < N; i++) {
		int alphabet[26] = { 0, };//알파벳 개수 셀 배열이 필요하다.
		string a;
		cin >> a;
		int a_size = a.length();
		store = a[0];//이전 글자 (연속되는지 확인하기 위해)저장할 변수가 필요
		bool flag = true;
		for (int k = 0; k < a_size; k++) {
			++alphabet[(a[k] - 'a')];//알파벳 개수증가
			if (alphabet[(a[k] - 'a')] == 1) {
				store = a[k];
			}
			else if (alphabet[(a[k] - 'a')] != 1) { //만일 알파벳이 이전에도 나왔다면 연속했는지 확인해야함.
				if (store != a[k]) {
					flag = false;
					break;
				}
				else {
					store = a[k];
				}
			}
		}
		if (flag == true) cnt++;
	}
	cout << cnt;
}