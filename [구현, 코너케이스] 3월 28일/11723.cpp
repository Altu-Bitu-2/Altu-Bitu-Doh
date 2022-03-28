#include <iostream>
#include <cstring>
using namespace std;
int NUM[20] = { 0, }; //20������ ���� �� �迭 ����
int check[300] = { 0, }; //check�������� ����� ���� ����
bool flag[300] = { false , };//check�� ����Ǿ����� true�� ����
int main() {
	int N;
	cin >> N;
	for (int i = 0; i < N; i++) {
		char a[10];
		int n;
		cin >> a >> n;
		if (!strcmp(a, "add")) {
			NUM[n - 1] ++;
		}
		else if (!strcmp(a, "remove")) {
			NUM[n - 1] = 0;
		}
		else if (!strcmp(a, "check")) {
			if (NUM[n - 1] != 0) {
				check[i] = 1;
			}
			else {
				check[i] = 0;
			}
			flag[i] = true;
		}
		else if (!strcmp(a, "toggle")) {
			if (NUM[n - 1] != 0) {
				NUM[n - 1] = 0;
			}
			else {
				NUM[n - 1] ++;
			}
		}
		else if (!strcmp(a, "all")) {
			for (int j = 0; j < 20; j++) {
				NUM[j] = 1;
			}
		}
		else if (!strcmp(a, "empty")) {
			for (int j = 0; j < 20; j++) {
				NUM[j] = 0;
			}
		}
	}
	for (int i = 0; i < N; i++) {
		if (flag[i] == true) {
			cout << check[i] << '\n';
		}
	}
}