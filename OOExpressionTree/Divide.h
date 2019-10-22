#pragma once
#include "TreeNode.h"
class Divide :
	public TreeNode
{
public:
	Divide(TreeNode* left, TreeNode* right);
	virtual ~Divide() {};
	virtual double evaluate() const override;
	virtual std::string print() const override;

private:
	TreeNode* left;
	TreeNode* right;
};

