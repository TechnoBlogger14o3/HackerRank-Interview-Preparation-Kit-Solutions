#include <bits/stdc++.h>
using namespace std;

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int q;
    cin >> q;
    vector<int> ans;
    unordered_map<int, int> umap;
    unordered_map<int, int> query;
    while(q--){
        int a,b,temp;
        cin >> a >> b;
        switch (a){
            case 1:
                temp=umap[b];
                if(query[temp]>0)
                    query[temp]--;
                umap[b]++;
                query[temp+1]++;
                break;
            case 2:
                temp=umap[b];
                if(temp>0){
                    query[temp]--;
                    umap[b]--;
                    query[temp-1]++;
                }
                break;
            case 3:
                if(query[b]>0){
                    ans.push_back(1);
                }else{
                    ans.push_back(0);
                }
                break;
        }
    }
    for(int i=0;i<ans.size();i++){
        cout << ans[i] << "\n";
    }
}
