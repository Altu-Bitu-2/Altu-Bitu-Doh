#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;

int main(void) {
	int arr[20];
	int a, b;
	for (int l = 0; l < 20; l++) {
		arr[l] = l + 1;
	}
	for (int i = 0; i < 10; i++) {
		cin >> a >> b;
		reverse(arr + a - 1, arr + b); //역순으로 출력하는 것이므로 reverse
	}
	for (int j = 0; j < 20; j++) {
		cout << arr[j] << ' ';
	}
}