// https://www.beecrowd.com.br/judge/en/problems/view/1197
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
    int v, t, dis = 1, n;
    while (scanf("%d %d", &v, &t) != EOF)
    {
        dis = v * (2 * t);
        cout << dis << endl;
    }

    return 0;
}