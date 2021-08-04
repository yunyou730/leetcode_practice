#include <string>
#include <cstring>
#include <iostream>
#include <map>

using namespace std;

class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        if(s.size() == 0) return 0;
        
        int left = 0;
        int right = 0;
        int maxLen = right - left + 1;
        
        map<char,int> strMap;
        strMap.insert(make_pair(s[left],left));
        
        size_t strLen = s.size();
        while(right < strLen)
        {
            right++;
            
            auto it = strMap.find(s[right]);
            if(it != strMap.end())
            {
                // meet repeat char
                int curLen = right - left;
                if(curLen > maxLen)
                {
                    printf("%s\n",s.substr(left,right).c_str());
                }
                
                maxLen = curLen > maxLen ? curLen : maxLen;
                
                int prevIdx = it->second;
                for(int i = left;i <= prevIdx;i++)
                {
                    strMap.erase(s[i]);
                }
                left = prevIdx + 1;
//                right = left;
            }
            strMap.insert(make_pair(s[right],right));
        }
        
        int curLen = right - left;
        if(curLen > maxLen)
        {
            printf("%s\n",s.substr(left,right).c_str());
        }
        maxLen = curLen > maxLen ? curLen : maxLen;
        

        
        return maxLen;
    }
    
    
    void test()
    {
        int n = lengthOfLongestSubstring("anviaj");
//        int n = lengthOfLongestSubstring("aka");
        cout << "len:" << n << endl;
    }
};
