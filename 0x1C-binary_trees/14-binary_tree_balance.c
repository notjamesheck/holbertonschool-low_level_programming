#include "binary_trees.h"

/**
* binary_tree_height - height
* @tree: tree node
* Return: height
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
			return (y); }
	}
	return (x);
}

/**
* binary_tree_balance - balance factor
* @tree: tree node
* Return: balance factor
*/
int binary_tree_balance(const binary_tree_t *tree)
{
	size_t x = 0;

	if (tree == NULL || (!tree->left && !tree->right))
	{
		return (0);
	}

	if (!tree->left || !tree->right)
	{
		return (-1);
	}

	x += binary_tree_height(tree->left);
	x -= binary_tree_height(tree->right);
	return ((int)x);
}
