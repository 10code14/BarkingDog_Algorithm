#include <bits/stdc++.h>
using namespace std;

int main()
{
	ios::sync_with_stdio(0);
	cin.tie(0);

	int arr[100000];
	int N, M; // 입력할 개수, 원하는 합
	int cnt = 0;

	cin >> N;
	for (int i = 0; i < N; i++) cin >> arr[i];
	cin >> M;
	sort(arr, arr + N); // 오름 정렬, 주의 : 마지막 원소 + 1 인덱스를 넣어야함

	//배열을 내림차순으로 정렬하는 가장 간단한 방법
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