#pragma once
#include "TreeNode.h"

class Tree
{
public:
	Tree(TreeNode* root);
	double evaulate();
	friend std::ostream& operator<<(std::ostream& output, const Tree& root);
	std::string print() const;
private:
	TreeNode* root;
};

