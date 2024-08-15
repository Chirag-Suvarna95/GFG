class Solution{
    public:
    //Function to find the height of a binary tree.
    int height(struct Node* node){
        // code here 
    
        Node *p=node;
        if(p==NULL) return 0;
        
        int l = height(node->left);
        int r = height(node->right);
        
        return max(l,r)+1;
    }
};