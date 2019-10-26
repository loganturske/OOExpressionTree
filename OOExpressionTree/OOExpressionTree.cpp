#include <iostream>
#include "Tree.h"
#include "TreeNode.h"
#include "Add.h"
#include "Subtract.h"
#include "Multiply.h"
#include "Divide.h"
#include "Constant.h"
#include "Variable.h"
#include "SymbolTable.h"

bool double_equals(double a, double b, double epsilon = 0.001)
{
	return std::abs(a - b) < epsilon;
}

bool testAddition()
{
	double ans = 5.0;
	Tree tree = new Add(new Constant(2.0), new Constant(3.0));
	return double_equals(ans,tree.evaulate());

}

bool testSubtraction()
{
	double ans = -1.0;
	Tree tree = new Subtract(new Constant(2.0), new Constant(3.0));
	return double_equals(ans, tree.evaulate());
}

bool testMultiplication()
{
	double ans = 6.0;
	Tree tree = new Multiply(new Constant(2.0), new Constant(3.0));
	return double_equals(ans, tree.evaulate());
}

bool testDivision()
{
	double ans = 5.0;
	Tree tree = new Divide(new Constant(10.0), new Constant(2.0));
	return double_equals(ans, tree.evaulate());
}

bool testVariable()
{
	double ans = 5.0;
	Tree tree = new Add(new Variable("Y"), new Variable("X"));
	return double_equals(ans, tree.evaulate());
}

bool testDerivatives()
{
	double ans = -0.7;
	Tree tree = new Add(new Multiply(new Constant(2.3), new Variable("X")), new Multiply(new Variable("Y"), new Subtract(new Variable("Z"), new Variable("X"))));
	Tree dt = tree.Derivative("X");
	return double_equals(ans, dt.evaulate());
}

int main()
{
    std::cout << "Testing Addition      : " << testAddition() << std::endl;
	std::cout << "Testing Subtraction   : " << testSubtraction() << std::endl;
	std::cout << "Testing Multiplication: " << testMultiplication() << std::endl;
	std::cout << "Testing Division      : " << testDivision() << std::endl;
	std::cout << "Testing Variable      : " << testVariable() << std::endl;
	std::cout << "Testing Derivatives   : " << testDerivatives() << std::endl;
}
