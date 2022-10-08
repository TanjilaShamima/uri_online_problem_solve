// https://www.beecrowd.com.br/judge/en/problems/view/1214
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
    int i, t, n, sum, c;
    double avg_num, ans;
    cin >> t;
    while (t--)
    {
        cin >> n;
        int arr[1001];
        sum = 0;
        c = 0;
        for (i = 1; i <= n; i++)
        {
            cin >> arr[i];
            sum = sum + arr[i];
        }
        avg_num = sum / (n * 1.0);
        for (i = 1; i <= n; i++)
        {
            if (arr[i] > avg_num)
                c++;
        }

        ans = (c * 100) / (n * 1.0);
        cout << showpoint;
        cout << fixed;
        cout << setprecision(3);
        cout << ans << "%" << endl;
    }

    return 0;
}