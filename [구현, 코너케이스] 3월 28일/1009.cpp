#include <iostream>
using namespace std;

int main() {
	int N;
	cin >> N;
	int answer[1000] = { 0, };
	for (int i = 0; i < N; i++) {
		string a;//a�� ���� �ڸ����ڰ� �ƴ� �� �����Ƿ� string���� �ޱ� 
		int b;
		cin >> a >> b;
		int a_size = a.length();
		switch ((int)(a[a_size - 1] - '0')) { //�� ���� �����ϸ� �ֱ������� ���� ���ڰ� �ݺ��ؼ� ������ ���� Ȱ��
		case 1: answer[i] = 1; break;
		case 2: {
			switch (b % 4) {
			case 1: answer[i] = 2; break;
			case 2: answer[i] = 4; break;
			case 3: answer[i] = 8; break;
			case 0: answer[i] = 6; break;
			}
			break;
		}
		case 3: {
			switch (b % 4) {
			case 1: answer[i] = 3; break;
			case 2: answer[i] = 9; break;
			case 3: answer[i] = 7; break;
			case 0: answer[i] = 1; break;
			}
			break;
		}
		case 4: {
			switch (b % 2) {
			case 1: answer[i] = 4; break;
			case 0: answer[i] = 6; break;
			}
			break;
		}
		case 5: answer[i] = 5; break;
		case 6: answer[i] = 6; break;
		case 7: {
			switch (b % 4) {
			case 1: answer[i] = 7; break;
			case 2: answer[i] = 9; break;
			case 3: answer[i] = 3; break;
			case 0: answer[i] = 1; break;
			}
			break;
		}
		case 8: {
			switch (b % 4) {
			case 1: answer[i] = 8; break;
			case 2: answer[i] = 4; break;
			case 3: answer[i] = 2; break;
			case 0: answer[i] = 6; break;
			}
			break;
		}
		case 9: {
			switch (b % 2) {
			case 1: answer[i] = 9; break;
			case 0: answer[i] = 1; break;
			}
			break;
		}
		case 0: answer[i] = 10; break;
		}
	}
	for (int i = 0; i < N; i++) {
		cout << answer[i] << '\n';
	}
}