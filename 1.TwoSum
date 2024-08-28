------------------Leet-Code---------------------

class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        vector<int>output;

        for(int i=0; i<nums.size() ; i++){
            for(int j=1+i ; j<nums.size() ; j++){
                if(nums[i]+nums[j]==target) {
                    output.push_back(i);
                    output.push_back(j);
                }
            }
        }
        return output;
    }
};

-------------- Full-Code ---------------
#include <iostream>
#include <vector>

using namespace std;

vector<int> twoSum(vector<int>& nums, int target) {
    vector<int> output;

    for(int i = 0; i < nums.size(); i++) {
        for(int j = i + 1; j < nums.size(); j++) {
            if(nums[i] + nums[j] == target) {
                output.push_back(i);
                output.push_back(j);
                return output;
            }
        }
    }
    return output;
}

int main() {
    vector<int> nums = {2, 7, 11, 15};
    int target = 9;

    vector<int> result = twoSum(nums, target);

    if (result.size() == 2) {
        cout << "Indices : { " << result[0] << ", " << result[1] <<" }"<< endl;
    } else {
        cout << "No two numbers found that add up to the target." << endl;
    }

    return 0;
}

----------------------- Array-approach ------------------

#include <iostream>

using namespace std;

void twoSum(int nums[], int size, int target, int output[]) {
    for (int i = 0; i < size; i++) {
        for (int j = i + 1; j < size; j++) {
            if (nums[i] + nums[j] == target) {
                output[0] = i;
                output[1] = j;
                return;
            }
        }
    }
    output[0] = -1;
    output[1] = -1;
}

int main() {
    int nums[] = {2, 7, 11, 15};
    int target = 18;
    int size = sizeof(nums) / sizeof(nums[0]);
    int result[2];

    twoSum(nums, size, target, result);

    if (result[0] != -1) {
        cout << "Indices : { " << result[0] << ", " << result[1] << " }" << endl;
    } else {
        cout << "No two numbers found that add up to the target." << endl;
    }

    return 0;
}

