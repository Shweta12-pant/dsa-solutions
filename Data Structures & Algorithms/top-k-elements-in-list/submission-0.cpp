class Solution {
public:
    vector<int> topKFrequent(vector<int>& nums, int k) {

        // priority queue and heap
        unordered_map<int,int> mp;

        for(int num:nums){
            mp[num]++;
        }
        
        priority_queue<pair<int,int>> pq;

        for(auto x:mp){
            pq.push({x.second,x.first});
        }
        vector<int> ans;

        while(k>0){
            ans.push_back(pq.top().second);
            pq.pop();
            k--;
        }
        return ans;


    }
};
