#include <stdio.h>
#include <string.h>

void solve() {
    int n;
    scanf("%d", &n);
    char s[n + 1];
    scanf("%s", s);

    // ২৬টি অক্ষরের জন্য একটি অ্যারে, শুরুতে -1 (অব্যবহৃত) সেট করা
    int check[26];
    for (int i = 0; i < 26; i++) {
        check[i] = -1;
    }

    int possible = 1; // ১ মানে YES, ০ মানে NO

    for (int i = 0; i < n; i++) {
        int char_index = s[i] - 'a'; // 'a' হলে ০, 'b' হলে ১... এভাবে ইনডেক্স বের করা
        int current_parity = i % 2;  // ০ (জোড়) অথবা ১ (বিজোড়)

        if (check[char_index] == -1) {
            // এই অক্ষরটি প্রথমবার দেখা গেছে, তাই এর পজিশন টাইপ সেভ করি
            check[char_index] = current_parity;
        } else {
            // যদি আগে দেখা গিয়ে থাকে, তবে পজিশন টাইপ কি একই?
            if (check[char_index] != current_parity) {
                possible = 0;
                break;
            }
        }
    }

    if (possible) {
        printf("YES\n");
    } else {
        printf("NO\n");
    }
}

int main() {
    int t;
    // টেস্ট কেসের সংখ্যা ইনপুট
    if (scanf("%d", &t) != 1) return 0;
    
    while (t--) {
        solve();
    }
    
    return 0;
}