#include "Tree.h"


Tree::Tree(TreeNode* root)
	: root(root) {};

double Tree::evaulate()
{
	return this->root->evaluate();
};