// https://www.beecrowd.com.br/judge/en/problems/view/2172
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
    int x, y;
    while (1)
    {
        cin >> x >> y;
        if (x > 0 && y > 0)
        {
            cout << x * y << endl;
        }
        if (x == 0 && y == 0)
            break;
    }
    return 0;
}
