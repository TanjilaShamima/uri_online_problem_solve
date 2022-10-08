// https://www.beecrowd.com.br/judge/en/problems/view/1161
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
    int i;
    long long x, y, fac1 = 1, fac2 = 1, sum = 0;
    while (scanf("%lld %lld", &x, &y) != EOF)
    {
        fac1 = 1;
        fac2 = 1;
        sum = 0;
        for (i = 1; i <= x; i++)
        {
            fac1 *= i;
        }
        for (i = 1; i <= y; i++)
        {
            fac2 *= i;
        }
        sum = fac1 + fac2;
        printf("%lld\n", sum);
    }

    return 0;
}