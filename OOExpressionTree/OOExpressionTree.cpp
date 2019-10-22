#include <iostream>
#include "Tree.h"
#include "TreeNode.h"
#include "Add.h"
#include "Constant.h"

int main()
{
	Tree tree = new Add(new Constant(7.0), new Constant(3.0));
    std::cout << tree.evaulate();
}
