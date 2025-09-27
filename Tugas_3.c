#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {
    int a,b,total;
    int i;
    scanf ("%i", &a);
    scanf ("%i", &b);
    scanf ("%i", &total);
    for (i = 1; i <= b; i++){
        total = a + (a+i); 
    }
        printf ("%i", total);
 
    return 0;