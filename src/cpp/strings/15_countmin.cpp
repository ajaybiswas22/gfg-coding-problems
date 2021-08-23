#include<iostream>
#include<string.h>
#include<climits>
using namespace std;

void minLengthWord(char input[], char output[])
{
    int i=0,j=0;
    int count=0;
    int minn = INT_MAX;
    char temp[10000];

    if(strlen(input) == 0)
        return;
    
    while(input[i]!='\0')
    {
        if(input[i] == ' ' && count == 1)
        {
            output[0] = temp[j-1];
            output[1] = '\0';
            break;
        }
        else if(input[i] == ' ' && count < minn)
        {
            temp[j] = '\0';
            int m = 0;
            // copy temp to output
            while(temp[m]!= '\0')
            {
                output[m] = temp[m];
                m++;
            }
            output[m] = '\0';

            minn = count;
            count = 0;
            j=0;
        }
        else if(input[i] == ' ')
        {
            temp[j] = '\0';
            j=0;
            count=0;
        }
        else
        {
            temp[j] = input[i];
            j++;
            count++;
        }
        i++;

        if(input[i] == '\0' && count < minn)
        {
            int m = 0;
            // copy temp to output
            while(m<count)
            {
                output[m] = temp[m];
                m++;
            }
            output[m] = '\0';
        }
    }
}

int main()
{
    char ch[10000] = "a";
    char output[10000];
    minLengthWord(ch,output);
    cout<<output<<endl;
    
}