#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
int main() {
	int N;
	cin >> N;
	int aver = 0, mid, mode, ran;
	vector<int> v(N);
	vector<int> answer(8001);
	for (int i = 0; i < N; i++) {
		cin >> v[i];
		aver += v[i];
	}

	int min = v[1], max = v[1];//range를 구하기 위해서 
	for (int i = 0; i < N; i++) {
		int index;
		if (min > v[i]) min = v[i];
		if (max < v[i]) max = v[i];
		if (v[i] == 0) index = v[i];//최빈값 구하기 위해 index 값 지정
		else if (v[i] < 0) index = -v[i];
		else if (v[i] > 0) index = v[i] + 4000;
		answer[index]++;
	}
	ran = max - min;
	aver = (int)((double)(aver) / N);
	sort(v.begin(), v.end());
	if (N % 2 == 0) {
		mid = int(v[N / 2] + v[(N / 2) + 1]);
	}
	else {
		mid = v[(int)(N / 2)];
	}
	int max_index = 0;
	bool flag = true;
	int cnt = 0;
	for (int i = 0; i < 8001; i++) {
		if (max_index < answer[i]) {
			if (flag && answer[i] == 1) {
				cnt++;
				if (cnt == 2) {
					flag = false;
					continue;
				}
			}
			if (i > 0 && i < 4001) {
				mode = -i;
			}
			else if (i >= 4001) {
				mode = i - 4000;
			}
			else if (i == 0) {
				mode = i;
			}
		}
	}
	cout << aver << "\n" << mid << "\n" << mode << "\n" << ran;

}