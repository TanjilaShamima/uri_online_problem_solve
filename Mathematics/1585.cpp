// https://www.beecrowd.com.br/judge/en/problems/view/1585
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
    int t, x, y;
    scanf("%d", &t);
    while (t--)
    {
        scanf("%d %d", &x, &y);
        printf("%d cm2\n", x * y / 2);
    }

    return 0;
}