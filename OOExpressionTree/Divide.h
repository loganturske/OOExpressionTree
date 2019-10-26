#pragma once
#include "TreeNode.h"
#include "Subtract.h"
#include "Multiply.h"

class Divide :
	public TreeNode
{
public:
	Divide(TreeNode* left, TreeNode* right);
	virtual ~Divide() {};
	virtual TreeNode* derivative(std::string var) const override;
	virtual TreeNode* clone() const override;
	virtual double evaluate() const override;
	virtual std::string print() const override;

private:
	TreeNode* left;
	TreeNode* right;
};

