// https://www.beecrowd.com.br/judge/en/problems/view/2161
// Tanjila Shamima
// Software Engineer at BJIT Group
// uri online problem solved by Tanjila Shamima
// personal website: https://tanjila-shamima.web.app/

#include <iostream>
#include <iomanip>
#include <bits/stdc++.h>

using namespace std;

int main()
{
    double n, ans = 0.0;
    cin >> n;
    while (n--)
    {
        ans += 6.0;
        ans = 1.0 / ans;
    }
    ans += 3.0;
    cout << fixed << setprecision(10) << ans << endl;
    return 0;
}
