#pragma once
#include "TreeNode.h"
class Constant :
	public TreeNode
{
public:
	Constant(double value);
	virtual ~Constant() {};
	virtual double evaluate() const override;
private:
	double value;
};

