#pragma once
#include <iostream>
#include <string>

class TreeNode
{
public:
	TreeNode();
	TreeNode(TreeNode *left, TreeNode *right);
	virtual ~TreeNode() {};
	virtual double evaluate() const = 0;
	virtual std::string print() const = 0;

private:
	TreeNode *left;
	TreeNode *right;

};

