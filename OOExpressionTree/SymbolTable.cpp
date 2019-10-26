#include "SymbolTable.h"

SymbolTable::SymbolTable()
{
	this->varMap = { {"X", 2.0}, { "Y", 3.0 }, { "Z", 5.0 } };
}

double SymbolTable::getValue(std::string name)
{
	return this->varMap[name];
}