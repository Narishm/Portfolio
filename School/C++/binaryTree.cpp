// Implementation file for a binary tree
#include "binaryTree.h"

// binaryTree Destructor
binaryTree::~binaryTree() {
	clearSubTree(ptrRoot);
	return;
}

// Check if the binary tree is empty
bool binaryTree::isEmpty() {
	return(ptrRoot == NULL);
}

// Destroy all nodes
void binaryTree::clearSubTree(node *ptrTree) {
// The tree is empty, so return nothing to clear
	if(ptrTree == NULL) return;
// Clear left sub tree
	if(ptrTree->ptrLeft != NULL) clearSubTree(ptrTree->ptrLeft);
// Clear right sub tree
	if(ptrTree->ptrRight != NULL) clearSubTree(ptrTree->ptrRight);
	Delete ptrTree;
	return;
}

// Search a node in the binary tree
node *binaryTree::searchTree(int key) {
	node *ptrTemp;
	ptrParent = ptrTemp = ptrRoot;
	while((ptrTemp != NULL) && (ptrTemp->key != key)) {
		ptrParent = ptrTemp;
		if(key < ptrTemp->key) {
			ptrTemp = ptrTemp->ptrLeft;
		}
		else {
			ptrTemp = ptrTemp->ptrRight;
		}
	}
	return ptrTemp;
}

// Insert a new node into the binary tree
bool binaryTree::insert(int key) {
	node *ptrTemp;
// Set the values of the two pointers
	ptrTemp = ptrRoot;
	ptrParent = NULL;
// Commands in the while loop executed
// till ptrTemp becomes NULL
	while(ptrTemp != NULL) {
		ptrParent = ptrTemp;
// Set the ptrTemp to ptrLeft if
// key in the new node less than
// key in this node otherwise to ptrRight
		if(key < ptrTemp->key) {
			ptrTemp = ptrTemp->ptrLeft;
		}
		else if(key > ptrTemp->key) {
			ptrTemp = ptrTemp->ptrRight;
		}
		else return false;
	}
	if(ptrParent == NULL)	{
		ptrRoot = new node(key);
	}
	else if(key < ptrParent->key) {
		ptrParent->ptrLeft = new node(key);
	}
	else {
		ptrParent->ptrRight = new node(key);
	}
	return true;
}

// Description: Display the binary tree
void binaryTree::displaySubTree(node *ptrTree, ostream & out) {
	if(ptrTree != NULL) {
		displaySubTree(ptrTree->ptrLeft, out);
		displayNode(ptrTree, out);
		displaySubTree(ptrTree->ptrRight, out);
	}
}

// Description: Delete a node from the tree
bool binaryTree::deleteTree(int key) {
// Search for the node to be deleted by
// calling searchTree() function
	node *ptrTemp = searchTree(key);
// Check if tree is not empty, nothing to
// be deleted
	if(ptrTemp == NULL) {
// return false if not successful
		return false;
	}
// Deleting the root
	if(ptrTemp == ptrRoot) {
		ptrRoot = deleteNode(ptrRoot);
	}
// Delete ptrTemp if key of ptrTemp < parent key
	else if(key < ptrParent->key) {
		ptrParent->ptrLeft = deleteNode(ptrTemp);
	}
	else {
		ptrParent->ptrRight = deleteNode(ptrTemp);
	}
// Return true if successful
	return true;
}

// Delete a node from the tree
node *binaryTree::deleteNode(node *ptrCurr) {
	node *ptrTemp = ptrCurr;
// Check if the node to be deleted is the
// leaf node
// Set ptrCurr to right pointer if the left
// pointer of ptrCurr is NULL
	if(ptrCurr->ptrLeft == NULL) {
		ptrCurr = ptrCurr->ptrRight;
	}
// Set ptrCurr to left pointer if the right
// pointer of ptrCurr is NULL
	else if(ptrCurr->ptrRight == NULL) {
		ptrCurr = ptrCurr->ptrLeft;
	}
// Deleting a node with two children
	else {
// Set ptrTemp to point to the right child
		ptrTemp = ptrCurr->ptrRight;
// while loop moves to the left of the tree
		while(ptrTemp->ptrLeft) {
// Set ptrTemp to point to ptrLeft
			ptrTemp = ptrTemp->ptrLeft;
		}
		ptrTemp->ptrLeft = ptrCurr->ptrLeft;
// Set ptrTemp equal to ptrCurr
		ptrTemp = ptrCurr;
		ptrCurr = ptrCurr->ptrRight;
	}
// Delete ptrTemp and return ptrCurr
	Delete ptrTemp;
	return ptrCurr;
}

// Preorder traversal of the binary tree
void binaryTree::preorder(node *p) {
	if(p) {
		cout << p->key << " ";
		preorder(p->ptrLeft);
		preorder(p->ptrRight);
	}
}

// Description: Inorder traversal of the binary tree
void binaryTree::inorder(node *p) {
	if(p) {
		inorder(p->ptrLeft);
		cout << p->key << " ";
		inorder(p->ptrRight);
	}
}

// Description: Postorder traversal of the binary tree.
void binaryTree::postorder(node *p) {
	if(p) {
		postorder(p->ptrLeft);
		postorder(p->ptrRight);
		cout << p->key << " ";
	}
}
