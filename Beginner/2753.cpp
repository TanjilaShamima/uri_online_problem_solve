
// https://www.beecrowd.com.br/judge/en/problems/view/2753
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

    int i;
    char ch1, ch2;
    for (i = 97, ch1 = 'e', ch2 = 'a'; i <= 122, ch2 <= 'z'; i++, ch2++)
    {
        printf("%d %c %c\n", i, ch1, ch2);
    }
    return 0;
}
