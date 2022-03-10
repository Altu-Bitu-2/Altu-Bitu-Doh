#include <iostream>
#include <algorithm>
using namespace std;
typedef struct clock {
	int hour;
	int minute;
	int second;
} CLOCK;
CLOCK c;
void forward(int s) {
	c.hour += s / 3600;
	s = s % 3600;
	c.minute += s / 60;
	s = s % 60;
	c.second += s;
}
void backward(int s) {
	c.hour -= s / 3600;
	s = s % 3600;
	c.minute -= s / 60;
	if (c.minute < 0) {
		c.hour -= 1;
		c.minute = 60 + c.minute;
	}
	s = s % 60;
	c.second -= s;
	if (c.second < 0) {
		c.minute -= 1;
		c.second = 60 + c.second;
	}
}
void show(void) {
	cout << c.hour << ' ' << c.minute << ' ' << c.second;
}
int main(void) {
	int n;
	int ch, se;
	cin >> c.hour >> c.minute >> c.second;
	cin >> n;
	for (int i = 0; i < n; i++) {
		cin >> ch;
		switch (ch) {
		case 1: cin >> se; forward(se); break;
		case 2: cin >> se; backward(se); break;
		case 3: show(); break;
		}
	}
}