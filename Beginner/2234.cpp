// https://www.beecrowd.com.br/judge/en/problems/view/2234
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
    int a, b;
    float ans;
    cin >> a >> b;
    ans = a*1.0 / b;
    cout << fixed << setprecision(2) << ans << endl;
    return 0;
}
