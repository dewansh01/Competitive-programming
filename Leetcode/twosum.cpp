#include<bits/stdc++.h>

class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        unordered_map<int,int>m;
        vector<int>v;
        int i;
        for(i=0;i<nums.size();i++){
            if(m.find(target-nums[i])!=m.end()){
                v.push_back(m[target-nums[i]]);
                v.push_back(i);
                break;
            
        }
        else{
            m[nums[i]]=i;
        }
        
    }
        return v;
}
};