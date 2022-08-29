// https://www.beecrowd.com.br/judge/en/problems/view/1970
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
    int n, i = 0;
    cin >> n;
    while (i < 6)
    {
        if (n % 2 != 0)
        {
            cout << n << endl;
            i++;
        }
        n++;
    }
    return 0;
}
