#include <stdio.h>

int main()
{
    int t, i, a, b;
    scanf("%d", &t);
    for(i=0; i<t; i++)
    {
        scanf("%d%d", &a, &b);
        a=a+b;
        printf("Case %d: %d\n", i+1, a);
    }
    return 0;
}
