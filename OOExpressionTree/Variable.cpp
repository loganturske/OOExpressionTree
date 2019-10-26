#include "Variable.h"

Variable::Variable(std::string name)
	: name(name) {};

TreeNode* Variable::derivative(std::string var) const
{
	if (this->name.compare(var) == 0)
	{
		return new Constant(1.0);
	}
	return new Constant(0.0);
}


TreeNode* Variable::clone() const
{
	return new Variable(this->name);
}

double Variable::evaluate() const
{
	SymbolTable* symTable = new SymbolTable();
	return symTable->getValue(this->name);
}

std::string Variable::print() const
{
	return "(" + this->name +")";
}