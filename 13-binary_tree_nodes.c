#include <stdio.h>
#include <stdlib.h>
#include "binary_trees.h"

/**
 * binary_tree_nodes - This function counts the nodes with
 * at least 1 child in a binary tree
 * @tree: A pointer to the root node of the tree to count
 * the number of nodes
 * Return: The number of nodes with atleast 1 child
 */

size_t binary_tree_nodes(const binary_tree_t *tree)
{
	size_t no_nodes = 0;

	if (tree == NULL)
		return (0);

	if (tree->left != NULL || tree->right != NULL)
		no_nodes++;

	no_nodes += binary_tree_nodes(tree->left);
	no_nodes += binary_tree_nodes(tree->right);

	return (no_nodes);
}
