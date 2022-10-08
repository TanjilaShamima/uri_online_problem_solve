// https://www.beecrowd.com.br/judge/en/problems/view/1026
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
    int unsigned long a, b, c;

    while (scanf("%lu %lu", &a, &b) == 2)
    {
        c = (a ^ b);
        printf("%lu\n", c);
    }

    return 0;
}