#include <stdio.h>
#include <stdlib.h>
#include "binary_trees.h"

/**
 * binary_tree_balance - Finds the balance factor of a binary tree
 * @tree: A pointer to the root node of the tree to
 * measure the balance factor
 * Return: The final balance factor
 */

int binary_tree_balance(const binary_tree_t *tree)
{
	int height_lft = 0;
	int height_rght = 0;

	if (tree == NULL)
		return (0);

	height_lft = binary_tree_height(tree->left);
	height_rght = binary_tree_height(tree->right);

	return (height_lft - height_rght);
}
