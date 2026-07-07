class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        unordered_map<int,int> mp;
        for(int i=0;i<nums.size();i++){
            int ans=target-nums[i];
            if(mp.count(ans)){ //if num found in map 
                return {mp[ans],i}; //return the index of that num and current num
            }
            mp[nums[i]]=i;  //store current element at index i in map
        }
        return {};
        
    }
};
