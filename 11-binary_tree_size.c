#include "binary_trees.h"

/**
 * binary_tree_size - a function that measures the size of a binary tree
 * @tree: a pointer to the node to measure the depth
 * Return: The size of a binary tree. If tree is NULL, return 0.
 */
size_t binary_tree_size(const binary_tree_t *tree)
{
	size_t left_size, right_size;

	if (tree == NULL)
		return (0);

	right_size = binary_tree_size(tree->left);
	left_size = binary_tree_size(tree->right);

	return (right_size + left_size + 1);
}
