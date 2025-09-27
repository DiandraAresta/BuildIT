#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {
    int N,kali;
    scanf("%i",&N);
    
    for(int i=1; i<=10; i++){
        kali = N*i;
        printf ("%i", N);
        printf (" x ");
        printf ("%i", i);
        printf (" = ");
        printf("%i \n", kali);
    } 

  
    return 0;
}
