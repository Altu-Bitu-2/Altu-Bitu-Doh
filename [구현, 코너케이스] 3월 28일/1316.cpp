#include <iostream>
using namespace std;
int alphabet[26] = { 0, };//알파벳 개수 셀 배열이 필요하다.
int main() {
	int N;
	cin >> N;
	bool flag = true;
	int cnt = 0;
	char store;
	for (int i = 0; i < N; i++) {
		string a;
		cin >> a;
		int a_size = a.length();
		store = a[0];
		for (int k = 0; k < a_size; k++) {
			alphabet[(int)(a[k] - 'a')] ++;
			if (alphabet[(int)(a[k] - 'a')] == 1) {
				store = a[k];
			}
			if (alphabet[(int)(a[k] - 'a')] != 1) {
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