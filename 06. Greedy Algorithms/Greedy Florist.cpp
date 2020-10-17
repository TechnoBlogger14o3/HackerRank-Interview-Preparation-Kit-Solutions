int getMinimumCost(int k, vector<int> c) {
    int ans=0;
    int n = c.size();
    if(k>=n){
        for(int i=0;i<n;i++){
            ans+=c[i];
        }
    }else{
            sort(c.begin(),c.end());
            int z=0;
            int counter=1;
            for(int i=n-1;i>=0;i--){
                if(z==k){
                    z=0;
                    counter++;
                }
                ans+=counter*c[i];
                z++;
            }
    }
    return ans;
}
