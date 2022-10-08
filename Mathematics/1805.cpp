// https://www.beecrowd.com.br/judge/en/problems/view/1805
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
    long long int a, b, sum = 0;
    scanf("%lld %lld", &a, &b);
    sum = (a + b) * (b - a + 1) / 2;
    printf("%lld\n", sum);
    return 0;
}