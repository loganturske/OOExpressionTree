#include "Constant.h"


Constant::Constant(double value)
	: value(value) {};

double Constant::evaluate() const
{
	return this->value;
}

std::string Constant::print() const
{
	return std::to_string(this->value);
}