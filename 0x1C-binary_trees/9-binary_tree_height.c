#include "binary_trees.h"

/**
* binary_tree_height - tree height finder
* @tree: tree node
* Return: size_t height
*/
size_t binary_tree_height(const binary_tree_t *tree)
{
	size_t x = 0;

	if (tree == NULL)
	{
		return (x);
	}

	while (1)
	{
		if (tree->right)
		{
			tree = tree->right;
			x++;
			continue;
		}
/*		else if (tree->right)*/
/*		{*/
/*			tree = tree->right;*/
/*			x++;*/
/*		}*/
		else
		{
			break;
		}
	}
	return (x);
}
