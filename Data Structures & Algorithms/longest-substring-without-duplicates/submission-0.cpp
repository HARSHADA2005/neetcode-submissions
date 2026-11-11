class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        
        unordered_set<char> window;
        int l = 0; int result = 0;

        for(int r = 0; r < (int)s.size(); r++){
            while(window.count(s[r])){
                window.erase(s[l]);
                l++;
            }
            window.insert(s[r]);
            result = max(result, r - l + 1);
        }

       return result;
    }
};
