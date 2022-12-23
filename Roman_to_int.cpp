#include <bits/stdc++.h>
using namespace std;
int main()
{
    unordered_map<char, int> m;
    string s;
    int ans = 0;
    cin >> s;
    m.insert({'I', 1});
    m.insert({'V', 5});
    m.insert({'X', 10});
    m.insert({'L', 50});
    m.insert({'C', 100});
    m.insert({'D', 500});
    m.insert({'M', 1000});
    for (int i = 0; i < s.length(); i++)
    {
        if (m[s[i]] < m[s[i + 1]])
        {
            ans = ans - m[s[i]];
        }
        else
        {
            ans = ans + m[s[i]];
        }
    }
    cout << ans << endl;
}