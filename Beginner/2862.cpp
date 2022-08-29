// https://www.beecrowd.com.br/judge/en/problems/view/2862
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
    int t, n;
    cin >> t;
    while (t--)
    {
        cin >> n;
        if (n > 8000)
            cout << "Mais de 8000!" << endl;
        else
            cout << "Inseto!" << endl;
    }
    return 0;
}
