#include<stdio.h>
#include<stdlib.h>
#include<string.h>

int main()
{
    char str[] = "hello";
    int arr[] = {10,20,30};
    char *chr = NULL;
    char *ptr = NULL;
    void *vptr = NULL;
    
    printf("sizeof(str) = %d\n",sizeof(str));
    printf("sizeof(ptr) = %d\n",sizeof(ptr));
    printf("sizeof(arr) = %d\n",sizeof(arr));
    printf("sizeof(*arr) = %d\n",sizeof(*arr));
    printf("sizeof(*str) = %d\n",sizeof(*str));
    printf("sizeof(*ptr) = %d\n",sizeof(*ptr));
    printf("sizeof(chr) = %d\n",sizeof(chr));
    printf("sizeof(*chr) = %d\n",sizeof(*chr));
    printf("strlen(str) = %d\n",strlen(str));
    printf("sizeof(vptr) = %d\n",sizeof(vptr));
    printf("sizeof(*vptr) = %d\n",sizeof(*vptr));
    printf("*str = %c\n",*str);
    printf("*ptr = %c\n",*ptr);
    //printf("strlen(ptr) = %d\n",strlen(ptr));  // will show nothing

    return 0;
}