#include <iostream>
#include <cstring>
using namespace std;
int NUM[20] = { 0, }; //20까지의 숫자 셀 배열 필요
int main() {
	ios_base::sync_with_stdio(0);
	cin.tie(0); //출력 시간초과 때문에 
	int N;
	cin >> N;
	string a;
	int n;
	for (int i = 0; i < N; i++) {
		cin >> a;
		if (a == "add") {
			cin >> n;
			NUM[n - 1] = 1; //존재 유무 따지지 않고 1로 초기화
		}
		else if (a == "remove") {
			cin >> n;
			NUM[n - 1] = 0; //0으로 초기화
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