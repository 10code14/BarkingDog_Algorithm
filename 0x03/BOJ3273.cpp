#include <iostream>
using namespace std;

int main()
{
	ios::sync_with_stdio(0);
	cin.tie(0);

	int max = 0;
	int flag[10] = { 0,0,0,0,0,0,0,0,0,0 };
	int n;

	cin >> n;

	while (n)
	{
		int temp = n % 10;
		if (temp == 6 || temp == 9) flag[6]++;
		else flag[temp]++;

		n /= 10;
	}
	
	flag[6]++;
	flag[6] /= 2;
	 
	for (int i = 0; i < 10; i++) if (max < flag[i]) max = flag[i];
	
	cout << max;
}