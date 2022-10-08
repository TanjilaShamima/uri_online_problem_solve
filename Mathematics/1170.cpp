// https://www.beecrowd.com.br/judge/en/problems/view/1170
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
    int n, count;
    float x;
    cin >> n;
    while (n--)
    {
        cin >> x;
        count = 0;
        while (x > 1)
        {
            x /= 2;
            count++;
        }
        cout << count << " dias" << endl;
    }

    return 0;
}