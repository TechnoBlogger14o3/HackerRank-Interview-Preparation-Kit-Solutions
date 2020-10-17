int luckBalance(int k, vector<vector<int>> contests) {
    sort(contests.begin(),contests.end());
    int sum=0;
    for(int i=contests.size()-1;i>=0;i--){
        if(contests[i][1]==0){
            sum+=contests[i][0];
        }else{
            if(k>0){
                sum+=contests[i][0];
                k--;
            }else{
                sum-=contests[i][0];
            }
        }
    }
    // for(int i=0;i<contests.size();i++){
    //     cout << contests[i][0] <<  " " << contests[i][1]<< endl;
    // }
    // cout << endl;
    
    return sum;
}