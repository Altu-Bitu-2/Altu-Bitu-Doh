#include <iostream>
#include <algorithm>
#include<vector>
using namespace std;
int money(int n, vector<int> arr) {
	int result = 0;
	sort(arr.begin(), arr.end(), greater<>());
	for (int j = 0; j < n; j++) {
		int remain = arr.at(j) - j;
		if (remain > 0) {
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