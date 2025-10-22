#include<bits/stdc++.h>
using namespace std;

/*The approach stores all integers from the array into an unordered_set
We know that for a pair (num, num2):
    num2 - num = target
    num2 = num + target
If (num + target = num2)  exists in the set, then we have found a valid pair
so increase count by a value of 1
Time complexity: O(n)
Space complexity: O(n)*/
  
int pairs(int k,vector<int>& arr) {
  //storing integers into set
  unordered_set<int> seen(arr.begin(),arr.end());
  int count = 0;

  for(int num : arr) {
    //checking if num2 exists in set, if it does then found a pair
    if(seen.count(num + k)) count++;
  }
  return count;
}

int main() {
  vector<int> arr = {2, 6, 4, 5, 1};
  int k = 3;
  cout<<"Number of Pairs"<<pairs(k,arr)<<"\n";
  return 0;
}
