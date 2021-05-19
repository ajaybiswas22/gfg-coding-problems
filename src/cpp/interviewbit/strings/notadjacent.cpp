#include<iostream>
#include<vector>
using namespace std;
int search(vector<int> &v,int temp)
{
    int maxx = -99999;
    int maxx2;
    int index;
    int oldindex;

    for(int i=0;i<v.size();i++)
    {
        if(maxx < v[i])
        {
            oldindex = index;
            maxx2 = maxx;
            maxx = v[i];
            index = i;
        }
    }

    if(maxx <= 0)
    {
        return -1;
    }

    if(temp == index)
    {
        v[oldindex] = v[oldindex] - 1;
        return oldindex;
    }
    else
    {
        v[index] = v[index] - 1;
        return index;
    }
    
}
void arrange(vector<char> &v)
{
    //int max=0;
    int index;
    int temp = -99;
    int output = -99;
    vector<int> v1(26,0);
    for(int i=0; i<v.size(); i++)
    {
        if(v[i]>='a' && v[i]<='z')
        {
            index=v[i]-'a';
            v1[index]=v1[index]+1;
        }
    }

    for(;;)  {  
        output = search(v1,temp); 
        if( output != -1)
        {
            printf("%c ",output+'a');
            temp = output;
        }
        else if(output == -1)
        {
            break;
        }

    }
   
}
int main()
{
    string s="abccc";
    vector<char> v(s.begin(),s.end());
    arrange(v);

    return 0;
}