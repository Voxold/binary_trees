#include "binary_trees.h"
#include "14-binary_tree_balance.c"
#include "15-binary_tree_is_full.c"


/**
 * check_leaves - .
 * @tree: a pointer to the root node of the tree to check
 * @current_node: current level of current leaf
 * @BT_level: level of past leaves
 * Return: 1 or 0
 */
int check_leaves(const binary_tree_t *tree, int current_node, int *BT_level)
{

	if (tree == NULL)
		return (0);
	if (tree->right == NULL && tree->left == NULL)
	{
		if (*BT_level == 0)
		{
			*BT_level = current_node;
			return (1);
		}
		return (*BT_level == current_node);
	}
	return (check_leaves(tree->left, current_node + 1, BT_level) &&
		check_leaves(tree->right, current_node + 1, BT_level));
}

/**
 * binary_tree_is_perfect - a function that checks if a binary tree is perfect
 * @tree: a pointer to the root node of the tree to check
 * Return: 1 if perfect 0 if other
 */
int binary_tree_is_perfect(const binary_tree_t *tree)
{
	int BT_level = 0;

	if (tree == NULL)
		return (0);

	if (binary_tree_is_full(tree) && (!binary_tree_balance(tree)))
	{
		return (check_leaves(tree, 0, &BT_level));
	}

	return (0);
}
