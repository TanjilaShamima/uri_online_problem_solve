// https://www.beecrowd.com.br/judge/en/problems/view/2235
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
    int a, b, c;
    cin >> a >> b >> c;
    if (a - b == 0 || a - c == 0 || b - c == 0 || (a + b) - c == 0 || (b + c) - a == 0 || (a + c) - b == 0)
        cout << "S" << endl;
    else
        cout << "N" << endl;
    return 0;
}
