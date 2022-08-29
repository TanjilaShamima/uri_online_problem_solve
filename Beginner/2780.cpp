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
    int n, p;
    cin >> n;
    if(n <= 800) p =1;
    else if(n <= 1400) p = 2;
    else if( n <= 2000) p = 3;
    cout << p << endl;
    return 0;
}
