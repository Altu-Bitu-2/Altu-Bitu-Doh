#include <iostream>
using namespace std;
int n;
long long t;
long long se;
int h, m, s;
int main(void) {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);
	cin >> h >> m >> s >> n;
	t = 3600 * h + 60 * m + s; //�ð��� �ʷ� ��ȯ
	for (int i = 0; i < n; i++) {
		int ch;
		cin >> ch;
		if (ch == 1) {
			cin >> se;
			t += se;
		}
		else if (ch == 2) {
			cin >> se;
			t -= se;
		}
		else if (ch == 3) {
			while (t < 0) {
				t += 86400;
			}
			t %= 86400;//�ð��� 24�ð��� �Ѱ��� ��� �������� ����� ����.
			cout << t / 3600 << ' ' << (t / 60) % 60 << ' ' << t % 60 << '\n';
		}
	}
}