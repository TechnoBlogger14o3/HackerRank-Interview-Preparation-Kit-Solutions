int sherlockAndAnagrams(string s) {
    unordered_map<string,int> umap;
    int ans=0,n=s.size();
    for(int i=0;i<n;i++){
        for(int j=i;j<n;j++){
            string z;
            for(int k=i;k<=j;k++)
                z+=string(1,s[k]);
            sort(z.begin(),z.end());
            umap[z]++;
        }
    }
    for(auto i:umap)
        if(i.second>1)
            ans+=((i.second)*(i.second-1))/2;
    return ans;
}