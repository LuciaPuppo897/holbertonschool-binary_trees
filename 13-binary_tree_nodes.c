#include "binary_trees.h"
/**
*binary_tree_nodes - count the nodes of a tree
*@tree: pointer to the root
* Return: number of node or 0 if NULL
*/
size_t binary_tree_nodes(const binary_tree_t *tree)
{
	size_t nodes_der, nodes_iz = 0;

	if (!tree)
	{
		return (0);
	}

	if (tree->right != NULL && tree->left != NULL)
	{
	return (1);
	}

	nodes_iz = binary_tree_nodes(tree->left);
	nodes_der = binary_tree_nodes(tree->right);

	return (1 + nodes_der + nodes_iz);
}
