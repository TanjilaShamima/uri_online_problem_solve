// https://www.beecrowd.com.br/judge/en/problems/view/1467
// Tanjila Shamima
// Software Engineer at BJIT Group
// uri online problem solved by Tanjila Shamima
// personal website: https://tanjila-shamima.web.app/

#include <iostream>
#include <stdio.h>
#include <math.h>
#include <iomanip>
using namespace std;

int main()
{
    int a, b, c;
    while (scanf("%d", &a) != EOF)
    {
        cin >> b >> c;
        if (a == b && b == c)
            cout << "*" << endl;
        else if (a == b)
            cout << "C" << endl;
        else if (b == c)
            cout << "A" << endl;
        else if (c == a)
            cout << "B" << endl;
    }

    return 0;
}