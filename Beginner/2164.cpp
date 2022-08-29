// https://www.beecrowd.com.br/judge/en/problems/view/2164
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
    double n, ans1, ans2, ans, x, y;
    cin >> n;
    x = (1 + sqrt(5)) / 2.0;
    y = (1 - sqrt(5)) / 2.0;

    ans1 = pow(x, n);
    ans2 = pow(y, n);
    ans = (ans1 - ans2) / (sqrt(5));
    cout << fixed << setprecision(1) << ans << endl;
    return 0;
}
