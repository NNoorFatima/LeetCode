/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode() : val(0), next(nullptr) {}
 *     ListNode(int x) : val(x), next(nullptr) {}
 *     ListNode(int x, ListNode *next) : val(x), next(next) {}
 * };
 */
#include <queue>
class Solution {
public:
    ListNode* insert(queue<int> a)
    {
        ListNode* ans;   
        if(a.empty()!=1)
        {
            ans= new ListNode(a.front());
            a.pop();
            ListNode* cur=ans;
            while(a.empty()!=1)
            {
                cur->next= new ListNode(a.front());
                a.pop();
                cur=cur->next;
            }
        }
        return ans;
        
    }
  ListNode* addTwoNumbers(ListNode* l1, ListNode* l2) {
        int sum=0; 
        int carry=0;
        
        ListNode* cur1=l1;
        ListNode* cur2=l2;
        
        ListNode* final_ans;
        queue <int> st;
        while(cur2!=nullptr && cur1!=nullptr)
        {
            sum= cur2->val+cur1->val;
            if(carry !=0)
            {
                sum+=carry;
                carry=0;
            }
            if(sum>9)
            {
                carry = sum / 10;
                int c=sum%10;
                st.push(c);
            }
            else 
            {
               st.push(sum);
            }
  
            cur2=cur2->next;
            cur1=cur1->next;
        }
        
        if(cur1!=nullptr && cur2 ==nullptr)     //case in which one list hasnt reached end 
        {
            while(cur1!=nullptr)
            {
                sum=cur1->val;
                if(carry !=0)
                {
                    sum+=carry;
                    carry=0;
                }
                if(sum>9)
                {
                    carry = sum / 10;
                    int c=sum%10;
                    st.push(c);
                }
                else 
                {
                   st.push(sum);
                }
                cur1=cur1->next;
            
            }
        }
        else if(cur2!=nullptr && cur1==nullptr)//case in which one list hasnt reached the end 
        {
            while(cur2!=nullptr)
            {
                sum=cur2->val;
                if(carry !=0)
                {
                    sum+=carry;
                    carry=0;
                }
                if(sum>9)
                {
                   carry = sum / 10;
                    int c=sum%10;
                   st.push(c);
                }
                else 
                {
                   st.push(sum);
                }
                cur2=cur2->next;
                
            }
        }
       //after both lists have been added 
        if(carry!=0)
        {
            st.push(carry);
        }
        
        final_ans=insert(st);;

        return final_ans;
        
        
        
    }
};