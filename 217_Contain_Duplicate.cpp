------------------ LEET-CODE ---------------------

class Solution {
public:
    bool containsDuplicate(vector<int>& nums) {
        sort(nums.begin(),nums.end());

            for(int i =1 ; i<nums.size() ; i++){
                 if(nums[i]==nums[i-1]){
                    return true;
                }
            } 
        return false;
    }
};


------------------- FULL-CODE --------------------

#include <bits/stdc++.h>
#include <iostream>
#include<vector>
using namespace std;
//public:
    bool containsDuplicate(vector<int>& nums) {
      sort(nums.begin(),nums.end());
      for(int i=1;i<nums.size();i++){
        if(nums[i]==nums[i-1]){
            return true;
            }
      }
      return false;
}
int main() {
   vector<int> num;
    num.push_back(1);
    num.push_back(2);
    num.push_back(7);
    num.push_back(4);
cout<<containsDuplicate(num);
}
