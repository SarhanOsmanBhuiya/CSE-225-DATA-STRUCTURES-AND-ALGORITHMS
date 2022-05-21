#include <stdio.h>
#include <stdlib.h>

int main()
{
    int x, y, sum;

    printf("Enter two natural numbers\n");

    scanf("%d", &x);

    scanf("\n%d", &y);

    if ((x>0&&x<=200) && (y>0&&y<=200))
    {
        sum = x + y;

        printf("%d", sum);
    }
    return 0;
}
