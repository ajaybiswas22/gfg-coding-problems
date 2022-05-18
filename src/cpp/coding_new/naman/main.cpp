#include<bits/stdc++.h>
using namespace std;

vector<int> books(vector<int> A,vector<int> B, int n)
{
	vector<int> first_time(n,0);
	int last = B.back();

	int t=1;

	while(t<=last)
	{
		int a = A[t];
		int b = B[t];

		if(a == b)
		{
			if(A)
		}
	}
}

int main()
{
	int n;
	cin>>n;
	vector<int> A;
	vector<int> B;

	for(int i=0;i<n;i++)
	{
		int x;
		cin>>x;
		A.push_back(x);
	}
	for(int i=0;i<n;i++)
	{
		int x;
		cin>>x;
		B.push_back(x);
	}

	vector<int> outp = books(A,B,n);
	return 0;
}