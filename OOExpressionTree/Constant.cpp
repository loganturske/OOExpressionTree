#include "Constant.h"

Constant::Constant(double value)
	: value(value) {};

TreeNode* Constant::derivative(std::string var) const
{
	return new Constant(0.0);
}

TreeNode* Constant::clone() const
{
	return new Constant(this->value);
}

double Constant::evaluate() const
{
	return this->value;
}

std::string Constant::print() const
{
	return std::to_string(this->value);
}