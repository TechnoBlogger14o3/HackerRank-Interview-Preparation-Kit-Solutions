long repeatedString(string s, long n) {
    long ans=0,k,p,c=0;
    p=s.size();
    k=n%p;
    for(int i=0;i<p;i++){
        if(s[i]=='a'){
            c++;
        }
    }
    ans += (n/p)*c;
    for(int i=0;i<k;i++){
        if(s[i]=='a'){
            ans++;
        }
    }
    return ans;
}