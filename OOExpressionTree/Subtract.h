#pragma once
#include "TreeNode.h"
class Subtract :
	public TreeNode
{
public:
	Subtract(TreeNode* left, TreeNode* right);
	virtual ~Subtract() {};
	virtual TreeNode* derivative(std::string var) const override;
	virtual TreeNode* clone() const override;
	virtual double evaluate() const override;
	virtual std::string print() const override;

private:
	TreeNode* left;
	TreeNode* right;
};

