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
#define swap(a, b) (a) ^= (b), (b) ^= (a), (a) ^= (b);
#define sz(a) int((a).size())
#define endl '\n'

typedef long long ll;

template <typename T>
bool is_odd(T n) { return n % 2 != 0; }

class Solution {
public:
    bool isPalindrome(int x) {
        if (x < 0) return false;

        int rev = 0, n = x;
        while (x > 0) {
            int d = x % 10;
            rev = rev * 10 + d;
            x /= 10;
        }
        return rev == n;
    }
};

// int main() {
//     int n; cin>>n;
//     bool ans = Solution().isPalindrome(n);
//     if (ans == true) cout<<"01"<<endl;
//     else cout<<"00"<<endl;

// }
