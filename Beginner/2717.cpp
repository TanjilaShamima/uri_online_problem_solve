
// https://www.beecrowd.com.br/judge/en/problems/view/2717
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

    int t, x, y, sum;
    cin >> t;
    cin >> x >> y;
    sum = x + y;
    if (sum <= t)
        cout << "Farei hoje!" << endl;
    else if (sum > t)
        cout << "Deixa para amanha!" << endl;
    return 0;
}
