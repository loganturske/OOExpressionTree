#include "TreeNode.h"

TreeNode::TreeNode()
	: left(nullptr), right(nullptr) {};

TreeNode::TreeNode(TreeNode* left, TreeNode* right)
	: left(left), right(right) {};