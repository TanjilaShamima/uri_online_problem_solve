// https://www.beecrowd.com.br/judge/en/problems/view/2166
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
    double n, ans = 0.0;
    cin >> n;
    while (n--)
    {
        ans += 2.0;
        ans = 1.0 / ans;
    }

    cout << fixed << setprecision(10) << ans + 1.0 << endl;
    return 0;
}
