#include "binary_trees.h"

/**
 * binary_tree_height - measures the height of a Binary Tree
 * @tree: pointer to the root of the BT
 *
 * Return: returns the height or 0 if BT is NULL
 */

size_t binary_tree_height(const binary_tree_t *tree)
{
	size_t height_r, height_l;

	if (!tree)
                return (0);

	height_l = tree->left ? 1 + binary_tree_height(tree->left) : 1;
	height_r = tree->right ? 1 + binary_tree_height(tree->right) : 1;

	return (height_l > height_r ? height_l : height_r);
}

/**
 * binary_tree_balance - measures the balance factor
 * @tree: pointer to root of BT
 *
 * Return: balance factor or 0 if tree is NULL
 */

int binary_tree_balance(const binary_tree_t *tree)
{
	if (!tree)
		return (0);

	return (binary_tree_height(tree->left) - binary_tree_height(tree->right));
}
