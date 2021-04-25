#include<iostream>
#include<vector>
#include<list>
using namespace std;
void insert(vector<vector<int>> &v,int a, int b)
{
    v[a].push_back(b); //undirected
    //v[b].push_back(a);

}
void bfs(vector<vector<int>> &v,int size,int start )
{
    list<int> q;
    vector<int> visited(size+1,0);
    q.push_back(start);
    visited[start]=1;

    while(q.size()!=0)
    {
        int value = q.front();
        q.pop_front();
        
        cout<<value<<"\n";
        for(int i=0;i<v[value].size();i++)
        {
            if(visited[v[value][i]] == 0) //visited(element(2D))
            {
                q.push_back(v[value][i]);
                visited[v[value][i]] = 1;
            }
        }

    }

    for(int i=0;i<size; i++)
    {
       // cout<<visited[i]<<"\n";
        if(visited[i]==0)
        {
            cout<<"NO"<<"\n";
            
            return;
        }
    }
    cout<<"Yes mother vertex is : "<<start<<"\n"; 

}
int main()
{
    int size=5;
    vector<vector<int>> v(size+1);
    int start=4;
    insert(v,1,0);
    insert(v,0,2);
    insert(v,2,1);
    insert(v,0,3);
    insert(v,3,4);
    bfs(v,size,start);
}