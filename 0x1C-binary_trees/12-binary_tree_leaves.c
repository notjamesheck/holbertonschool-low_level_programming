#include "binary_trees.h"

/**
* binary_tree_leaves - count leaves
* @tree: tree node
* Return: # of leaves
*/
size_t binary_tree_leaves(const binary_tree_t *tree)
{
	size_t x = 0;

	if (tree == NULL)
	{
		return (x);
	}

	x += binary_tree_leaves(tree->left);
	x += binary_tree_leaves(tree->right);

	if (!tree->left && !tree->right)
	{
		return (x + 1);
	}

	return (x);

}
