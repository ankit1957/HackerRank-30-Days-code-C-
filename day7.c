#include <assert.h>
#include <ctype.h>
#include <limits.h>
#include <math.h>
#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

char* readline();
char* ltrim(char*);
char* rtrim(char*);
char** split_string(char*);

int parse_int(char*);

int main(){
    int n, arr[10000];
    scanf("%d", &n);
    for(int i=0; i<n; i++){
        scanf("%d ", &arr[i]);
    }
    for(int i=n-1; i>=0; i--){
        printf("%d ", arr[i]);
    }
}
