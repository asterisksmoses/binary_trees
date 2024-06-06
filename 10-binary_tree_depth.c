#include <stdio.h>
#include <stdlib.h>
#include "binary_trees.h"

/**
 * binary_tree_depth - This function finds the binary tree
 * depth
 * @tree: A pointer to the node to measure the depth
 * Return: The depth of the binary tree
 */

size_t binary_tree_depth(const binary_tree_t *tree)
{
	size_t dpth = 0;

	if (tree == NULL)
		return (0);

	while (tree->parent != NULL)
	{
		dpth++;
		tree = tree->parent;
	}
	return (dpth);
}
