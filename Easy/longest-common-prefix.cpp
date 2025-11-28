/* ******************************************************* */
/*     triangle :  https://github.com/triangle-motelti     */
/* ******************************************************* */
#include <bits/stdc++.h>
using namespace std;

#define fast_io ios_base::sync_with_stdio(0); cin.tie(0);
// #define x first
#define y second
#define pb push_back
#define sort(a) sort(a.begin(), a.end());
#define revsort(a) sort(a.begin(), a.end(), greater<int>());
#define forn(i, n) for (int i = 0; i < int(n); i++)
#define forjn(j, n) for (int j = i + 1; j < int(n); j++)
#define swap(a, b) (a) ^= (b), (b) ^= (a), (a) ^= (b);
#define sz(a) int((a).size())
#define endl '\n'

typedef long long ll;

template <typename T>
bool is_odd(T n) { return n % 2 != 0; }

class Solution {
public:
    string longestCommonPrefix(vector<string>& strs) {
        if (strs.empty())
            return "";
        
        string p = strs[0];
        for (int i = 1; i < strs.size(); ++i) {
            while (strs[i].substr(0, p.size()) != p) {
                p = p.substr(0, p.size() - 1);
                if (p.empty()) return "";
            }
        }

    return p;
    }

};

int main() {
    // string s;
    string line;
    getline(cin, line);

    vector<string> strs;
    stringstream ss(line);
    string w;

    while (ss>>w) strs.push_back(w);
    string ans = Solution().longestCommonPrefix(strs);

    if (ans.empty()) cout<<""<<endl;
    else cout<<ans<<endl;
}
