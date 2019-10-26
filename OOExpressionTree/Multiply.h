#pragma once
#include "TreeNode.h"
#include "Add.h"
class Multiply :
	public TreeNode
{
public:
	Multiply(TreeNode* left, TreeNode* right);
	virtual ~Multiply() {};
	virtual TreeNode* derivative(std::string var) const override;
	virtual TreeNode* clone() const override;
	virtual double evaluate() const override;
	virtual std::string print() const override;

private:
	TreeNode* left;
	TreeNode* right;
};

