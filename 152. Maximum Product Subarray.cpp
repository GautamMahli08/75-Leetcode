--------------- LEET-CODE ------------------

class Solution {
public:
    int maxProduct(vector<int>& nums) {
      if (nums.empty()) {
            return 0;
        }
        
        int max_current_value = nums[0];
        int min_current_value = nums[0];
        int found_max = nums[0];
        
        for (int i = 1; i < nums.size(); i++) {
            if (nums[i] < 0) {
              swap(max_current_value, min_current_value);
            }
            
            max_current_value = max(nums[i], max_current_value * nums[i]);
            min_current_value = min(nums[i], min_current_value * nums[i]);
            
            found_max = max(found_max, max_current_value);
        }
        
        return found_max; 
    }
};


------------- FULL-CODE ---------------

#include <iostream>
#include <vector>
#include <algorithm>   
using namespace std ;
class Solution {
public:
    int maxProduct(vector<int>& nums) {
        if (nums.empty()) {
            return 0;
        }

        int max_current_value = nums[0];
        int min_current_value = nums[0];
        int found_max = nums[0];

        for (int i = 1; i < nums.size(); i++) {
            if (nums[i] < 0) {
                swap(max_current_value, min_current_value);
            }

            max_current_value = max(nums[i], max_current_value * nums[i]);
            min_current_value = min(nums[i], min_current_value * nums[i]);

            found_max = max(found_max, max_current_value);
        }

        return found_max;
    }
};

int main() {
   vector<int> nums = {2, 3, -2, 4};
    
    Solution solution;
    
    int result = solution.maxProduct(nums);
    cout << "The maximum product subarray is: " << result << endl;
    
    return 0;
}
