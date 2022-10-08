// https://www.beecrowd.com.br/judge/en/problems/view/2759
// Tanjila Shamima
// Software Engineer at BJIT Group
// uri online problem solved by Tanjila Shamima
// personal website: https://tanjila-shamima.web.app/

#include <iostream>
#include <iomanip>
#include <bits/stdc++.h>
#include <math.h>

using namespace std;

int main()
{
    char a, b, c;
    cin >> a >> b >> c;
    printf("A = %c, B = %c, C = %c\n", a, b, c);
    printf("A = %c, B = %c, C = %c\n", b, c, a);
    printf("A = %c, B = %c, C = %c\n", c, a, b);
    return 0;
}
