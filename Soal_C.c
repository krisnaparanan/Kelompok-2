#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main()
{

    /* Enter your code here. Read input from STDIN. Print output to STDOUT */
    int a;
    int b;
    int i = 0;

    scanf("%d", &a);

    scanf("%d", &b);
    for (; a <= b; a++)
    {
        i += a;
    }

    printf("%d", i);

    return 0;
}