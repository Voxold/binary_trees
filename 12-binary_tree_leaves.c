#include "binary_trees.h"

/**
 * binary_tree_leaves -  a function that counts the leaves in a binary tree
 * @tree: a pointer to the node to measure the depth
 * Return: counts of the leaves. If tree is NULL, return 0.
 * A NULL pointer is not a leaf
 */
size_t binary_tree_leaves(const binary_tree_t *tree)
{
	size_t left_count, right_count;

	if (tree == NULL)
		return (0);
	if (tree->left == NULL && tree->right == NULL)
		return (1);

	right_count = binary_tree_leaves(tree->left);
	left_count = binary_tree_leaves(tree->right);

	return (right_count + left_count);
}
