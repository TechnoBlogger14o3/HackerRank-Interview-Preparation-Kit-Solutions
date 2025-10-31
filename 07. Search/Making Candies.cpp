#include <bits/stdc++.h>
using namespace std;

long minimumPasses(long m, long w, long p, long n) {
    long candies = 0, invest = 0, spend = LONG_MAX;
    while (candies < n) {
        long passes = (p > candies) ? (long)ceil((double)(p - candies) / (m * w)) : 0;
        if (passes <= 0) {
            long mw = candies / p + m + w;
            long half = mw / 2;
            if (m > w) {
                m = max(m, half);
                w = mw - m;
            } else {
                w = max(w, half);
                m = mw - w;
            }
            candies %= p;
            passes++;
        }
        long double prod = (long double)m * (long double)w;
        long double pmw = (long double)passes * prod;
        if (pmw > 9e18) {
            invest++;
            spend = min(spend, invest + 1);
            break;
        }
        candies += (long)(passes * (m * w));
        invest += passes;
        long inc = (long)ceil((long double)(n - candies) / (m * w));
        spend = min(spend, invest + inc);
    }
    return min(spend, invest);
}

int main() {
    long m, w, p, n;
    cin >> m >> w >> p >> n;
    cout << minimumPasses(m, w, p, n);
    return 0;
}

