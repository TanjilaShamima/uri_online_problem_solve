
// https://www.beecrowd.com.br/judge/en/problems/view/2582
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
    scanf("%d", &t);
    while (t--)
    {
        scanf("%d %d", &x, &y);
        sum = x + y;
        switch (sum)
        {
        case 0:
            cout << "PROXYCITY" << endl;
            break;
        case 1:
            cout << "P.Y.N.G." << endl;
            break;
        case 2:
            cout << "DNSUEY!" << endl;
            break;
        case 3:
            cout << "SERVERS" << endl;
            break;
        case 4:
            cout << "HOST!" << endl;
            break;
        case 5:
            cout << "CRIPTONIZE" << endl;
            break;
        case 6:
            cout << "OFFLINE DAY" << endl;
            break;
        case 7:
            cout << "SALT" << endl;
            break;
        case 8:
            cout << "ANSWER!" << endl;
            break;
        case 9:
            cout << "RAR?" << endl;
            break;
        case 10:
            cout << "WIFI ANTENNAS" << endl;
            break;
        default:
            break;
        }
    }
    return 0;
}
