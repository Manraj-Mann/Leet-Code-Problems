/*Author : Manraj Singh */
#include <bits/stdc++.h>
using namespace std;


// Problem : 	589. N-ary Tree Preorder Traversal
/* Solution : 	Tree traversal using stack */


// Definition for a Node.
class Node {
public:
    int val;
    vector<Node*> children;

    Node() {}

    Node(int _val) {
        val = _val;
    }

    Node(int _val, vector<Node*> _children) {
        val = _val;
        children = _children;
    }
};


class Solution {
public:
    
    vector<int> preorder(Node* root) {
        
        stack<Node * > s;
        vector<int> ans;
        if ( root != nullptr){
            
        s.push(root);
            
        }
        
        while ( ! s.empty()){
            
            Node * t = s.top();
            ans.push_back(t->val);
            s.pop();
            
            for ( int i = t->children.size()-1 ; i >= 0  ; i--){
                
                if ( t->children[i] != nullptr){
                    
                    s.push(t->children[i]);
                }
            }
            
        }
     
                           
        return ans;
    }
};


int main(){

    ios::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);

    

    return 0;
}