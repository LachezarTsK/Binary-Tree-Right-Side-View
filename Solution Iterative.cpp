
#include <queue>
#include <vector>
using namespace std;

/*
Struct TreeNode is in-built in the solution file on leetcode.com. 
When running the code on the website, do not include this struct.
 */
struct TreeNode {
    int val;
    TreeNode* left;
    TreeNode* right;

    TreeNode() : val(0), left(nullptr), right(nullptr) {}
    TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
    TreeNode(int x, TreeNode* left, TreeNode* right) : val(x), left(left), right(right) {}
};

class Solution {
    
public:
    vector<int> rightSideView(TreeNode* root) {
        if (root == nullptr) {
            return vector<int>();
        }

        vector<int> nodesViewedFromRightSide;
        queue<TreeNode*> queue;
        queue.push(root);

        while (!queue.empty()) {
            int currentLevelSize = queue.size();

            for (int i = 0; i < currentLevelSize; ++i) {
                TreeNode* node = queue.front();
                queue.pop();
                if (i == currentLevelSize - 1) {
                    nodesViewedFromRightSide.push_back(node->val);
                }

                if (node->left != nullptr) {
                    queue.push(node->left);
                }
                if (node->right != nullptr) {
                    queue.push(node->right);
                }
            }
        }
        return nodesViewedFromRightSide;
    }
};
