#include "Divide.h"


Divide::Divide(TreeNode* left, TreeNode* right)
	: left(left), right(right) {};

double Divide::evaluate() const
{
	return this->left->evaluate() / this->right->evaluate();
}

std::string Divide::print() const
{
	return "(" + this->left->print() + " / " + this->right->print() + ")";
}