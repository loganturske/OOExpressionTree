#include "Multiply.h"

Multiply::Multiply(TreeNode* left, TreeNode* right)
	: left(left), right(right) {};

double Multiply::evaluate() const
{
	return this->left->evaluate() * this->right->evaluate();
}

std::string Multiply::print() const
{
	return "(" + this->left->print() + " * " + this->right->print() + ")";
}