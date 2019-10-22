#pragma once
#include "TreeNode.h"
class Subtract :
	public TreeNode
{
public:
	Subtract(TreeNode* left, TreeNode* right);
	virtual ~Subtract() {};
	virtual double evaluate() const override;
	virtual std::string print() const override;

private:
	TreeNode* left;
	TreeNode* right;
};

