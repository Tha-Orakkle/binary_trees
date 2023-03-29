#include "binary_trees.h"

/**
 * free_tree - deletes a node
 * tree: pointer to node to delete
 */

void free_tree(binary_tree_t *tree)
{
	if (!tree)
		return;

	free(tree->n);
	free(tree->left);
	free(tree->right);
	free(tree->parent);
	free(tree);
}



/**
 * binary_tree_delete - deletes an entire binary tree
 * tree: pointer to thr root node of the tree to delete
 */

void binary_tree_delete(binary_tree_t *tree)
{
	if (!tree)
		return;

	tree->left ? binary_tree_delete(tree->left): free_tree(tree);
	tree->right ? binary_tree_delete(tree->right): free_tree(tree);
}
