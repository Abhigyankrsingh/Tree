#include<bits/stdc++.h>

using namespace std;

int main(){

    class Solution {
      
      public :

      vector<vector<int>> LevelOrder(TreeNode* root){
        vector<vector<int>>ans;
        queue<TreeNode*>q;

        q.push(root);

        while(!q.empty){
            int size = q.size();

            vector<int>level;

            for(int i =0; i<size; i++){
                
                TreeNode* node =    q.front();
                q.pop();
            }
        }
      }
    };
}   