#include <stdio.h>
#include <stdlib.h>
#include "binary_trees.h"

/**
 * binary_tree_height - A function that measures the height of a
 * binary tree
 * @tree: A pointer to the roott node of the tree to measure
 * the height
 * Return: The height of the tree
 */

size_t binary_tree_height(const binary_tree_t *tree)
{
	size_t left_ht = 0;
	size_t right_ht = 0;

	if (tree == NULL)
		return (0);

	if (tree->left != NULL)
		left_ht = 1 + binary_tree_height(tree->left);
	if (tree->right != NULL)
		right_ht = 1 + binary_tree_height(tree->right);

	return (left_ht > right_ht ? left_ht : right_ht);
}
