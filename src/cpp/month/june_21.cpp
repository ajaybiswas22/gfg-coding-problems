// rat in a maze using backtracking
#include<iostream>
#include<vector>
using namespace std;

bool isSafe(vector<vector<int> > maze, int i, int j)
{
    int m = maze.size();
    int n = maze[0].size();

    if(i<m && j<n && i>=0 && j>=0)
    {
        if(maze[i][j]!=0)
            return true;
        else
            return false;
    }
        
    else
        return false;
}

bool solveMaze(vector<vector<int>> &maze, int x, int y)
{
    int m = maze.size();
    int n = maze[0].size();

    if(x == m-1 && y == n-1)
    {
        return true;
    }

    if(isSafe(maze, x, y+1))
    {
        solveMaze(maze,x,y+1);
        maze[x][y+1] = 2;
        return true;
    }

    if(isSafe(maze, x+1, y))
    {
        solveMaze(maze,x+1,y);
        maze[x+1][y] = 2;
        return true;
    }

    if(isSafe(maze, x, y-1))
    {
        solveMaze(maze,x,y-1);
        maze[x][y-1] = 2;
        return true;
    }

    if(isSafe(maze, x-1, y))
    {
        solveMaze(maze,x-1,y);
        maze[x-1][y] = 2;
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
    
    vector<vector<int>> maze = {{1,1,1,1,1},
                                {1,0,1,1,1},
                                {1,0,1,0,1},
                                {1,0,1,0,1},
                                {1,1,1,0,1}};

    cout<<"Possible "<<solveMaze(maze,0,0)<<endl;
    printMaze(maze);

}