// اذكر الله
// صلِ على خير خلق الله محمد

#include <iostream>
#include <map>

using namespace std;

#define cin(vv)          \
    for (auto &e : (vv)) \
        cin >> e;
#define cout(vv)         \
    for (auto &e : (vv)) \
        cout << e << ' ';

#define ll long long
#define ld long double

const ll MOD = 10000000007;

void jamika78_()
{
    cin.tie(nullptr)->sync_with_stdio(false);
#ifndef ONLINE_JUDGE
    freopen("output.txt", "w", stdout);
#endif
}

void s0lve()
{
    string s;
    cin >> s;
    map<char, ll> m;
    for (ll i = 0; i < s.size(); i++)
        m[s[i]]++;
    for (ll i = 0; i < m.rbegin()->second; i++)
        cout << m.rbegin()->first;
}

signed main()
{
    jamika78_();
    ll tc = 1;
    // cin >> tc;
    for (ll i = 0; i < tc; ++i)
        s0lve();
    return 0;
}