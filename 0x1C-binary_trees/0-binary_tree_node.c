#include "binary_trees.h"

/**
* binary_tree_node - creates a binary tree node
* @parent: node to be created
* @value: value of new node
* Return: a pointer to the new node, or NULL on failure
*/
binary_tree_t *binary_tree_node(binary_tree_t *parent, int value)
{
	binary_tree_t *temp = NULL;
	binary_tree_t *current = NULL;
	int l = 1;

	temp = malloc(sizeof(binary_tree_t));
	if (temp == NULL)
	{
		/* puts("fail"); */
		return (NULL);
	}
	temp->n = value;
	temp->left = NULL;
	temp->right = NULL;

	if (parent == NULL)
	{
		/* puts("new root"); */
		return (temp);
	}

	current = parent;

	while (l == 1)
	{
		parent = current;

		if (temp->n < parent->n)
		{
			current = current->left;

			if (current == NULL)
			{
				/* printf("%d to the left\n", value); */
				parent->left = temp;
				l = 0;
				break;
			}
		}
		else
		{
			current = current->right;

			if (current == NULL)
			{
				/* printf("%d to the right\n", value); */
				parent->right = temp;
				l = 0;
				break;
			}
		}
	}
	return (temp);
}
