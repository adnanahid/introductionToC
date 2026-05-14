// pick i only if rem - i == 0 or rem - i >= i-1 (need at least i-1 more distinct numbers below)
// Simpler: pick i if i <= rem and (rem - i) can be formed with numbers < i
// rem - i can be formed with 1..i-1 if rem-i <= (i-1)*i/2 and rem-i != i (already excluded since i not reused)
// Actually just: pick i if rem - i < i (we take i as last) OR pick i if rem - i >= i
// Greedy: always pick i if i <= rem
// But we must ensure remaining can still be formed
// Pick i when: rem > i*(i-1)/2... no

// Simply: pick i if doing so leaves rem-i that fits in 1..i-1
// i.e. rem - i <= (i-1)*i/2

// check if rem-i is formable with distinct numbers from 1..i-1
// max formable = (i-1)*i/2
#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;
    while (t--) {
        long long n, s;
        cin >> n >> s;

        long long maxSum = n * (n + 1) / 2;
        if (s > maxSum) {
            cout << -1 << "\n";
            continue;
        }

        vector<long long> ans;
        long long rem = s;

        for (long long i = n; i >= 1 && rem > 0; i--) {
            if (i <= rem) {
                long long leftover = rem - i;
                if (leftover == 0 || leftover <= (long long)(i - 1) * i / 2) {
                    ans.push_back(i);
                    rem -= i;
                }
            }
        }

        if (rem != 0) cout << -1 << "\n";
        else {
            for (int j = 0; j < (int)ans.size(); j++) {
                cout << ans[j];
                if (j + 1 < (int)ans.size()) cout << " ";
            }
            cout << "\n";
        }
    }
    return 0;
}