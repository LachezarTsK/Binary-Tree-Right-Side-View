
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
    
    vector<int> nodesViewedFromRightSide;

public:
    vector<int> rightSideView(TreeNode* root) {
        if (root == nullptr) {
            return vector<int>();
        }
        findNodesViewedFromRightSide(root, 0);
        return nodesViewedFromRightSide;
        return nodesViewedFromRightSide;
    }

private:
    void findNodesViewedFromRightSide(TreeNode* node, int level) {
        if (node == nullptr) {
            return;
        }

        if (level == nodesViewedFromRightSide.size()) {
            nodesViewedFromRightSide.push_back(node->val);

        }

        findNodesViewedFromRightSide(node->right, level + 1);
        findNodesViewedFromRightSide(node->left, level + 1);
    }
};
