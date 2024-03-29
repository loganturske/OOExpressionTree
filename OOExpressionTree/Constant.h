#pragma once
#include "TreeNode.h"
class Constant :
	public TreeNode
{
public:
	Constant(double value);
	virtual ~Constant() {};
	virtual TreeNode* derivative(std::string var) const override;
	virtual TreeNode* clone() const override;
	virtual double evaluate() const override;
	virtual std::string print() const override;

private:
	double value;
};

