#pragma once
#include "TreeNode.h"

class Add :
	public TreeNode
{
public:
	Add(TreeNode* left, TreeNode *right);
	virtual ~Add() {};
	virtual double evaluate() const override;
	virtual std::string print() const override;

private:
	TreeNode* left;
	TreeNode* right;
};

