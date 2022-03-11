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
	t = 3600 * h + 60 * m + s; //시간을 초로 변환
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
			t %= 86400;//시간이 24시간을 넘겼을 경우 나머지만 남기고 버림.
			cout << t / 3600 << ' ' << (t / 60) % 60 << ' ' << t % 60 << '\n';
		}
	}
}