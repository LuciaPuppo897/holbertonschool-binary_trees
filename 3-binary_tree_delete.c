#include "binary_trees.h"
/**
 * binary_tree_delete - deletes a binary tree
 * @tree: the pointer to the root node of the tree to delate
 * Return: nothing
*/
void binary_tree_delete(binary_tree_t *tree)
{
	if (tree == NULL) 
	return;
	binary_tree_delete(tree->left); /*delete all the left child*/
	binary_tree_delete(tree->right);/*same with rigth child*/

	free(tree);
}
