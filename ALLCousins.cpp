/**
 * Definition for binary tree
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode(int x) : val(x), left(NULL), right(NULL) {}
 * };
 */
vector<int> Solution::solve(TreeNode* A, int B) {
    // first find 
    // then print current level 
    vector<int> ans;
    if(A==NULL)return ans;
    if(B==A->val){      // if equal to root 
        return ans;
    }
    queue<TreeNode*> q;
    int sizeq;
    bool found=false;
    q.push(A);

    while(!q.empty()){
        sizeq=q.size();
        for(int i=0;i<sizeq;i++){
            TreeNode* temp=q.front();
            q.pop();
            if(temp->left){
                if(temp->left->val==B){
                    found=true;
                    continue;
                }
            }
            if(temp->right){
                if(temp->right->val==B){
                    found=true;
                    continue;
                }
            }
            
            if(temp->left){
                // ans.push_back(temp->left->val);
                q.push(temp->left);
            }
            if(temp->right){
                // ans.push_back(temp->right->val);
                q.push(temp->right);
            }
            
        }
        if(found)break;
    }
    //  cout<<sizeq;
    if(found){
        sizeq=q.size();
        for(int i=0;i<sizeq;i++){
            TreeNode* temp = q.front();
            q.pop();
            //<<temp->val<<" ";
            ans.push_back(temp->val);
        }
    }
    return ans;
    
}
