#include<bits/stdc++.h>
using namespace std;

int binary_peak(vector<int> &A, int low, int high)
{

	if(low > high)
	{
		return -1;
	}

	int mid = low + (high-low)/2;

	if(A[mid] > A[mid-1] && A[mid] > A[mid+1])
	{
		return mid;
	}
	else if(A[mid] > A[mid-1] && A[mid] < A[mid+1])
	{
		return binary_peak(A,mid+1, high);
	}
	else
	{
		return binary_peak(A,low, mid-1);
	}

}

template<class T>
void print(const vector<T> &A)
{
	for(auto x: A)
	{
		cout<<x<<" ";
	}
	cout<<endl;
}

int main()
{
	int n;
	cin>>n;
	vector<int> A;

	for(int i=0;i<n;i++)
	{
		int inp;
		cin>>inp;
		A.push_back(inp);
	}

	cout<<binary_peak(A,0,n-1);

	return 0;
}