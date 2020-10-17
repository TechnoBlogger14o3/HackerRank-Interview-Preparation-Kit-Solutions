int countingValleys(int n, string s) {
    int count=0,k=0;
    for(int i=0;i<s.size();i++){
        if(s[i]=='D'){
            k--;
        }else{
            k++;
        }
        if(k==0 && s[i]=='U'){
            count++;
        }
    }
    return count;
}