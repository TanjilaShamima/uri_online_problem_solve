// https://www.beecrowd.com.br/judge/en/problems/view/2845
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
    int t, i, n, j = 0;
    cin >> t;
    while (t--)
    {
        scanf("%d", &n);
        if (n > j)
        {
            j = n;
            n++;
        }
    }
    cout << j + 1 << endl;
    return 0;
}
