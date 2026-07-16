class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        // unordered_map<int,int> mp;
        // for(int i=0;i<nums.size();i++){
        //     int ans=target-nums[i];
        //     if(mp.count(ans)){ //if num found in map 
        //         return {mp[ans],i}; //return the index of that num and current num
        //     }
        //     mp[nums[i]]=i;  //store current element at index i in map
        // }
        // return {};

        for(int i=0;i<nums.size();i++){
            for(int j=i+1;j<nums.size();j++){
                if(nums[i]+nums[j]==target){
                    return {i,j};
                }
            }
        }
        return {};
        
    }
};
