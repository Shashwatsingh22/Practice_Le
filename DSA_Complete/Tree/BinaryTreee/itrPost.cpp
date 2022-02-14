/*
 <-- there are two method by which we can able to solve this by the help of iterative approch --->

 1. We have to follow the different trav rule ==> ( Node , Right , Left); then revrse the vector then 
    ans is infront of you;

 2. Either we will follow the same trv rule ==> (left, Right, Node)

 */

///--> 1st 

vector<int> postOrder(Node* root)
{
    vector<int> ans;
    if(!root) return ans;

    stack<Node*> s;
    Node* ptr=root;

    while(!s.empty() || ptr)
    {
        if(ptr)
        {
            ans.push_back(ptr->data);
            s.push(ptr);
            ptr=ptr->right;
        }
        else
        {
            ptr=s.top();
            s.pop();
            ptr=ptr->left;
        }
    }

    reverse(ans.begin(),ans.end());

    return ans;
}


//--> 2nd Method

vector<int> postOrder(Node* root)
{
    vector<int> ans;
    if(!root) return ans;

    stack<Node*> st;
    Node* ptr=root;

    while(!st.empty() || ptr)
    {
        if(ptr)
        {
            st.push(ptr);
            ptr=ptr->left;
        }
        else
        {
            Node* temp=st.top()->right;

            if(!temp)
            {
                temp=st.top();
                st.pop();
                ans.push_back(temp->data);
                
                while(!st.empty() && temp==st.top()->right)
                {
                    temp=st.top();
                    st.pop();
                    ans.push(temp->data);
                }
            }
            else
            {
                ptr=temp;
            }
        }
    }
}