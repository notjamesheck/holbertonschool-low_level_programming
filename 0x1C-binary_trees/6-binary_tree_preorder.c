#include "binary_trees.h"

/**
* binary_tree_preorder - pre-order traversal
* @tree: root node of the tree to traverse
* @func: pointer to a function to call for each node
* Return: void
*/
void binary_tree_preorder(const binary_tree_t *tree, void (*func)(int))
{
	if (tree == NULL || func == NULL)
	{
		return;
	}
	else
	{
		print_num(tree->n);
		binary_tree_preorder(tree->left, &print_num);
		binary_tree_preorder(tree->right, &print_num);
	}
}
