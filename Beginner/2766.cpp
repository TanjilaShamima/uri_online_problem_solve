// https://www.beecrowd.com.br/judge/en/problems/view/2780
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
    string s;
    for (int i = 0; i < 10; i++)
    {
        cin >> s;
        if (i + 1 == 3 || i + 1 == 7 || i + 1 == 9)
            cout << s << endl;
    }

    return 0;
}
