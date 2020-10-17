int minimumAbsoluteDifference(vector<int> arr) {
    sort(arr.begin(),arr.end());
    int mini=INT_MAX;
    for(int i=0;i<arr.size()-1;i++){
        mini = min (mini,abs(arr[i+1]-arr[i]));
    }
    return mini;
}