// https://www.beecrowd.com.br/judge/en/problems/view/2203
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
    double x1, y1, x2, y2, v, r1, r2, X, Y, distance, range;
    while (!(cin >> x1 >> y1 >> x2 >> y2).eof())
    {
        cin >> v >> r1 >> r2;
        X = (x2 - x1) * (x2 - x1);
        Y = (y2 - y1) * (y2 - y1);
        distance = sqrt(X + Y);
        distance += v * 1.50;
        range = r1 + r2;
        if (distance > range)
            cout << "N" << endl;
        else
            cout << "Y" << endl;
    }
    return 0;
}
