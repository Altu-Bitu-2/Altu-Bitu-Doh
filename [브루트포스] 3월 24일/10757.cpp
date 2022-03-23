#include <iostream>
using namespace std;
//더하는 수가 크기 때문에 정수로 입력받으면 안된다. 문자열로 입력받아야한다.
int main() {
	string a, b;
	string result = 0;
	cin >> a >> b;
	int a_size = a.length();
	int b_size = b.length();
	int r[10000] = { 0, }; //string에서 각각 자리수 더해지다가 올라가게 되는 수 저장하기
	if (a_size > b_size) {
		for (int i = 0; i < a_size; i++) {
			if (i > b_size) { //두 숫자의 길이가 다를 경우
				if (i >= 1) {
					if ((int)(a[i]) + r[i - 1] >= 10) {
						r[i] = ((int)(a[i]) + r[i - 1]) / 10; // 올라가게 되는 수 정하기
						result[i] = ((int)(a[i]) + r[i - 1]) % 10;
					}
					else {
						result[i] = ((int)(a[i]) + r[i - 1]);
					}
				}
				else {
					if ((int)(a[i] + b[i]) >= 10) {
						r[i] = ((int)(a[i] + b[i])) / 10; // 올라가게 되는 수 정하기
						result[i] = ((int)(a[i] + b[i])) % 10;
					}
					else {
						result[i] = ((int)(a[i] + b[i]));
					}
				}
			}
			else {
				if (i >= 1) {
					if ((int)(a[i] + b[i]) + r[i - 1] >= 10) {
						r[i] = ((int)(a[i] + b[i]) + r[i - 1]) / 10; // 올라가게 되는 수 정하기
						result[i] = ((int)(a[i] + b[i]) + r[i - 1]) % 10;
					}
					else {
						result[i] = ((int)(a[i] + b[i]) + r[i - 1]);
					}
				}
				else {
					if ((int)(a[i] + b[i]) >= 10) {
						r[i] = ((int)(a[i] + b[i])) / 10; // 올라가게 되는 수 정하기
						result[i] = ((int)(a[i] + b[i])) % 10;
					}
					else {
						result[i] = ((int)(a[i] + b[i]));
					}
				}
			}
		}
	}
	else {
		for (int i = 0; i < b_size; i++) {
			if (i > a_size) {
				if (i >= 1) {
					if ((int)(b[i]) + r[i - 1] >= 10) {
						r[i] = ((int)(b[i]) + r[i - 1]) / 10; // 올라가게 되는 수 정하기
						result[i] = ((int)(b[i]) + r[i - 1]) % 10;
					}
					else {
						result[i] = ((int)(b[i]) + r[i - 1]);
					}
				}
				else {
					if ((int)(b[i]) >= 10) {
						r[i] = ((int)(b[i])) / 10; // 올라가게 되는 수 정하기
						result[i] = ((int)(b[i])) % 10;
					}
					else {
						result[i] = ((int)(b[i]));
					}
				}
			}
			else {
				if (i >= 1) {
					if ((int)(a[i] + b[i]) + r[i - 1] >= 10) {
						r[i] = ((int)(a[i] + b[i]) + r[i - 1]) / 10; // 올라가게 되는 수 정하기
						result[i] = ((int)(a[i] + b[i]) + r[i - 1]) % 10;
					}
					else {
						result[i] = ((int)(a[i] + b[i]) + r[i - 1]);
					}
				}
				else {
					if ((int)(a[i] + b[i]) >= 10) {
						r[i] = ((int)(a[i] + b[i])) / 10; // 올라가게 되는 수 정하기
						result[i] = ((int)(a[i] + b[i])) % 10;
					}
					else {
						result[i] = ((int)(a[i] + b[i]));
					}
				}
			}
		}
	}
	cout << result;
}