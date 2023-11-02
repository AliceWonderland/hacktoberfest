class Solution(object):
    def averageOfSubtree(self, root):
        def dfs(node):
            if not node:
                return 0, 0, 0  # count, sum, valid nodes count

            left_count, left_sum, left_valid = dfs(node.left)
            right_count, right_sum, right_valid = dfs(node.right)

            total_count = left_count + right_count + 1
            total_sum = left_sum + right_sum + node.val
            total_valid = left_valid + right_valid + 1 if node.val == (left_sum + right_sum + node.val) // (left_count + right_count + 1) else left_valid + right_valid

            return total_count, total_sum, total_valid

        _, _, valid_count = dfs(root)
        return valid_count

# Definition for a binary tree node.
# class TreeNode(object):
#     def __init__(self, val=0, left=None, right=None):
#         self.val = val
#         self.left = left
#         self.right = right
