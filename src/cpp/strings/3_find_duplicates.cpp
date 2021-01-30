#include<bits/stdc++.h>
#define MAX 256
using namespace std;

class Counter
{
    map<char,int> duplicateList;

    public:

    void duplicates(string str)
    {
        vector<char> v(str.begin(), str.end());

        // create pairs of characters and frequencies
        for (const char &c: v)
        {
           duplicateList[c] += 1;
        }
    }

    void printFrequencyList()
    {
        for( map<char,int>::iterator ii= duplicateList.begin(); ii!=duplicateList.end(); ++ii)  
        {  
            cout << (*ii).first << ": " << (*ii).second << endl;  
        }  
    }

    void printDuplicates()
    {
        for( map<char,int>::iterator ii= duplicateList.begin(); ii!=duplicateList.end(); ++ii)  
        {
            if((*ii).second > 1)  
                cout << (*ii).first << ": " << (*ii).second << endl;  
        }
    }

};

// gfg solution
class GCounter
{
    public:

    void fillCharCounts(char *str, int *count) 
    { 
        int i; 
        for (i = 0; *(str + i); i++) 
        count[*(str + i)]++; 
    }

    /* Print duplicates present  
    in the passed string */
    void printDups(char *str) 
    { 
          
        // Create an array of size 256 and fill 
        // count of every character in it 
        int *count = (int *)calloc(MAX,sizeof(int)); 
        fillCharCounts(str, count); 
  
        // Print characters having count more than 0 
        int i; 
        for (i = 0; i < MAX; i++) 
        if(count[i] > 1) 
            printf("%c : %d \n", i, count[i]); 
  
        free(count); 
    }  

};

int main()
{
    cout<<"STL Solution\n";
    Counter c;
    string s = "Hello World!";
    c.duplicates(s);
    c.printDuplicates();

    cout<<"\nGFG Solution\n";
    GCounter g ; 
    char str[] = "Hello World!"; 
    g.printDups(str); 

    system("PAUSE");
}