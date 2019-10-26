#include "Subtract.h"

Subtract::Subtract(TreeNode* left, TreeNode* right)
	: left(left), right(right) {};

TreeNode* Subtract::derivative(std::string var) const
{
	return new Subtract(this->left->clone()->derivative(var), this->right->clone()->derivative(var));
}

TreeNode* Subtract::clone() const
{
	return new Subtract(this->left->clone(), this->right->clone());
}

double Subtract::evaluate() const
{
	return this->left->evaluate() - this->right->evaluate();
}

std::string Subtract::print() const
{
	return "(" + this->left->print() + " - " + this->right->print() + ")";
}