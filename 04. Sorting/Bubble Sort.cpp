void countSwaps(vector<int> a) {
    bool isSwappingDone;
    int temp=0,swap=0,s=a.size();
    for(int i=0;i<s;i++){
        isSwappingDone = false;
        for(int j=0;j<s-1;j++){
            if(a[j]>a[j+1]){
                temp=a[j];
                a[j]=a[j+1];
                a[j+1]=temp;
                isSwappingDone = true;
                swap++;
            }
        }
        if(!isSwappingDone){
                break;
        }
    }
    cout << "Array is sorted in " << swap <<" swaps." << endl;
    cout << "First Element: "<< a[0] << endl;
    cout << "Last Element: " << a[a.size()-1] << endl;
}