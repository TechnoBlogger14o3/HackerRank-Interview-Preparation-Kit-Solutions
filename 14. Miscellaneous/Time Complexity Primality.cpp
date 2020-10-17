string primality(int n) {
    if(n==1){
        return "Not prime";
    }

    for(int i=2;i*i<=n;i++){
        if(n%i==0){
            return "Not prime";
        }
    }
    return "Prime";
}
