/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode(int x) : val(x), left(NULL), right(NULL) {}
 * };
 */
class Codec {
public:

    // Encodes a tree to a single string.
    string serialize(TreeNode* root) {
        
        if(!root) return "";
        
        string data="";
        data.append(to_string(root->val)+',');
        queue<TreeNode*> q;
        q.push(root);
        
        while(!q.empty())
        {
             TreeNode* temp=q.front();
             q.pop();
            
             if(temp->left)
             {
                data.append(to_string(temp->left->val)+','); 
                q.push(temp->left); 
             }
            else data.append("N,");
            
            if(temp->right)
            {
                data.append(to_string(temp->right->val)+',');
                q.push(temp->right);
            }
            else data.append("N,");
            
        }
        
        cout<<data<<endl;
        
        return data;
    }

    // Decodes your encoded data to tree.
    TreeNode* deserialize(string data) {
          
        if(!data.length()) return NULL;
        
        stringstream s(data);
        string temp="";
        
        getline(s,temp,',');
        TreeNode* root=new TreeNode(stoi(temp));
        queue<TreeNode*> q;
        q.push(root);
        
        while(!q.empty())
        {
            TreeNode* ptr=q.front();
            q.pop();
            
            getline(s,temp,',');
            if(temp=="N")
            {
                ptr->left=NULL;
            }
            else
            {
                ptr->left=new TreeNode(stoi(temp));
                q.push(ptr->left);
            }
            getline(s,temp,',');
            if(temp=="N")
            {
                ptr->right=NULL;
            }
            else
            {
                ptr->right=new TreeNode(stoi(temp));
                q.push(ptr->right);
            }
        }
        
        return root;
    }
};

// Your Codec object will be instantiated and called as such:
// Codec ser, deser;
// TreeNode* ans = deser.deserialize(ser.serialize(root));