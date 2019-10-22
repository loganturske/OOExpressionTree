#include "Add.h"

Add::Add(TreeNode* left, TreeNode* right)
	: left(left), right(right) {};

double Add::evaluate() const
{
	return this->left->evaluate() + this->right->evaluate();
}

std::string Add::print() const
{
	return "(" + this->left->print() + " + " + this->right->print() + ")";
}