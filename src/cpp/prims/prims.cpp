#include<bits/stdc++.h>
using namespace std;
typedef pair<int, int> iPair;
void prims(vector <vector<iPair> >graph,int* parent,int* weight,int* visited,int V)
{
    priority_queue< iPair, vector <iPair> , greater<iPair> > pq;
    pq.push(make_pair(0, 0));
    while(!pq.empty())
    {
        int vertex=pq.top().second;
        pq.pop();
        visited[vertex]=1;
        for(int i=0;i<graph[vertex].size();i++)
        {
            int v =graph[vertex][i].first;
            int w =graph[vertex][i].second;
            if(w!=0 && !visited[i])
            {
                if(weight[i]>w)
                {
                    weight[i]=w;
                    parent[i]=vertex; 
                pq.push(make_pair(weight[i],i));
                }
            }
        }
    }
}

void printG(vector<vector<iPair> >graph)
{
    for(int i=0;i<graph.size();i++)
    {
        int n = graph[i].size();
        for(int j=0;j<n;j++)
        {
            cout<<i<<": "<<graph[i][j].first<<" "<<graph[i][j].second<<"\n";
        }
    }

}
int main() {
    int V,E;
    cin>>V>>E;
    vector<vector<iPair> >graph(V);
    int* parent=new int[V];
    int* weight=new int[V];
    int* visited=new int[V];
    for(int i=0;i<V;i++)
    {
        visited[i]=0;
        weight[i]=INT_MAX-5000;
    }
    for(int i=0;i<E;i++)
    {
        int u,v,weight;
        cin>>u>>v>>weight;
        graph[u].push_back(make_pair(v,weight));
        graph[v].push_back(make_pair(u,weight));
        
    }

    printG(graph);

    parent[0]=-1;
    weight[0]=0;
    prims(graph,parent,weight,visited,V);
    for(int i=1;i<V;i++)
        {    
                cout<<min(i,parent[i])<<" "<<max(i,parent[i])<<" "<<weight[i]<<endl;
        }
    
}