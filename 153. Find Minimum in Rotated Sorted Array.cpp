----------------- LEET-CODE -----------------

class Solution {
public:
    int findMin(vector<int>& nums) {
     int left = 0;
        int right = nums.size() - 1;

        while (left < right) {
            int mid = (right + left) / 2;
 
            if (nums[mid] >= nums[right]) {
                left = mid + 1;
            } else {
                right = mid;
            }
        }

        return nums[left];
    }
};


------------------ FULL-CODE ---------------------


#include <iostream>
#include <vector>

using namespace std;

class Solution {
public:
    int findMin(vector<int>& nums) {
        int left = 0;
        int right = nums.size() - 1;

        while (left < right) {
            int mid = (right + left) / 2;

            if (nums[mid] >= nums[right]) {
                left = mid + 1;
            } else {
                right = mid;
            }
        }

        return nums[left];
    }
};

int main() {
    Solution solution;
    
    vector<int> nums = {3, 4, 5, 1, 2};  

    int result = solution.findMin(nums);

    cout << "The minimum element is: " << result << endl;

    return 0;
}

