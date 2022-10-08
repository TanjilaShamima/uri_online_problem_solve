// https://www.beecrowd.com.br/judge/en/problems/view/1387
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
    int L, R;
    while (1)
    {
        scanf("%d %d", &L, &R);
        if (L > 0 && R > 0)
            printf("%d\n", L + R);
        if (L == 0 && R == 0)
            break;
    }

    return 0;
}