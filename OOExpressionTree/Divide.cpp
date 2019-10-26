#include "Divide.h"


Divide::Divide(TreeNode* left, TreeNode* right)
	: left(left), right(right) {};

TreeNode* Divide::derivative(std::string var) const
{
	return new Divide(new Subtract(new Multiply(this->left->clone()->derivative(var), this->right->clone()),  new Multiply(this->left->clone(), this->right->clone()->derivative(var))), new Multiply(this->right->clone(), this->right->clone()));
}

TreeNode* Divide::clone() const
{
	return new Divide(this->left->clone(), this->right->clone());
}

double Divide::evaluate() const
{
	return this->left->evaluate() / this->right->evaluate();
}

std::string Divide::print() const
{
	return "(" + this->left->print() + " / " + this->right->print() + ")";
}