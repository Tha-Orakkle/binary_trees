#include "binary_trees.h"

binary_tree_t *binary_tree_node(binary_tree_t *parent, int value)
{
	binary_tree_t *new;

	if (!value)
		return (NULL);

	new = malloc(sizeof(binary_tree_t));
	if (!new)
		return (NULL);

	new->n = value;
	if (parent)
		new->parent = parent;
	else
		new->parent = NULL;
	new->left = NULL;
	new->right = NULL;

	return (new);
}
