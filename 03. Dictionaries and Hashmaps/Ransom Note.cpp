void checkMagazine(vector<string> magazine, vector<string> note) {
    sort(magazine.begin(),magazine.end());
    sort(note.begin(),note.end());
    int k=0;
    bool flag=false;
    for(int i=0;i<note.size();i++){
        flag=false;
        for(int j=k;j<magazine.size();k++,j++){
            if(note[i]==magazine[j]){
                flag=true;
                k++;
                break;
            }
        }
        if(flag==false){
            break;
        }
    }
    if(flag){
        cout << "Yes" << endl;
    }else{
        cout << "No" << endl; 
    }
}