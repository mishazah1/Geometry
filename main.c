#include <stdio.h>
#include <stdlib.h>

int main(int ac, char** av)
{
    int x, y, R;
    printf("circle(x y, R)   input x,y,R\n");
    scanf("%d %d %d", &x, &y, &R);
    printf("circle(%d %d, %d)", x, y, R);
    return 0;
}
