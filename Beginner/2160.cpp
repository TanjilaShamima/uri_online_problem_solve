// https://www.beecrowd.com.br/judge/en/problems/view/2160
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
    getline(cin, s);
    if (s.length() > 80)
        cout << "NO" << endl;
    else
        cout << "YES" << endl;
    return 0;
}
