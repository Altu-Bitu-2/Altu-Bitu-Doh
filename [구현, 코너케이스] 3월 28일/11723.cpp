#include <iostream>
#include <cstring>
using namespace std;
int NUM[20] = { 0, }; //20������ ���� �� �迭 �ʿ�
int main() {
	ios_base::sync_with_stdio(0);
	cin.tie(0); //��� �ð��ʰ� ������ 
	int N;
	cin >> N;
	string a;
	int n;
	for (int i = 0; i < N; i++) {
		cin >> a;
		if (a == "add") {
			cin >> n;
			NUM[n - 1] = 1; //���� ���� ������ �ʰ� 1�� �ʱ�ȭ
		}
		else if (a == "remove") {
			cin >> n;
			NUM[n - 1] = 0; //0���� �ʱ�ȭ
		}
		else if (a == "check") {
			cin >> n;
			if (NUM[n - 1] == 1) {
				cout << 1 << '\n';
			}
			else {
				cout << 0 << '\n';
			}
		}
		else if (a == "toggle") {
			cin >> n;
			if (NUM[n - 1] == 1) {
				NUM[n - 1] = 0;
			}
			else {
				NUM[n - 1] = 1;
			}
		}
		else if (a == "all") {
			for (int j = 0; j < 20; j++) {
				NUM[j] = 1;
			}
		}
		else if (a == "empty") {
			for (int j = 0; j < 20; j++) {
				NUM[j] = 0;
			}
		}
	}
}