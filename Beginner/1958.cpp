// https://www.beecrowd.com.br/judge/en/problems/view/1958
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
    long double X;
    char s[110];
    scanf("%LE", &X);
    sprintf(s, "%LE", X);
    if (s[0] != '-')
        printf("+");
    printf("%.4LE\n", X);
    return 0;
}
