#include <stdio.h>
#include <stdlib.h>
#include "binary_trees.h"

/**
 * binary_tree_size - Function that calculates the size of a
 * binary tree
 * @tree: A pointer to the root node of the tree to measure
 * Return: The size of the binary tree
 */

size_t binary_tree_size(const binary_tree_t *tree)
{
	size_t size_lft = 0;
	size_t size_rght = 0;

	if (tree == NULL)
		return (0);

	size_lft = binary_tree_size(tree->left);
	size_rght = binary_tree_size(tree->right);

	return (size_lft + size_rght + 1);
}
