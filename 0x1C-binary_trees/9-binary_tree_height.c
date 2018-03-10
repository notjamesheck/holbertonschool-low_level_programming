#include "binary_trees.h"

/**
* binary_tree_height - tree height finder
* @tree: tree node
* Return: size_t height
*/
size_t binary_tree_height(const binary_tree_t *tree)
{
	size_t x = 0, y = 0;

	if (tree == NULL || (!tree->right && !tree->left))
	{ /* if no children, tree is leaf, 0 */
		return (0);
	}
	else
	{
		x = 1 + binary_tree_height(tree->left);
		y = 1 + binary_tree_height(tree->right);

		if (x > y)
		{
			return (x);
		}
		else
		{
			return (y);
		}
	}
}
