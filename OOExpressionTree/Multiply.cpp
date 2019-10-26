#include "Multiply.h"

Multiply::Multiply(TreeNode* left, TreeNode* right)
	: left(left), right(right) {};

TreeNode* Multiply::derivative(std::string var) const
{
	return new Add(new Multiply(this->left->clone(), this->right->clone()->derivative(var)), new Multiply(this->left->clone()->derivative(var), this->right->clone()));
}

TreeNode* Multiply::clone() const
{
	return new Multiply(this->left->clone(), this->right->clone());
}

double Multiply::evaluate() const
{
	return this->left->evaluate() * this->right->evaluate();
}

std::string Multiply::print() const
{
	return "(" + this->left->print() + " * " + this->right->print() + ")";
}