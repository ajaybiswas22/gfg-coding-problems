#include<bits/stdc++.h>
using namespace std;

int neighSum(vector<vector<int>> &num, int r, int c)
{
    int m = num.size();
    int n = num[0].size();
    int sums = 0;
    
    if(r == 0 && c == 0)
    {
        sums = num[r+1][c] + num[r][c+1];
    }
    else if(r == 0 && c == n-1)
    {
        sums = num[r+1][c] + num[r][c-1];
    }
    else if(r == m-1 && c == 0)
    {
        sums = num[r-1][c] + num[r][c+1];
    }
    else if(r == m-1 && c == n-1)
    {
        sums = num[r][c-1] + num[r-1][c];
    }
    else
    {
        sums =  num[r+1][c] + num[r-1][c] + num[r][c+1] + num[r][c-1];
    }
    return sums;
}

vector<vector<int>> neighbouringElements(vector<vector<int>> &num)
{
        int m = num.size();
    	int n = num[0].size();
    	vector<vector<int>> jum(m,vector<int>(n,0));
    
    	for(int i=0;i<m;i++)
        {
            for(int j=0;j<n;j++)
            {
                jum[i][j] = neighSum(num,i,j);
            }
        }
    return jum;
}

void print(std::vector<std::vector<int>> &num)
{
	        int m = num.size();
    	int n = num[0].size();

	for(int i=0;i<m;i++)
	{
		for(int j=0;j<n;j++)
		{
			cout<<num[i][j]<<" ";
		}
		cout<<"\n";
	}
}

int main()
{
	std::vector<vector<int>> v;
    int m = 2;
    int n = 2;

	for(int i=0;i<m;i++)
	{
		for(int j=0;j<n;j++)
		{
			cin>>v[i][j];
		}
	}

	std::vector<vector<int>> c = neighbouringElements(v);
}