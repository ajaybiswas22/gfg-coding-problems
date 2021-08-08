#include <stdio.h>
#include <string.h>
int main()
{
    char students[100001];
    int t,i,c;
    scanf("%d",&t);
    while(t--)
    {
        c=0;
        scanf("%s",students);
        for(i=0;i<strlen(students);i++)
            if(students[i]=='b'&&students[i+1]=='g')
            {i++; c++; }
            else if(students[i+1]=='b'&&students[i]=='g')
              { i++; c++; }
        printf("%d\n",c);
    }
    return 0;
}