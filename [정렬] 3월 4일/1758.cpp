#include <iostream>
#include <algorithm>
#include<vector>
using namespace std;
long money(int n, vector<int> arr) {
	long result = 0; // �ڷ����� ���� �����ϱ�!
	sort(arr.begin(), arr.end(), greater<>());
	for (int j = 0; j < n; j++) {
		int remain = arr.at(j) - j;//��� ����ϱ�
		if (remain > 0) {//����� ������ ��� 0���� �޴� �� �̹Ƿ� ����� ��쿡�� ������
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