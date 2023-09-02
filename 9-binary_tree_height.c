#include "binary_trees.h"
/**
*binary_tree_height - measures the height of a tree
*@tree: a pointer to the root
*Return: the measure of the tree or 0 if empty
*/
size_t binary_tree_height(const binary_tree_t *tree)
{
	size_t der_heigth, iz_heigth = 0;

	if (!tree)
	{
		return (0);
	}

	der_heigth = (binary_tree_height(tree->right));
	iz_heigth = (binary_tree_height(tree->left));

	if (der_heigth >= iz_heigth)
	{
		return (der_heigth + 1);
	}
	else
	{
		return (iz_heigth + 1);
	}
}

