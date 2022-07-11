
/**
 * @param {TreeNode} root
 * @return {number[]}
 */
var rightSideView = function (root) {
    if (root === null) {
        return [];
    }

    const nodesViewedFromRightSide = [];
    const queue = new Queue();
    queue.enqueue(root);

    while (!queue.isEmpty()) {
        let currentLevelSize = queue.size();

        for (let i = 0; i < currentLevelSize; ++i) {
            const node = queue.dequeue();
            if (i === currentLevelSize - 1) {
                nodesViewedFromRightSide.push(node.val);
            }

            if (node.left !== null) {
                queue.enqueue(node.left);
            }
            if (node.right !== null) {
                queue.enqueue(node.right);
            }
        }
    }
    return nodesViewedFromRightSide;
};

/*
 Function TreeNode is in-built in the solution file on leetcode.com. 
 When running the code on the website, do not include this function.
 */
function TreeNode(val, left, right) {
    this.val = (val === undefined ? 0 : val);
    this.left = (left === undefined ? null : left);
    this.right = (right === undefined ? null : right);
}
