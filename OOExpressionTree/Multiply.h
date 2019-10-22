#pragma once
#include "TreeNode.h"
class Multiply :
	public TreeNode
{
public:
	Multiply(TreeNode* left, TreeNode* right);
	virtual ~Multiply() {};
	virtual double evaluate() const override;
	virtual std::string print() const override;

private:
	TreeNode* left;
	TreeNode* right;
};

