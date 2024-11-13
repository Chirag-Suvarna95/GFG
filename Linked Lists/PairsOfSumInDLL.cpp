class Solution
{
public:
    vector<pair<int, int>> findPairsWithGivenSum(Node *head, int target)
    {
        // code here
        Node *left=head;
        Node *right=head;
        
        vector<pair<int,int>> ans;
        
        while(right->next!=NULL)
        {
            right=right->next;
        }
        
        while(left!=NULL && right!=head && left!=right && left->prev != right)
        {
            int sum=left->data+right->data;
            if(sum==target)
            {
                ans.push_back(make_pair(left->data, right->data));
                left=left->next;
                right=right->prev;
            }
            else if(sum>target)
            {
                right=right->prev;
            }
            else 
            {
                left=left->next;
            }
          
        }
        
         
        
        
        return ans;
    }
};