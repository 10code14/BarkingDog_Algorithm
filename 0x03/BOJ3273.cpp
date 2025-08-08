#include <bits/stdc++.h>
using namespace std;

int main()
{
	ios::sync_with_stdio(0);
	cin.tie(0);

	int arr[100000];
	int N, M; // �Է��� ����, ���ϴ� ��
	int cnt = 0;

	cin >> N;
	for (int i = 0; i < N; i++) cin >> arr[i];
	cin >> M;
	sort(arr, arr + N); // ���� ����, ���� : ������ ���� + 1 �ε����� �־����

	//�迭�� ������������ �����ϴ� ���� ������ ���
	//std::sort(arr, arr + N, std::greater<int>());

	int left = 0;
	int right = N - 1;

	while (left < right)
	{
		int temp = arr[left] + arr[right];
		if (temp < M) left++;
		else if (temp > M) right--;
		else
		{
			cnt++;
			left++;
			right--;
		}
	}
	

	cout << cnt;
}