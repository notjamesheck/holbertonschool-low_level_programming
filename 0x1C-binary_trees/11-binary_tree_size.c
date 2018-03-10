#include "binary_trees.h"

/**
* binary_tree_size - tree height finder
* @tree: tree node
* Return: size_t size
*/
size_t binary_tree_size(const binary_tree_t *tree)
{
	size_t x = 0;

	if (tree == NULL)
	{
		return (0);
	}
	else
	{
		x += binary_tree_size(tree->left);
		x += binary_tree_size(tree->right);

		return (x + 1);
	}
}
