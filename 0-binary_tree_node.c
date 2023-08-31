#include "binary_trees.h"
#include <stdlib.h>

/**
 * binary_tree_node - creates a binary node
 * @parent:pointer to the parent node
 * @value: Value of the node
 * Return:  new node
 */

binary_tree_t *binary_tree_node(binary_tree_t *parent, int value) {
    binary_tree_t *new_node = malloc(sizeof(binary_tree_t));
    if (new_node == NULL) {
        return NULL; // Failed to allocate memory
    }

    new_node->n = value;
    new_node->parent = parent;
    new_node->left = NULL;
    new_node->right = NULL;

    return new_node;
}
