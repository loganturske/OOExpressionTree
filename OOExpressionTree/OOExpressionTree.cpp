#include <iostream>
#include "Tree.h"
#include "TreeNode.h"
#include "Add.h"
#include "Subtract.h"
#include "Multiply.h"
#include "Divide.h"
#include "Constant.h"

bool testAddition()
{
	double ans = 5.0;
	Tree tree = new Add(new Constant(2.0), new Constant(3.0));
	return ans == tree.evaulate();

}

bool testSubtraction()
{
	double ans = -1.0;
	Tree tree = new Subtract(new Constant(2.0), new Constant(3.0));
	return ans == tree.evaulate();
}

bool testMultiplication()
{
	double ans = 6.0;
	Tree tree = new Multiply(new Constant(2.0), new Constant(3.0));
	return ans == tree.evaulate();
}

bool testDivision()
{
	double ans = 5.0;
	Tree tree = new Divide(new Constant(10.0), new Constant(2.0));
	return ans == tree.evaulate();
}
int main()
{
	Tree tree = new Add(new Constant(1.0), new Subtract(new Constant(2.0), new Constant(3.0)));
    std::cout << "Testing Addition      : " << testAddition() << std::endl;
	std::cout << "Testing Subtraction   : " << testSubtraction() << std::endl;
	std::cout << "Testing Multiplication: " << testMultiplication() << std::endl;
	std::cout << "Testing Division      : " << testDivision() << std::endl;
	std::cout << tree;


}
