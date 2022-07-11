
import java.util.ArrayList;
import java.util.LinkedList;
import java.util.List;

public class Solution {

    List<Integer> nodesViewedFromRightSide = new ArrayList<>();

    public List<Integer> rightSideView(TreeNode root) {
        if (root == null) {
            return new LinkedList<>();
        }
        
        findNodesViewedFromRightSide(root, 0);
        return nodesViewedFromRightSide;
    }

    private void findNodesViewedFromRightSide(TreeNode node, int level) {
        if (node == null) {
            return;
        }

        if (level == nodesViewedFromRightSide.size()) {
            nodesViewedFromRightSide.add(node.val);

        }

        findNodesViewedFromRightSide(node.right, level + 1);
        findNodesViewedFromRightSide(node.left, level + 1);
    }
}

/*
Class TreeNode is in-built in the solution file on leetcode.com. 
When running the code on the website, do not include this class.
 */
class TreeNode {

    int val;
    TreeNode left;
    TreeNode right;

    TreeNode() {}

    TreeNode(int val) {
        this.val = val;
    }

    TreeNode(int val, TreeNode left, TreeNode right) {
        this.val = val;
        this.left = left;
        this.right = right;
    }
}
