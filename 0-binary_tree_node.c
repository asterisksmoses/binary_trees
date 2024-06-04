#include <stdio.h>
#include <stdlib.h>
#include "binary_trees.h"

/**
 * binary_tree_node - This function creates a new binary tree node
 * @parent: The Root node
 * @value: The data part
 * Return: A pointer to the new node or NULL upon failure
 */

binary_tree_t *binary_tree_node(binary_tree_t *parent, int value)
{
	binary_tree_t *node_n;

	node_n = malloc(sizeof(binary_tree_t));

	if (!node_n)
		return (NULL);
	node_n->n = value;
	node_n->parent = parent;
	node_n->left = NULL;
	node_n->right = NULL;

	return (node_n);
}
