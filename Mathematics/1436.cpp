// https://www.beecrowd.com.br/judge/en/problems/view/1436
// Tanjila Shamima
// Software Engineer at BJIT Group
// uri online problem solved by Tanjila Shamima
// personal website: https://tanjila-shamima.web.app/

#include <iostream>
#include <stdio.h>
#include <math.h>
#include <iomanip>
using namespace std;

int main()
{
    int i, j, t, n, x[50], mid = 0;
    scanf("%d", &t);
    for (j = 1; j <= t; j++)
    {
        scanf("%d", &n);
        mid = (n + 1) / 2;
        for (i = 1; i <= n; i++)
        {
            scanf("%d", &x[i]);
            if (i == mid)
                printf("Case %d: %d\n", j, x[i]);
        }
    }

    return 0;
}