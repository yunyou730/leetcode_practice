#pragma once
#include <stdio.h>
#include <vector>
#include <set>
#include <map>
#include <string>

using namespace std;

class Solution {
public:
    int strStr(string haystack, string needle) {
        int srcLen = haystack.size();
        int destLen = needle.size();
        
        int ret = -1;
        for(int pos = 0;pos <= srcLen - destLen;pos++)
        {
            int compareIdx = 0;
            for(compareIdx = 0;compareIdx < needle.size();compareIdx++)
            {
                if(haystack[pos + compareIdx] != needle[compareIdx])
                {
                    break;
                }
            }
            if(compareIdx == needle.size())
            {
                ret = pos;
                break;
            }
        }
        return ret;
    }
};
