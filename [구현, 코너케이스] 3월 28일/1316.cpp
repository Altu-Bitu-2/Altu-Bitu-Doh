#include <iostream>
using namespace std;
int main() {
	int N;
	cin >> N;
	int cnt = 0;
	char store;
	for (int i = 0; i < N; i++) {
		int alphabet[26] = { 0, };//���ĺ� ���� �� �迭�� �ʿ��ϴ�.
		string a;
		cin >> a;
		int a_size = a.length();
		store = a[0];//���� ���� (���ӵǴ��� Ȯ���ϱ� ����)������ ������ �ʿ�
		bool flag = true;
		for (int k = 0; k < a_size; k++) {
			++alphabet[(a[k] - 'a')];//���ĺ� ��������
			if (alphabet[(a[k] - 'a')] == 1) {
				store = a[k];
			}
			else if (alphabet[(a[k] - 'a')] != 1) { //���� ���ĺ��� �������� ���Դٸ� �����ߴ��� Ȯ���ؾ���.
				if (store != a[k]) {
					flag = false;
					break;
				}
				else {
					store = a[k];
				}
			}
		}
		if (flag == true) cnt++;
	}
	cout << cnt;
}