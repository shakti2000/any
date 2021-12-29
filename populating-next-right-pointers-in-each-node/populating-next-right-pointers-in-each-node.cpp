class Solution {
public:
    Node* connect(Node* root) {
           // edge case 
           
           if(root==NULL) return root;
        
           queue<Node*> q;
           q.push(root);
        
           while(!q.empty()){
                 int sz = q.size();
                  for(int i=0; i<sz; i++){
                      Node* tmp = q.front();
                      q.pop();
                      if(tmp->left) q.push(tmp->left);
                      if(tmp->right) q.push(tmp->right);
                      if(i< sz - 1)
                      tmp->next = q.front();
                      else tmp->next = NULL;
                  }
             }
        
           return root;
    }
};