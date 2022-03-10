#include <iostream>
#include <algorithm>
using namespace std;
int main(void) {
	int n;
	int t;
	int se;
	int h, m, s;
	cin >> h >> m >> s;
	t = 3600 * h + 60 * m + s; //시간을 초로 변환
	cin >> n;
	for (int i = 0; i < n; i++) {
		int ch;
		cin >> ch;
		switch (ch) {
		case 1: {
			cin >> se;
			t += se;
			t %= 86400;//시간이 24시간을 넘겼을 경우 나머지만 남기고 버림.
			break;
		}
		case 2: {
			cin >> se;
			t -= se;
			t %= 86400;
			break;
		}
		case 3: {
			while (t < 0) {//시간이 음수인경우 하루를 더해줌
				t += 86400;
			}
			cout << t / 3600 << ' ' << (t % 3600) / 60 << ' ' << t % 60 << '\n';
			break;
		}

		}
	}
}