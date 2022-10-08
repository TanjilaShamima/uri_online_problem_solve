
// https://www.beecrowd.com.br/judge/en/problems/view/2547
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

    int num, max, min, weight, count = 0;
    while (!(cin >> num).eof())
    {
        count = 0;
        cin >> min >> max;

        while (num--)
        {
            cin >> weight;
            if (weight >= min && weight <= max)
                count++;
        }

        cout << count << endl;
    }
    return 0;
}
