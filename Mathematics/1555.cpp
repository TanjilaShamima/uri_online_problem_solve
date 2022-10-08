// https://www.beecrowd.com.br/judge/en/problems/view/1555
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
    int t, i, x, y, a, b, c, ans = 0;
    scanf("%d", &t);
    while (t--)
    {
        scanf("%d %d", &x, &y);
        a = ((3 * x) * (3 * x)) + (y * y);
        b = (2 * (x * x)) + ((5 * y) * (5 * y));
        c = (-(100 * x)) + (y * y * y);
        if (a > b && a > c)
        {
            printf("Rafael ganhou\n");
        }
        else if (b > a && b > c)
        {
            printf("Beto ganhou\n");
        }
        else if (c > a && c > b)
        {
            printf("Carlos ganhou\n");
        }
    }

    return 0;
}