#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {
    int n = 3;
    int i;
    scanf("%i", &n);
    for(i = 1; i<=10; i++){
        int h = i*n;
        printf("%d x %d = %i\n", n, i, h);
    }
    
    
    
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */    
    return 0;
}
