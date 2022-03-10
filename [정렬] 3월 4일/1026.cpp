#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;
int main(void) {
	int n;
	int result = 0;
	cin >> n;
	int a[51];
	int b[51];
	for (int i = 0; i < n; i++) {
		cin >> a[i];
	}
	for (int k = 0; k < n; k++) {
		cin >> b[k];
	}
	sort(a,a+n);
	sort(b, b + n, greater<>());
	for (int j = 0; j < n; j++) {
		result += a[j]*b[j];
	}
	cout << result;
	
}