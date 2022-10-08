
// https://www.beecrowd.com.br/judge/en/problems/view/2702
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

    int a, b, c, d, e, f, m, n, o, result = 0;

    cin >> a >> b >> c;
    cin >> d >> e >> f;
    if (d > a)
        m = d - a;
    else
        m = 0;
    if (e > b)
        n = e - b;
    else
        n = 0;
    if (f > c)
        o = f - c;
    else
        o = 0;

    result = m + n + o;
    cout << result << endl;
    return 0;
}
