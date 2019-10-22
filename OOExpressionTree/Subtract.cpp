#include "Subtract.h"

Subtract::Subtract(TreeNode* left, TreeNode* right)
	: left(left), right(right) {};

double Subtract::evaluate() const
{
	return this->left->evaluate() - this->right->evaluate();
}

std::string Subtract::print() const
{
	return "(" + this->left->print() + " - " + this->right->print() + ")";
}