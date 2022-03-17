#include <iostream>
#include <deque>
#include <vector>
#include <algorithm>
using namespace std;
int main() {
	int N;
	cin >> N;
	deque<int> d; //����� �ڿ��� �����ϰ� ���� ī��� ��, �� ��� �����ϹǷ� deque�� ���
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
		else if (d.back() == 2) {//2�� ����� ��� �ι�°�� �־���ϹǷ� ù��°�� ���� �ٽ� �־���
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