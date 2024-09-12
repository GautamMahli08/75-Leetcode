-------------- Leet-Code -------------------
  class Solution {
public:
    int climbStairs(int n) {
       vector<int>steps(n+1, 0);
       steps[0]=1;
       steps[1]=1;
       for(int i = 2;i<n+1 ; i++) {
        steps[i]=steps[i-1]+steps[i-2];
       }
        return steps[n];
    }
};


------------------ Full-Code -------------------------

  #include <iostream>
#include <vector>

using namespace std;

class Solution {
public:
    int climbStairs(int n) {
        vector<int> step(n + 1, 0); 
        step[0] = 1; 
        step[1] = 1; 
        for (int i = 2; i < n + 1; i++) {
            step[i] = step[i - 1] + step[i - 2]; 
        }
        return step[n]; 
    }
};

int main() {
    Solution solution;
    int n;
    cout << "Enter number of stairs: ";
    cin >> n;
    int result = solution.climbStairs(n);
    cout << "Number of ways to climb " << n << " stairs: " << result << endl;

    return 0;
}




-------------- Explaination --------------

Step 0 (initial)     : 1 way (stay there)
Step 1               : 1 way (1)
Step 2               : 2 ways (1+1, 2)
Step 3               : 3 ways (1+1+1, 1+2, 2+1)
Step 4               : 5 ways (1+1+1+1, 1+1+2, 1+2+1, 2+1+1, 2+2)
Step 5               : 8 ways (1+1+1+1+1, 1+1+1+2, 1+1+2+1, 1+2+1+1, 2+1+1+1, 1+2+2, 2+1+2, 2+2+1)
  
  
  
