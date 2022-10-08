// https://www.beecrowd.com.br/judge/en/problems/view/1221
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
    int t, i, count;
    long int n;
    scanf("%d", &t);

    while (t--)
    {
        scanf("%ld", &n);
        count = 0;
        for (i = 2; i < sqrt(n); i++)
        {
            if (n % i == 0)
                count++;
        }
        if (count == 0)
            printf("Prime\n");
        else
            printf("Not Prime\n");
    }

    return 0;
}