#include "binary_trees.h"

/**
 * binary_tree_depth - measures the depth of a BT
 * @tree: pointer to the BT
 *
 * Return: depth or 0 if tree is NULL
 */

size_t binary_tree_depth(const binary_tree_t *tree)
{
	if (!tree)
		return (0);

	return (tree->parent ? 1 + binary_tree_depth(tree->parent) : 0);
}
