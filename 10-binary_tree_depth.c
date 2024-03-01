#include "binary_trees.h"

/**
 * binary_tree_depth - measures the depth of a node in a binary tree
 * @tree: a pointer to the node to measure the depth
 * Return: The depth of the node. If tree is NULL, return 0.
 */
size_t binary_tree_depth(const binary_tree_t *tree)
{
	size_t debth;

	debth = -1;

	if (tree->parent == NULL || tree == NULL)
		return (0);

	debth = binary_tree_depth(tree->parent) + 1;

	return (debth);
}
