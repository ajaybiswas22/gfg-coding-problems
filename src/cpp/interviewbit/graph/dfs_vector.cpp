#include<vector>
#include<iostream>
#include<map>
using namespace std;

void insert(vector<vector<int> > &v,int a,int b)
{
    v[a].push_back(b); //directed graph
}

void dfs(vector<vector<int> > &v,int current, int size)
{
    static vector<int> visited(size+1,0);
    visited[current] = 1;
    cout << current << " ";
 
    // Recur for all the vertices adjacent
    // to this vertex
    
    for (int i=0; i<v[current].size();i++)
        if (!visited[v[current][i]]) {
            dfs(v,v[current][i],size);   
        }
    

}
int main()
{
    int current=0 ;
    int size = 5;
    vector<vector<int> > v(size+1);
    insert(v,0,1);
    insert(v,0,2);
    insert(v,1,3);
    insert(v,1,4);
    insert(v,1,0);
    insert(v,2,0);
    insert(v,3,1);
    insert(v,4,1);
    dfs(v,current,size);
}
