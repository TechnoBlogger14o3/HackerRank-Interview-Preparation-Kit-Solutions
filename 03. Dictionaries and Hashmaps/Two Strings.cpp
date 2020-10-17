string twoStrings(string s1, string s2) {
    int arr[26]={0};
    for(int i=0;i<s1.size();i++){
        arr[s1[i]-'a']++;
    }
    bool flag=false; 
    for(int i=0;i<s2.size();i++){
        if(arr[s2[i]-'a']){
            flag=true;
            break;
        }
    }
    if(flag){
        return "YES";
    }else{
        return "NO";
    }
}
