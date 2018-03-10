#include "binary_trees.h"

/**
* binary_tree_depth - depth of a node
* @node: tree node
* Return: depth
*/
size_t binary_tree_depth(const binary_tree_t *node)
{

	size_t x = 1;

	if (node == NULL || (!node->parent))
	{
		return (0);
	}

	x = 1 + binary_tree_depth(node->parent);

	return (x);

}
