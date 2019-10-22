#pragma once
#include "TreeNode.h"

class Tree
{
public:
	Tree(TreeNode* root);
	double evaulate();
private:
	TreeNode* root;
};

