#include "binary_trees.h"

/**
* binary_tree_inorder - pre-order traversal
* @tree: root node of the tree to traverse
* @func: pointer to a function to call for each node
* Return: void
*/
void binary_tree_inorder(const binary_tree_t *tree, void (*func)(int))
{
	if (tree != NULL && func != NULL)
	{
		binary_tree_inorder(tree->left, func);
		print_num(tree->n);
		binary_tree_inorder(tree->right, func);
	}
}
