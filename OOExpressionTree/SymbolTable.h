#pragma once

#include <string>
#include <map>

class SymbolTable
{
public:
	SymbolTable();
	double getValue(std::string name);
	
private:

	std::map<std::string, double> varMap;
};
