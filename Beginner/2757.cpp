// https://www.beecrowd.com.br/judge/en/problems/view/2757
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
    int a, b, c;
    cin >> a >> b >> c;
    cout << "A = " << a <<", B = "<< b << ", C = " << c << endl;
    printf("A = %10d, B = %10d, C = %10d\n", a, b, c);
    printf("A = %010d, B = %010d, C = %010d\n", a, b, c);
    printf("A = %-10d, B = %-10d, C = %-10d\n", a, b, c);
    return 0;
}
