#include <stdio.h>
#include <stdlib.h>
#include "binary_trees.h"

/**
 * binary_tree_is_perfect - This function checks if a
 * binary tree is perfect
 * @tree: A pointer to the root node of the tree to check
 * Return: The numbber of nodes expected in a binary tree
 */

int binary_tree_is_perfect(const binary_tree_t *tree)
{
	int hght = 0;
	int nds = 0;
	int expc_nds = 0;

	if (tree == NULL)
		return (0);

	hght = binary_tree_height(tree);
	nds = binary_tree_size(tree);

	expc_nds = (1 << (hght + 1)) - 1;

	return (nds == expc_nds);
}
