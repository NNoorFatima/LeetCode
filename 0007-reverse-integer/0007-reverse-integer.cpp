class Solution {
public:
    int reverse(int x) {
        
        if(x==0)
            return 0;
        if(x>pow(2,31)-1)
            return 0;
        if(x<pow(-2,31))
            return 0;
        bool signed_=0;
        if(x<0)
            signed_=1;
        
        int num=x;
        int len=0;
        while(num!=0)
        {
            num/=10;
            len++;
        }
        num=x;
        int *arr= new int[len];
        //extracting each digit and storing it in an array
        for(int i=0 ;i<len ;i++)
        {
            arr[i]=num%10;
            num/=10;
        }
        int len_2=len-1;
        unsigned long long int multi=1;
        while(len_2>0)
        {
            multi*=10;
            len_2--;
        }
        signed long long int final_num=0;
        for(int i=0 ;i<len ;i++)
        {
            final_num+= (arr[i]*multi);    
            multi/=10;  
        }
        if(final_num>pow(2,31)-1)
            return 0;
        if(final_num<pow(-2,31))
            return 0;
        return final_num;
    }
};