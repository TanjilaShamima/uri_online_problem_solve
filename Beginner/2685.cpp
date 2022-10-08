
// https://www.beecrowd.com.br/judge/en/problems/view/2685
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

    int n;
    while (!(cin >> n).eof())
    {
        if (n < 90)
            cout << "Bom Dia!!" << endl;
        else if (n < 180)
            cout << "Boa Tarde!!" << endl;
        else if (n < 270)
            cout << "Boa Noite!!" << endl;
        else if (n < 360)
            cout << "De Madrugada!!" << endl;
        else if (n == 360)
            cout << "Bom Dia!!" << endl;
    }
    return 0;
}
