#include<bits/stdc++.h>
using namespace std;

/*The approach uses binary search to find the minimum number of days to produce the goal items.
1. For each mid we calculate total items produced by all machines as sum(mid / machine).
2. If total >= goal set high = mid to check for fewer days else set low = mid + 1 to check for more days.
Time complexity: O(n * log (Maximum * goal))
Space complexity: O(1)*/

long maximum(vector<long>& machines) {
    long maxi = machines[0];
    long n = machines.size();
    for(long i=0;i<n;i++) {
        // Update maxi to the largest value found in machines.
        maxi = max(maxi,machines[i]);
    }
    return maxi; // return the maximum value in machines.
}

long minTime(vector<long>& machines,long goal) {
    long low = 1; // Minimum possible days.
    long high = maximum(machines) * goal; // Maximum Possible days.
    
    while(low < high) {
        long mid = low + (high - low)/2;
        long total = 0;
        
        for(long m : machines) {
            // Total items produced by all machines in mid days.
            total += mid/m;
        }

        // If enough Items check for fewer days.
        if(total >= goal) {
            high = mid; // This keeps mid as a potential Minimum day.
        }
        else {
            // if not enough check for more days.
            low = mid + 1;
        }
    }
    return low;
}

int main() {
  vector<long> machines = {1, 3, 4};
  long goal = 10;
  cout<<"Minimum Time Required to produce" << goal << "items: " <<minTime(machines,goal)<<"\n";
  return 0;
}
