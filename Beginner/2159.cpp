// https://www.beecrowd.com.br/judge/en/problems/view/2159
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
    int n;
    double ans1, ans2;
    cin >> n;
    ans1 = (n / log(n)) * 1.0;
    ans2 = ans1 * 1.25506;
    cout << fixed << setprecision(1) << ans1 << " " << fixed << setprecision(1) << ans2 << endl;
    return 0;
}
