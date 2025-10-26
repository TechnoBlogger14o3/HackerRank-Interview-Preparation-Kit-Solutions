#include<bits/stdc++.h>
using namespace std;

/*The approach follows keeping prefix sums mod m in a sorted set.
For each prefix use the next larger prefix to get the closest
positive which maximizes the modulo value.
Time Complexity: O(nlogn)
Space Complexity: O(n)*/

long maximumSum(vector<long> a, long m) {
  long prefix = 0;
  long maxi = 0;
  set<long> PrefixSet;

  for(long i=0; i<a.size(); i++) {
    //Add current element to prefix sum modulo m so that prefix + a[i] stays in [0, m-1]
    prefix = (prefix + a[i] % m ) % m;

    maxi = max(maxi,prefix);

    auto it = PrefixSet.upper_bound(prefix); //next larger prefix 
    if(it != PrefixSet.end()) {
      long num = (prefix - *it + m) % m; //m is added so prefix-*it is non-negative.
      maxi = max(maxi,num);
    }
    PrefixSet.insert(prefix);
  }
  return maxi;
}

int main() {
  vector<long> a = {3,3,9,9,5};
  long m = 7;
  cout<<"The maximum Value for Subarray Sum % "<< m <<" is "<<maximumSum(a,m)<<"\n";
  return 0;
}
