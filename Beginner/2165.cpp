// https://www.beecrowd.com.br/judge/en/problems/view/2165
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
    string s;
    getline(cin, s);
    if (s.length() > 140)
        cout << "MUTE" << endl;
    else
        cout << "TWEET" << endl;
    return 0;
}
