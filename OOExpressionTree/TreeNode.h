#pragma once
class TreeNode
{
public:
	TreeNode();
	TreeNode(TreeNode *left, TreeNode *right);
	virtual ~TreeNode() {};
	virtual double evaluate() const = 0;
private:
	TreeNode *left;
	TreeNode *right;

};

