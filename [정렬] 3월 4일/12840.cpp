#include <iostream>
#include <algorithm>
using namespace std;
int main(void) {
	int n;
	int t;
	int se;
	int h, m, s;
	cin >> h >> m >> s;
	t = 3600 * h + 60 * m + s; //�ð��� �ʷ� ��ȯ
	cin >> n;
	for (int i = 0; i < n; i++) {
		int ch;
		cin >> ch;
		switch (ch) {
		case 1: {
			cin >> se;
			t += se;
			t %= 86400;//�ð��� 24�ð��� �Ѱ��� ��� �������� ����� ����.
			break;
		}
		case 2: {
			cin >> se;
			t -= se;
			t %= 86400;
			break;
		}
		case 3: {
			while (t < 0) {//�ð��� �����ΰ�� �Ϸ縦 ������
				t += 86400;
			}
			cout << t / 3600 << ' ' << (t % 3600) / 60 << ' ' << t % 60 << '\n';
			break;
		}

		}
	}
}