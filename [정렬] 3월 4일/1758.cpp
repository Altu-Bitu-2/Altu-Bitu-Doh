#include <iostream>
#include <algorithm>
#include<vector>
using namespace std;
long money(int n, vector<int> arr) {
	long result = 0; // 자료형의 범위 유의하기!
	sort(arr.begin(), arr.end(), greater<>());
	for (int j = 0; j < n; j++) {
		int remain = arr.at(j) - j;//요금 계산하기
		if (remain > 0) {//요금이 음수일 경우 0원을 받는 것 이므로 양수일 경우에만 더해줌
			result += remain;
		}
	}
	return result;
}
int main(void) {
	int n;
	cin >> n;
	vector<int> arr(n);
	for (int i = 0; i < n; i++) {
		int a;
		cin >> a;
		arr.push_back(a);
	}
	cout << money(n , arr);
}