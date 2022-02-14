#include<iostream>
#include<map>
#include<vector>
#include<stack>

using namespace std;

/*
Here, we need to find the complete tree traversal (Pre, Post, In) of given tree.
*/

void util(stack<int,Node*> &s,string trav,Node* ptr,int num,map<string,vector<int>> &ans)
{
             ans["pre"].push_back(ptr->data);
             if(trav=="pre" || trav=="in") s.push({num++,ptr});

}

map<string,vector<int>> findAllTravAtOnce(Node* root)
{
    map<string,vector<int>> ans;

    if(!root) return ans;

    stack<int,Node*> st;
    st.push({1,root});

    while(!st.empty())
    {
        auto qtr=st.top();
        st.pop();

        int num = qtr.first;

        switch (num)
        {
        case 1:
        {
            Node* ptr=qtr.second;
            util(st,"pre",ptr,num,ans);
            if(ptr->left) st.push({1,ptr->left});
            break;
        }
            
         
        case 2:
        {
            Node* ptr=qtr.second;
            util(st,"in",ptr,num,ans);
            if(ptr->left) st.push({1,ptr->right});
            break;    
        }

        default:
        {
            Node* ptr=qtr.second;
            util(st,"post",ptr,num,ans);
            break;
        }
        }
    }
    return ans;
}