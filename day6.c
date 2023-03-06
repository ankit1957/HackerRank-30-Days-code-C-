#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {

    /* Enter your code here. Read input from STDIN. Print output to STDOUT */  
   int t, i, j;
   char str[10000];
   scanf("%d", &t);
   for(i=0; i<t; i++){
       scanf("%s", &str);
       for(j=0; j<strlen(str); j++){
           if(j%2 == 0){
               printf("%c", str[j]);
            }
       }
       printf(" ");
       for(j=0; j<strlen(str); j++){
           if(j%2 != 0){
               printf("%c", str[j]);
           }
       }
       printf("\n");
   }
    return 0;
}
