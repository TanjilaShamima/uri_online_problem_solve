// https://www.beecrowd.com.br/judge/en/problems/view/1921
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
    long long int n;
    scanf("%lld", &n);
    printf("%lld\n", (n * (n - 3) / 2));
    return 0;
}