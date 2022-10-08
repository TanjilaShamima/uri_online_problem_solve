
// https://www.beecrowd.com.br/judge/en/problems/view/2310
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

    char name[1000];
    int t, a, b, c, d, e, f;
    double s1 = 0, s2 = 0, s3 = 0, s4 = 0, s5 = 0, s6 = 0;
    double p, q, r;
    scanf("%d", &t);
    a = b = c = d = e = f = 0;
    while (t--)
    {
        scanf("%s", &name);
        scanf("%d %d %d", &a, &b, &c);
        scanf("%d %d %d", &d, &e, &f);
        s1 += a;
        s2 += b;
        s3 += c;
        s4 += d;
        s5 += e;
        s6 += f;
    }
    printf("Pontos de Saque: %.2lf %%.\n", (s4 / s1) * 100);
    printf("Pontos de Bloqueio: %.2lf %%.\n", (s5 / s2) * 100);
    printf("Pontos de Ataque: %.2lf %%.\n", (s6 / s3) * 100);
    return 0;
}
