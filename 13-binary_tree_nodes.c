#include "binary_trees.h"

/**
 * binary_tree_nodes - a function that counts the nodes
 * with at least 1 child in a binary tree
 * @tree: a pointer to the node to measure the depth
 * Return: counts of the nodes with at least 1 child in a binary tree.
 * If tree is NULL, return 0.
 * A NULL pointer is not a node
 */
size_t binary_tree_nodes(const binary_tree_t *tree)
{
	size_t left_count, right_count;

	if (tree == NULL)
		return (0);
	if (tree->left == NULL && tree->right == NULL)
		return (0);

	right_count = binary_tree_nodes(tree->left);
	left_count = binary_tree_nodes(tree->right);

	return (right_count + left_count + 1);
}
