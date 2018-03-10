#include "binary_trees.h"

/**
* binary_tree_nodes - counts nodes
* @tree: tree node
* Return: # of nodes
*/
size_t binary_tree_nodes(const binary_tree_t *tree)
{
	size_t x = 0;

	if (tree == NULL)
	{
		return (x);
	}

	if (tree->left || tree->right)
	{
		x += 1;
	}

	x += binary_tree_nodes(tree->left);
	x += binary_tree_nodes(tree->right);

	return (x);
}
