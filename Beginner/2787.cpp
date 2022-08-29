// https://www.beecrowd.com.br/judge/en/problems/view/2787
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
    int x, y;
    cin >> x >> y;
    if(x%2 != 0 && y&2 != 0) cout << "1" << endl;
    else if(x%2 == 0 && y%2 == 0) cout << "1" << endl;
    else cout << "0" << endl;
    return 0;
}
