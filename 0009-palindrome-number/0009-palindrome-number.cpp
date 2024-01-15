class Solution {
public:
    bool isPalindrome(int x) {
        if(x<0)
            return 0;
        if(x==0)
            return 1;
        else
        {
            int len=0;
            int n=x;

            while(n!=0)
            {
                n/=10;
                len++;
            }
            int number[len];
            for(int i=0 ;i<len ;i++)
            {
                int num=x%10;
                number[i]=num;
                x/=10;
            } 
            for(int i=0,j=len-1;i<len;j--,i++)
            {
                if(number[i]!=number[j])
                    return 0;
            }       
            return 1;
        }
    }
};