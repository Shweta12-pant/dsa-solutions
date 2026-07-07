class Solution {
public:
    bool isAnagram(string s, string t) {
        if(s.size()!=t.size()) return false;
        unordered_map<char,int> mp;
        for(char ch:s){
            mp[ch]++;
        }

       for (char ch : t) {

            //If Character doesn't exist 
            if (mp.count(ch) == 0 || mp[ch] == 0)
                return false;

            mp[ch]--;
        }

        return true;
    }
};