---------------- LEET-CODE --------------

class Solution {
public:
    vector<int> productExceptSelf(vector<int>& nums) {
         int n = nums.size();
         vector<int> output(n,1);
     
        int leftProduct = 1;
        for (int i = 0; i < n; ++i) {
            output[i] = leftProduct;
            leftProduct *= nums[i];
        }
        
        int rightProduct = 1;
        for (int i = n - 1; i >= 0; --i) {
            output[i] *= rightProduct;
            rightProduct *= nums[i];
        }
        
        return output;
    }
};


-------------------- FULL-CODE ----------------------

#include <iostream>
#include <vector>

using namespace std;

class Solution {
public:
    vector<int> productExceptSelf(vector<int>& nums) {
        int n = nums.size();
        vector<int> output(n, 1);
        
        int leftProduct = 1;
        for (int i = 0; i < n; ++i) {
            output[i] = leftProduct;
            leftProduct *= nums[i];
        }
        
        int rightProduct = 1;
        for (int i = n - 1; i >= 0; --i) {
            output[i] *= rightProduct;
            rightProduct *= nums[i];
        }
        
        return output;
    }
};

int main() {
    
    Solution solution;
    vector<int> nums = {1, 2, 3, 4};
    vector<int> result = solution.productExceptSelf(nums);
  
    cout << "Output: ";
    for (int i = 0; i < result.size(); ++i) {
        cout << result[i] << " ";
    }
    cout << endl;
    return 0;
}
