int sockMerchant(int n, int ar_count, int* ar) {
    int arr[101]={0};
    for(int i=0;i<n;i++)
        arr[ar[i]]++;
    n=0;
    for(int i=0;i<=100;i++)
        if(arr[i]!=0)
            n=n+arr[i]/2;
    return n;
}