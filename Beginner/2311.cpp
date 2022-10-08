
// https://www.beecrowd.com.br/judge/en/problems/view/2311
// Tanjila Shamima
// Software Engineer at BJIT Group
// uri online problem solved by Tanjila Shamima
// personal website: https://tanjila-shamima.web.app/

#include <iostream>
#include <iomanip>
#include <bits/stdc++.h>
#include <math.h>
#include <string>

using namespace std;

int main()
{

    int i, t;
    char name[1000];
    double a = 0.0, arr[7], j = 0.0, k = 10.0, sum = 0.0;
    scanf("%d", &t);
    while (t--)
    {
        scanf("%s", &name);
        scanf("%lf", &a);

        j = 0.0;
        k = 10.0;
        sum = 0;
        for (i = 0; i < 7; i++)
        {
            scanf("%lf", &arr[i]);
            sum += arr[i];
            if (arr[i] > j)
                j = arr[i];
            if (arr[i] < k)
                k = arr[i];
        }
        sum = sum - (j + k);
        printf("%s %.2lf\n", name, sum * a);
    }
    return 0;
}
