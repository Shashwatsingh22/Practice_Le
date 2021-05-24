#include<iostream>
using namespace std;

bool canThisSuitable(int A[], int size, int stud, int mid)
{
	int sum = 0;
	for (int i = 0; i < size; i++)
	{
		sum += A[i];
		if (sum <= mid)
		{
			continue;
		}
		else
		{
			stud--;
			sum = 0;
			i -= 1;
			if (stud == 0)
			{
				return false;
			}
		}
	}
	return true;
}

int correctPlace(int A[], int size, int stud)
{
	//Here atleast we can read the max page book that is A[size-1];
	int f = A[size - 1], l = 0;
	for (int i = 0; i < size; i++) l += A[i];
	int ans = INT_MAX;
	while (f <= l)
	{
		int mid = (f + l) / 2;

		if (canThisSuitable(A, size, stud, mid))
		{
			ans = min(ans, mid);
			l = mid - 1;
		}
		else
		{
			f = mid + 1;
		}
	}
	return ans;
}

int main()
{
#ifndef ONLINE_JUDGE
	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);
#endif

	int t;
	cin >> t;
	while (t--)
	{
		int b, s;
		cin >> b >> s;
		int P[b] = {0};
		for (int i = 0; i < b; i++)
		{
			cin >> P[i];
		}
		cout << correctPlace(P, b, s) << endl;
	}


}