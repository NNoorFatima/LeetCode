
// Definition for singly-linked list.
//   struct ListNode {
//       int val;
//       ListNode *next;
//       ListNode() : val(0), next(nullptr) {}
//       ListNode(int x) : val(x), next(nullptr) {}
//       ListNode(int x, ListNode *next) : val(x), next(next) {}
//   };

class Solution {
public:
   ListNode* mergeTwoLists(ListNode* list1, ListNode* list2) 
    {
        ListNode* n_node;
        ListNode* cur=list1;
        int count=0;
        while(cur!=nullptr)
        {
            cur=cur->next;
            count++;
        }
        cur=list2;
        while(cur!=nullptr)
        {
            cur=cur->next;
            count++;
        }
        if(count==0)
            return n_node;
        int *arr= new int[count];
        cur=list1;
        int i=0;
        while(cur!=nullptr)
        {
            arr[i]=cur->val;
            cur=cur->next;
            i++;
        }
        cur=list2;
        while(cur!=nullptr)
        {
            arr[i]=cur->val;
            cur=cur->next;
            i++;
        }
        //sorting array
        for(int i=0 ;i<count;i++)
        {
            for(int j=0; j<count-1-i;j++)
            {
                if(arr[j]>arr[j+1])
                {
                    int temp=arr[j];
                    arr[j]=arr[j+1];
                    arr[j+1]=temp;
                }
            }
        }
       // ListNode* n_node;
        n_node=new ListNode(arr[0]);
        cur=n_node;
        for(int i=1 ;i<count ;i++)
        {
            cur->next=new ListNode(arr[i]);
         
            cur=cur->next;
        }

        return n_node;

    }


};