/* ******************************************************* */
/*     triangle :  https://github.com/triangle-motelti     */
/* ******************************************************* */
#include <bits/stdc++.h>
using namespace std;

#define fast_io ios_base::sync_with_stdio(0); cin.tie(0);
#define x first
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
    vector<int> twoSum(vector<int>& nums, int target) {
        ll n = nums.size();
        forn(i, n) {
            forjn(j, n) {
                if (nums[j] + nums[i] == target)
                    return {i, j};
            }
        }
    return {};
    }
};

int main() {
    fast_io
    string line;
    getline(cin, line);

    stringstream ss(line);
    vector<int> l;
    int x;
    while (ss >> x) l.push_back(x);

    int t; cin>>t;

    vector<int> ans = Solution().twoSum(l, t);

    for (int i : ans) cout<<i<<" ";
}
