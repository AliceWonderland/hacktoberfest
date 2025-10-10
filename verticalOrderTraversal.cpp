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
public:
    vector<vector<int>> verticalTraversal(TreeNode* root) {
        map<int,map<int, multiset<int>>> freq;
        queue<pair<TreeNode*, pair<int, int>>> q;
        // pushing root node to q
        q.push({root,{0,0}});

        // Since we are iterating at each level, so loop goes from  // Doing LEVEL ORDER TRAVERSAL
        while(!q.empty()){

            // Iterating level wise so using for loop, for that we need q size
            int size = q.size();

            for(int i=0; i<size; i++){
                // As normal, take front of q and pop
                auto front = q.front();     // front is in form [{1,{0,0}}]  // 1 is node and 0,0 is v and level
                q.pop();

                // So take first Node
                TreeNode* node = front.first;
                int v = front.second.first;  int l = front.second.second;       // v is vertical and l is level
                
                // Inserting node into map
                freq[v][l].insert(node -> val);

                // if left is present then add to queue and same for right  // we need to push both so no if else
                if(node -> left){
                    q.push({node -> left, {v-1, l+1}});
                }
                if(node -> right){
                    q.push({node -> right, {v+1, l+1}});
                }
            }
        }

        // Printing Values
        vector<vector<int>> ans;
        
        // Applying loop on every vertical to store its els in one array
        for(auto vertical : freq){
            vector<int> temp;
            for(auto level : vertical.second){
                // insert all node vales retrieved by vertical.second   // temp.end means pushing from back
                temp.insert(temp.end(), level.second.begin(), level.second.end());    // adds in one line no one per time like push_back
            }
            ans.push_back(temp);
        }
        
        return ans;
        
    }
};
