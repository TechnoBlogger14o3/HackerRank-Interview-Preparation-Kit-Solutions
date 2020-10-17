int superDigit(string n, int k) {
    unsigned long long int sum=0;
    for(int i=0;i<n.size();i++){
        sum+=n[i]-'0';
    }
    sum=sum*k;
    int x=sum%9;
    return x?x:9;
}