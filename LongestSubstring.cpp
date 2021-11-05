/**
Given a string s, find the length of the longest substring without repeating characters.

 

Example 1:

Input: s = "abcabcbb"
Output: 3
Explanation: The answer is "abc", with the length of 3.


CODE:   **/


class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        int end=0,start=0,ans=0;
        int n=s.length();
        unordered_map<char,int>mp;
        while(end!=s.length())
        {
        
            if((mp[s[end]]+1)>1)
            {
                mp[s[start]]--;
                start++;
            }
            else
            {
                mp[s[end]]++;
                ans=max(ans,(end-start+1));
                end++;
            }
            
        }
        return ans;
    }
};
