
/**
 * @param {TreeNode} root
 * @return {number[]}
 */
var rightSideView = function (root) {
    if (root === null) {
        return [];
    }
    this.nodesViewedFromRightSide = [];
    findNodesViewedFromRightSide(root, 0);
    
    return nodesViewedFromRightSide;
};

/**
 * @param {TreeNode} node
 * @param {number} level
 * @return {void}
 */
function findNodesViewedFromRightSide(node, level) {
    if (node === null) {
        return;
    }

    if (level === this.nodesViewedFromRightSide.length) {
        this.nodesViewedFromRightSide.push(node.val);
    }

    findNodesViewedFromRightSide(node.right, level + 1);
    findNodesViewedFromRightSide(node.left, level + 1);
}

/*
 Function TreeNode is in-built in the solution file on leetcode.com. 
 When running the code on the website, do not include this function.
 */
function TreeNode(val, left, right) {
    this.val = (val === undefined ? 0 : val);
    this.left = (left === undefined ? null : left);
    this.right = (right === undefined ? null : right);
}
