#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {
    int i = 4;
    double d = 4.0;
    char s[] = "HackerRank ";

    
    // Declare second integer, double, and String variables.
    int a = 0, weird;
    double b = 0;
    char string[64]; // <no reason for 64
    
    scanf("%d%lf", &a, &b);
    scanf("%d", &weird); // <THIS fixed all my problems :D
    scanf("%[^\n]", string);  

    printf("%d\n", i+a);
    printf("%.1lf\n", d+b);
    printf("%s%s", s, string);

    return 0;
}