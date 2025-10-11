#include <bits/stdc++.h>
using namespace std;

void whatFlavors(vector<int> cost, int money) {
    int n = cost.size();
    unordered_map<int,int> store;
    for(int i=0; i<n; i++) {
        int price = cost[i];
        int remaining = money - price;
        if(store.find(remaining)!=store.end()) {
            cout<<store[remaining]+1<<" "<<i+1<<"\n";
            return;
        }
        store[price] = i;
    }
}

int main() {
    int t;
    cin >> t;
    while(t--) {
        int money, n;
        cin >> money >> n;
        vector<int> cost(n);
        for(int i=0; i<n; i++) cin >> cost[i];
        whatFlavors(cost, money);
    }
    return 0;
}

