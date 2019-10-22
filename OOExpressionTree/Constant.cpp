#include "Constant.h"


Constant::Constant(double value)
	: value(value) {};
double Constant::evaluate() const
{
	return this->value;
}