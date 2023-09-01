#include "binary_trees.h"

/**
 * binary_tree_node - function that creates a binary tree node
 * @parent: pointer to the parent node to the node to be created
 * @value: value that is stored in the node
 * Return: a pointer to the new node, or NULL on failure
*/

binary_tree_t *binary_tree_node(binary_tree_t *parent, int value)
{
	binary_tree_t *newnode = malloc(sizeof(binary_tree_t));

	if (!newnode)
	{
		return (NULL);
	}

	newnode->right = NULL;
	newnode->left = NULL;
	newnode->parent = parent;
	newnode->n = value;
	return (newnode);
}
