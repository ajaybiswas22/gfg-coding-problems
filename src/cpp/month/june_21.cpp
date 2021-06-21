// rat in a maze using backtracking
#include<bits/stdc++.h>
using namespace std;

bool isSafe(vector<vector<int>> maze, int i, int j)
{
    int n = maze.size();
    int m = maze[0].size();

    if(i<m && j<n && i>=0 && j>=0 && maze[i][j] == 1)
        return true;
    else
        return false;
}

bool solveMaze(vector<vector<int>> &maze, int y, int x)
{
    int n = maze.size();
    int m = maze[0].size();

    if(x == n-1 && y == m-1)
    {
        return true;
    }

    if(isSafe(maze, x+1, y))
    {
        solveMaze(maze,x+1,y);
        maze[x+1][y] = 2;
        return true;
    }

    if(isSafe(maze, x, y+1))
    {
        solveMaze(maze,x,y+1);
        maze[x][y+1] = 2;
        return true;
    }

    if(isSafe(maze, x-1, y))
    {
        solveMaze(maze,x-1,y);
        maze[x-1][y] = 2;
        return true;
    }

    if(isSafe(maze, x, y-1))
    {
        solveMaze(maze,x,y-1);
        maze[x][y-1] = 2;
        return true;
    }

    else
    {
        maze[x][y] = 0;
        return false;
    }

}

void printMaze(vector<vector<int>> maze)
{
    for(int i=0;i<maze.size();i++)
    {
        for(int j=0;j<maze[0].size();j++)
        {
            cout<<maze[i][j]<<" ";
        }
        cout<<"\n";
    }
}

int main()
{
    
    vector<vector<int>> maze = {{1,1,0,0,0},
                                {0,1,1,1,0},
                                {0,0,1,0,0},
                                {0,0,1,1,0},
                                {0,0,1,1,1}};

    cout<<"Possible "<<solveMaze(maze,0,0)<<endl;
    printMaze(maze);

}