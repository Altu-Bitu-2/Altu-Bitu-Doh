#include <iostream>
#include <algorithm>
using namespace std;
//���ڰ� �ʹ� Ŀ�� ���������� ǥ���ϸ� �����÷ο찡 �Ͼ �� ����. �׷��� ���ڿ��� �޾Ƽ� �ڸ��� �������� �����ֱ� 
//�ڸ��� �ö� �� ���� ex)13�ڸ� => 14�ڸ� reverse�Լ� ����ؼ� ���� ���� �Ųٷ� �����ϱ�...
int main() {
	string a, b;
	cin >> a >> b;
	int a_size = a.length(), b_size = b.length();
	reverse(a.begin(), a.end());
	reverse(b.begin(), b.end());
	int round;
	int result[10000];
	if (a_size > b_size) {
		result[0] = ((int)a[0] + (int)b[0]) % 10;
		round = ((int)a[0] + (int)b[0]) / 10;
		for (int i = 1; i < a_size; i++) {
			if (i <= b_size) {
				result[i] = ((int)a[i] + (int)b[i] + round) % 10;
				round = ((int)a[i] + (int)b[i] + round) / 10;
			}
			else {
				result[i] = ((int)a[i] + round) % 10;
				round = ((int)a[i] + round) / 10;
			}
		}
		if (result[a_size] > 0) {
			reverse(result, result + a_size);
			for (int i = 0; i < (a_size + 1); i++) {
				cout << result[i];
			}
		}
		else {
			reverse(result, result + a_size - 1);
			for (int i = 0; i < (a_size); i++) {
				cout << result[i];
			}
		}

	}
	else {
		result[0] = ((int)a[0] + (int)b[0]) % 10;
		round = ((int)a[0] + (int)b[0]) / 10;
		for (int i = 1; i < b_size; i++) {
			if (i <= a_size) {
				result[i] = ((int)a[i] + (int)b[i] + round) % 10;
				round = ((int)a[i] + (int)b[i] + round) / 10;
			}
			else {
				result[i] = ((int)b[i] + round) % 10;
				round = ((int)b[i] + round) / 10;
			};
		}
		if (result[b_size] > 0) {
			reverse(result, result + b_size);
			for (int i = 0; i < (b_size + 1); i++) {
				cout << result[i];
			}
		}
		else {
			reverse(result, result + b_size - 1);
			for (int i = 0; i < (b_size); i++) {
				cout << result[i];
			}
		}
	}

	//result�� ũ�Ⱑ 10000�̱� ������.. �״�� ����ϸ� �ȵ�...

}