#include <iostream>
#include <vector>
#include <algorithm>
#include <cmath>
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

	int min = v[1], max = v[1];//range�� ���ϱ� ���ؼ� 
	for (int i = 0; i < N; i++) {
		int index;
		if (min > v[i]) min = v[i];
		if (max < v[i]) max = v[i];
		if (v[i] == 0) {
			index = v[i];//�ֺ� ���ϱ� ���� index �� ����
		}
		else if (v[i] < 0) {
			index = -v[i];
		}
		else if (v[i] > 0) {
			index = v[i] + 4000;
		}
		answer[index]++;
	}
	ran = max - min;
	aver = floor((aver / N) + 0.5); //�ݿø� �Լ� ���!
	sort(v.begin(), v.end());
	mid = v[(int)(N / 2)];
	int max_index = 0; //�ֺ��� ���ϱ� ���� ���� ū index�� 
	bool flag = true;
	int cnt = 0;
	for (int i = 0; i < 8001; i++) {
		if (max_index <= answer[i]) {
			//�ֺ��� �ΰ��� ���
			if (flag && answer[i] == max_index) {
				if (cnt == 3) {//�ι�°�� ���� �ֺ�
					flag = false;
					break;
				}
				cnt++;
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
			max_index = answer[i];
		}
	}
	cout << aver << "\n" << mid << "\n" << mode << "\n" << ran;

}