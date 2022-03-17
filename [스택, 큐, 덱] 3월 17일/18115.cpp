#include <iostream>
#include <deque>
#include <vector>
#include <algorithm>
using namespace std;
int main() {
	int N;
	cin >> N;
	deque<int> d; //기술은 뒤에서 빼야하고 남은 카드는 뒤, 앞 모두 뺴야하므로 deque을 사용
	deque<int> l;
	for (int i = 0; i < N; i++) {
		int a;
		cin >> a;
		d.push_back(a);
	}
	for (int i = 0; i < N; i++) {
		if (d.back() == 1) {
			l.push_front(i + 1);
		}
		else if (d.back() == 2) {//2번 기술일 경우 두번째에 넣어야하므로 첫번째를 빼고 다시 넣어줌
			int temp = l.front();
			l.pop_front();
			l.push_front(i + 1);
			l.push_front(temp);
		}
		else if (d.back() == 3) {
			l.push_back(i + 1);
		}
		d.pop_back();
	}
	while (!l.empty()) {
		cout << l.front() << " ";
		l.pop_front();
	}

}