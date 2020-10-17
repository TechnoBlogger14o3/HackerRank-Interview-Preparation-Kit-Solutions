long countTriplets(vector<long> vec, long r) {
    map<long, long> end,start;
    long long n=vec.size(),c=0;
    for(int i=0;i<n;i++){
        end[vec[i]]++;
    }
    for(int i=0;i<n;i++){
        end[vec[i]]--;
        if(vec[i]%r==0)
            c+=start[vec[i]/r]*end[vec[i]*r];
        start[vec[i]]++;
    }
    return c;
}