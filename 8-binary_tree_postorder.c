#include "binary_trees.h"

/**
* binary_tree_postorder - function that goes through a binary with post-order
* @tree: tree to traverse
* @func: function to call for each node
* Return: Void
*/
void binary_tree_postorder(const binary_tree_t *tree, void (*func)(int))
{
	if (!tree || !func)
	{
	return;
	}

	binary_tree_postorder(tree->left, (func));
	binary_tree_postorder(tree->right, (func));
	func(tree->n);
}
