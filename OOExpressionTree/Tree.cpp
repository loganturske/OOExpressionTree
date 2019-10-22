#include "Tree.h"


Tree::Tree(TreeNode* root)
	: root(root) {};

double Tree::evaulate()
{
	return this->root->evaluate();
}

std::string Tree::print() const
{
	return this->root->print();
}

std::ostream& operator<<(std::ostream& output, const Tree& root)
{
	// Put in ostream the print of the root node
	output << root.print();
	// Return the ostream
	return output;
}