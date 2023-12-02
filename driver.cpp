#include <iostream>

#include "Tree_Interface.h"
#include "LinkedBSearchTree.h"

using namespace std;

void visit(LinkedBTreeNode<int>* item);

int main() {

    LinkedBSearchTree<int>* newLinkedBSearchTree = new LinkedBSearchTree<int>();

    int initialArray [200] = { };
    // create array

    for (int i = 0; i < 200; i++) {
        initialArray[i] = i + 1;
        cout << initialArray[i] << endl;
    }
    // store values 1-200 into array

    random_shuffle(&initialArray[1], &initialArray[200]);
    // shuffle numbers in array

    for (int i = 0; i < 200; i++) {
        cout << initialArray[i] << ", ";
    }
    // print shuffled array

    for (int i = 0; i < 100; i++) {
        newLinkedBSearchTree->add(initialArray[i]);
    }
    // add each element from array to newLinkedBSearchTree

    LinkedBTreeNode<int>* headPtr;
    headPtr->setItem(initialArray[1]);


    cout << "height: ";
    newLinkedBSearchTree->getHeight(headPtr);

    cout << endl << "Inorder traverse: ";
    newLinkedBSearchTree->inorderTraverse(visit(headPtr), headPtr);

    cout << endl << "Postorder traverse: ";
    newLinkedBSearchTree->postorderTraverse(visit(headPtr), headPtr);

    cout << endl << "Preorder traverse: ";
    newLinkedBSearchTree->preorderTraverse(visit(headPtr), headPtr);

    // print out data

    return 0;
}

void visit(LinkedBTreeNode<int>* item) {
    cout << item << endl;
}
