// https://www.beecrowd.com.br/judge/en/problems/view/1329
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
    int i, t, n, c, d;
    while (1)
    {
        scanf("%d", &t);
        c = 0;
        d = 0;
        if (t == 0)
            break;
        for (i = 1; i <= t; i++)
        {
            scanf("%d", &n);
            if (n == 0)
                c++;
            else if (n == 1)
                d++;
        }
        printf("Mary won %d times and John won %d times\n", c, d);
    }

    return 0;
}