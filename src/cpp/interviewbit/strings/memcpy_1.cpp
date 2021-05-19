#include <stdio.h>
#include <string.h>

int main () {
   char x[] = "huhuhuhu";
   char dest[100];
   memcpy(dest, x, 1);
   printf("After memcpy dest = %s\n", dest);
   
   return(0);
}