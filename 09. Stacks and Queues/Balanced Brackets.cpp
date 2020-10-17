string isBalanced(string s) {
    stack<char> st;

    for(int i=0;i<s.size();i++){
        if(s[i]=='{' || s[i]=='[' || s[i]=='('){
            st.push(s[i]);
        }else{
            if(st.empty()){
                return "NO";
            }
            char t = st.top();
            st.pop();
            if(!((t=='(' && s[i]==')')||(t=='[' && s[i]==']')||(t=='{' && s[i]=='}'))){
                return "NO";
            }
        }
    }
    if(st.empty()){
        return "YES";
    }
    return "NO";
}