int stepPerms(int n) {
    int arr[n+1];
    memset(arr, 0, sizeof(arr));
    for(int i=0;i<=n;i++){
        if(i<=2){
            arr[i]=i;
        }else if(i==3){
            arr[i]=4;
        }else{
            arr[i]= (arr[i-1]+arr[i-2]+arr[i-3])%10000000007;
        }
    }
    return arr[n];
}