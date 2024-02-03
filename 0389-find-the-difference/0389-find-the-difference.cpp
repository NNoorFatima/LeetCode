#include <queue>
#include <string>
class Solution {
public:
    char findTheDifference(string s, string t)
    {
        for(int i=0 ;i<s.length()+1;i++)
        {
            if(t[i]=='-')
                continue;
            for(int k=0 ;k<s.length();k++)
            {
                if(t[i]==s[k])
                {
                    t[i]='-';
                    s[k]='-';
                }
                else if(s[k]=='-')
                    continue;
            }
        }
        char ch;   
        for(int i=0 ;i<s.length()+1;i++)
        {
            if(t[i]=='-')
                continue;
            else 
                ch=t[i];
        }
        return ch;
    }
    

};