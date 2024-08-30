-------------- LEET-CODE ---------------

  class Solution {
public:
    int maxSubArray(vector<int>& nums) {
        int max_current_value =nums[0];
         int found_max =nums[0];
    if(nums.empty()){
        return 0;
    }

    for(int i = 1 ; i<nums.size() ; i++){
        max_current_value = max(nums[i],(max_current_value+nums[i]));
        if(max_current_value > found_max){
        found_max = max_current_value;
        }
    }

            return found_max;
    }
};


------------------ FULL-CODE --------------

  #include <iostream>
#include <vector>
#include <algorithm>  

using namespace std;
class Solution {
public:
    int maxSubArray(std::vector<int>& nums) {
        if (nums.empty()) {
            return 0;  
        }

        int max_current_value = nums[0];
        int found_max = nums[0];

        for (int i = 1; i < nums.size(); i++) {
            max_current_value = max(nums[i], max_current_value + nums[i]);
            if (max_current_value > found_max) {
                found_max = max_current_value;
            }
        }

        return found_max;
    }
};

int main() {
    Solution solution;
     vector<int>nums = {-2, 1, -3, 4, -1, 2, 1, -5, 4};
    int result = solution.maxSubArray(nums);
     cout<<"The maximum subarray sum is: " << result << endl;

    return 0;
}


  
