#include<bits/stdc++.h>
using namespace std;

/*1.The approach compares each element of b with elements in a and c, ensuring x <= y and z <= y.
2.Arrays are sorted so we can efficiently stop counting once elements exceed y.
3.Duplicates are removed to avoid counting the same triplet multiple times.
Time complexity: O(nlogn + mlogm + plogp)
Space Complexity: O(1)*/

long triplets(vector<int> a, vector<int> b, vector<int> c) {
  sort(a.begin(),a.end());
  // rmeoving duplicates from the array
  a.erase(unique(a.begin(),a.end()),a.end());

  sort(b.begin(),b.end());
  b.erase(unique(b.begin(),b.end()),b.end());

  sort(c.begin(),c.end());
  c.erase(unique(c.begin(),c.end()),c.end());

  long count = 0;
  int i = 0; // pointer for array a.
  int j = 0; //pointer for array c.

  for(int num : b) {
    while(i < a.size() && a[i] <= num) i++;
    while(j < c.size() && c[j] <= num) j++;

    // Add all the combinations for this num.
    count += (long)i * (long)j;
  }
  return count;
}

int main() {
  vector<int> a = {1,3,5};
  vector<int> b = {2,3};
  vector<int> c = {1,2,3};

  cout<<"The number of triplets are: "<<triplets(a,b,c)<<"\n";
  return 0;
}
