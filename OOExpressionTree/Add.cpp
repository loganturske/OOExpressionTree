#include "Add.h"

Add::Add(TreeNode* left, TreeNode* right)
	: left(left), right(right) {};

TreeNode* Add::derivative(std::string var) const
{
	return new Add(this->left->clone()->derivative(var), this->right->clone()->derivative(var));
}
TreeNode* Add::clone() const
{
	return new Add(this->left->clone(), this->right->clone());
}

double Add::evaluate() const
{
	return this->left->evaluate() + this->right->evaluate();
}

std::string Add::print() const
{
	return "(" + this->left->print() + " + " + this->right->print() + ")";
}