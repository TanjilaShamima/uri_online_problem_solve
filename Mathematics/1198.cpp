// https://www.beecrowd.com.br/judge/en/problems/view/1198
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
    long long int x, y, dis;
    while (scanf("%lld %lld", &x, &y) != EOF)
    {

        if (x > y)
            printf("%lld\n", x - y);
        else
            printf("%lld\n", y - x);
    }
}