 //leet code submission
class Solution {
public:
    vector<int> ans;
    int maxlevel;
    void recur(TreeNode* root,int level){
        if(root==NULL){
            return ;
        }
        if(level>maxlevel){
            maxlevel=level;
            ans.push_back(root->val);
        }
        recur(root->right,level+1);
        recur(root->left,level+1);
    }
    vector<int> rightSideView(TreeNode* root) {
        maxlevel=0;
        recur(root,1);
        return ans;  
    }
};