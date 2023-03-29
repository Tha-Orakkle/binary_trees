#include "binary_trees.h"

/**
 * binary_tree_size - measues the size of the binary tree
 * @tree: pointer to the root node of the BT
 *
 * Return: sizee of the BT or 0 if tree is NULL
 */

size_t binary_tree_size(const binary_tree_t *tree)
{
	size_t size = 0;

	if (!tree)
		return (0);

	size += 1;
	size += binary_tree_size(tree->left);
	size += binary_tree_size(tree->right);

	return (size);
}
