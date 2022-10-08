
// https://www.beecrowd.com.br/judge/en/problems/view/2764
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

    int m, d, y;
    char ch = '/';
    char ch1 = '-';
    scanf("%d%c%d%c%d", &d, &ch, &m, &ch, &y);
    printf("%02d%c%02d%c%02d\n", m, ch, d, ch, y);
    printf("%02d%c%02d%c%02d\n", y, ch, m, ch, d);
    printf("%02d%c%02d%c%02d\n", d, ch1, m, ch1, y);
    return 0;
}
