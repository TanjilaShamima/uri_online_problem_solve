// https://www.beecrowd.com.br/judge/en/problems/view/2780
// Tanjila Shamima
// Software Engineer at BJIT Group
// uri online problem solved by Tanjila Shamima
// personal website: https://tanjila-shamima.web.app/

#include <iostream>
#include <iomanip>

using namespace std;

int main()
{
    int i, j;
    string s;
    getline(cin, s);
    for (int i = 0; i < s.length(); i++)
    {
        if(s[i] == ',') {
            cout << endl;
            i++;
        }

        cout << s[i];
    }
    cout << endl;
    

    return 0;
}
