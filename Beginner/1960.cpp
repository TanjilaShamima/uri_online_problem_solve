// https://www.beecrowd.com.br/judge/en/problems/view/1960
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
    string a[10] = {"", "C", "CC", "CCC", "CD", "D", "DC", "DCC", "DCCC", "CM"};
    string b[10] = {"", "X", "XX", "XXX", "XL", "L", "LX", "LXX", "LXXX", "XC"};
    string c[10] = {"", "I", "II", "III", "IV", "V", "VI", "VII", "VIII", "IX"};
    int n;
    cin >> n;
    string res = a[n/100] + b[(n%100)/10] + c[n%10];
    cout << res << endl;
    return 0;
}
