#include <iostream>
using namespace std;
//���ϴ� ���� ũ�� ������ ������ �Է¹����� �ȵȴ�. ���ڿ��� �Է¹޾ƾ��Ѵ�.
int main() {
	string a, b;
	string result = 0;
	cin >> a >> b;
	int a_size = a.length();
	int b_size = b.length();
	int r[10000] = { 0, }; //string���� ���� �ڸ��� �������ٰ� �ö󰡰� �Ǵ� �� �����ϱ�
	if (a_size > b_size) {
		for (int i = 0; i < a_size; i++) {
			if (i > b_size) { //�� ������ ���̰� �ٸ� ���
				if (i >= 1) {
					if ((int)(a[i]) + r[i - 1] >= 10) {
						r[i] = ((int)(a[i]) + r[i - 1]) / 10; // �ö󰡰� �Ǵ� �� ���ϱ�
						result[i] = ((int)(a[i]) + r[i - 1]) % 10;
					}
					else {
						result[i] = ((int)(a[i]) + r[i - 1]);
					}
				}
				else {
					if ((int)(a[i] + b[i]) >= 10) {
						r[i] = ((int)(a[i] + b[i])) / 10; // �ö󰡰� �Ǵ� �� ���ϱ�
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
						r[i] = ((int)(a[i] + b[i]) + r[i - 1]) / 10; // �ö󰡰� �Ǵ� �� ���ϱ�
						result[i] = ((int)(a[i] + b[i]) + r[i - 1]) % 10;
					}
					else {
						result[i] = ((int)(a[i] + b[i]) + r[i - 1]);
					}
				}
				else {
					if ((int)(a[i] + b[i]) >= 10) {
						r[i] = ((int)(a[i] + b[i])) / 10; // �ö󰡰� �Ǵ� �� ���ϱ�
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
						r[i] = ((int)(b[i]) + r[i - 1]) / 10; // �ö󰡰� �Ǵ� �� ���ϱ�
						result[i] = ((int)(b[i]) + r[i - 1]) % 10;
					}
					else {
						result[i] = ((int)(b[i]) + r[i - 1]);
					}
				}
				else {
					if ((int)(b[i]) >= 10) {
						r[i] = ((int)(b[i])) / 10; // �ö󰡰� �Ǵ� �� ���ϱ�
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
						r[i] = ((int)(a[i] + b[i]) + r[i - 1]) / 10; // �ö󰡰� �Ǵ� �� ���ϱ�
						result[i] = ((int)(a[i] + b[i]) + r[i - 1]) % 10;
					}
					else {
						result[i] = ((int)(a[i] + b[i]) + r[i - 1]);
					}
				}
				else {
					if ((int)(a[i] + b[i]) >= 10) {
						r[i] = ((int)(a[i] + b[i])) / 10; // �ö󰡰� �Ǵ� �� ���ϱ�
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