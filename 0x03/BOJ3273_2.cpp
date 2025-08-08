#include <bits/stdc++.h>
using namespace std;

int arr[100000];
bool flag[2000000] = { false, };

int main()
{
	int N, M; // 수열 크기, 합
	int cnt = 0;
	
	cin >> N;
	for (int i = 0; i < N; i++) cin >> arr[i];
	cin >> M;

	for (int i = 0; i < N; i++)
	{
		if (M - arr[i] > 0 && flag[M - arr[i]]) cnt++;
		flag[arr[i]] = true;
	}

	cout << cnt;

}