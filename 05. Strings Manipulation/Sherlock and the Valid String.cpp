string isValid(string s) {
  string ans = "NO";

  int cnt[26] = {0};
  int n = s.length();

  for (int i = 0; i < n; i++)
    cnt[s[i] - 'a']++;

  for (int i = -1; i < 26; i++){   //-1 if string is already valid
    if (i >= 0 and cnt[i] == 0)
      continue;

    // reduce frequency
    if (i >= 0)
      cnt[i]--;

    set<int> myset;

    for (int j = 0; j < 26; j++){
      if (cnt[j])
        myset.insert(cnt[j]);
    }
    
    if (myset.size() == 1)
      ans = "YES";

    // increase the frequency back again
    if (i >= 0)
        cnt[i]++;
    }
    return ans;
}