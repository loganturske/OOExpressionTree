#pragma once
#include "TreeNode.h"
#include "SymbolTable.h"
#include "Constant.h"

class Variable :
	public TreeNode
{
public:
	Variable(std::string name);
	virtual ~Variable() {};
	virtual TreeNode* derivative(std::string var) const override;
	virtual TreeNode* clone() const override;
	virtual double evaluate() const override;
	virtual std::string print() const override;

private:
	std::string name;
};

