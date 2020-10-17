int maximumToys(vector<int> prices, int k) {
    int toys=0;
    sort(prices.begin(),prices.end());
    int sum=0,i=0;
    while(1){
        if(prices[i]<k){
            toys++;
            k=k-prices[i];
            i++;
        }
        else{
            break;
        }
    }
    return toys;
}
