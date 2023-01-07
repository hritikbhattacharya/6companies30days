/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode() : val(0), left(nullptr), right(nullptr) {}
 *     TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
 *     TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
 * };
 */
class Solution {
    vector<int> a;
    vector<int> b;
public:
    void inOrderA(TreeNode* head){
        if(head!=NULL){
            inOrderA(head->left);
            a.push_back(head->val);
            inOrderA(head->right);
        }
    }
    void inOrderB(TreeNode* head){
        if(head!=NULL){
            inOrderB(head->left);
            b.push_back(head->val);
            inOrderB(head->right);
        }
    }
    vector<int> getAllElements(TreeNode* root1, TreeNode* root2) {

           inOrderA(root1);
           inOrderB(root2);
           a.insert(a.end(),b.begin(),b.end());
           sort(a.begin(),a.end());
           return a;  
    }
};