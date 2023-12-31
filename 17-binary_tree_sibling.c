#include "binary_trees.h"

/**
* binary_tree_sibling - function that finds the sibling of a node
* @node: is a pointer to the node to finde the sibling
*
* Return: a pointer to the sibling node
*/
binary_tree_t *binary_tree_sibling(binary_tree_t *node)
{
	if (!node || !node->parent)
	{
		return (NULL);
	}

	if (node == node->parent->left)
	{
		return (node->parent->right);
	}
	return (node->parent->left);
}
