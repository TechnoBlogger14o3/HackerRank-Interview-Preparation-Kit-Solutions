int jumpingOnClouds(vector<int> arr) {
    int k=0,jump=0;
    while(1){
        if(arr.size()-1==k){
            jump++;
            break;
        }
        if(arr.size()==k-1){
            break;
        }

        if(k+2<=arr.size()-1 && arr[k+2]==0){
            jump++;
            k+=2;
        }else{
                k++;
                jump++;
            }
        
    }
    return jump-1;
}
