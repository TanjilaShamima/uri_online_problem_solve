// https://www.beecrowd.com.br/judge/en/problems/view/2863
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
    int i, t, s;
    double p[100], j = 11.0;
    while (!(cin >> t).eof())
    {
        j = 11.0;
        for (i = 1; i <= t; i++)
        {
            cin >> p[i];
            if (p[i] < j)
                j = p[i];
        }
        cout << fixed << setprecision(2) << j << endl;
    }
    return 0;
}
