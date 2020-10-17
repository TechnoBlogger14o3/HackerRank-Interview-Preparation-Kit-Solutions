long Merge(vector<int>& a, int s, int mid, int e)
{
    int i = s, j = mid + 1, k = e, ind = 0;
    long inv = 0;
    int temp[e - s + 1];
    while (i <= mid && j <= e) {
        if (a[i] > a[j]) {
            inv += mid - i + 1;
            temp[ind++] = a[j++];
        } else {
            temp[ind++] = a[i++];
        }
    }
    while (i <= mid) {
        temp[ind++] = a[i++];
    }
    while (j <= e) {
        temp[ind++] = a[j++];
    }
    ind = 0;
    for (i = s; i <= e; i++) {
        a[i] = temp[ind++];
    }
    return inv;
}

long MergeSort(vector<int>& a, int s, int e)
{
    long inv = 0;
    if (s < e) {
        int mid = s + (e - s) / 2;
        inv += MergeSort(a, s, mid);
        inv += MergeSort(a, mid + 1, e);
        inv += Merge(a, s, mid, e);
    }
    return inv;
}

long countInversions(vector<int> arr) {
    int n = arr.size();
    return MergeSort(arr,0,n-1);
}
