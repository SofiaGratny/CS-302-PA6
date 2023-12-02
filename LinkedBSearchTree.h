#ifndef LINKED_BSEARCHTREE
#define LINKED_BSEARCHTREE

#include "LinkedBTreeNode.h"
#include "LinkedBTree.h"

template<class ItemType>
class LinkedBSearchTree: public LinkedBTree<ItemType> {
private:
    LinkedBTreeNode<ItemType>* rootPtr;
protected:
    LinkedBTreeNode<ItemType>* placeNode(LinkedBTreeNode<ItemType>* subTreePtr, LinkedBTreeNode<ItemType>* newNodePtr);
    // LinkedBTreeNode<ItemType>* removeValue(LinkedBTreeNode<ItemType>* subTreePtr, const ItemType target, bool& isSuccessful) override;
    // LinkedBTreeNode<ItemType>* removeNode(LinkedBTreeNode<ItemType>* nodePtr);
    // LinkedBTreeNode<ItemType>* removeLeftmostNode(LinkedBTreeNode<ItemType>* inorderSuccessor);
    // LinkedBTreeNode<ItemType>* findNode(LinkedBTreeNode<ItemType>* treePtr, const ItemType& target) const;
public:
    LinkedBSearchTree();

    bool isEmpty() const;
    int getHeight(LinkedBTreeNode<ItemType>* treePtr) const;
    // int getNumberOfNodes() const;
    // ItemType getRootData() const;
    bool add(const ItemType& newData);
    // bool remove(const ItemType& data);
    // void clear();
    ItemType getEntry(const ItemType& anEntry) const;
    // bool contains(const ItemType& anEntry) const;

    virtual ~LinkedBSearchTree();
};
#include "LinkedBSearchTree.cpp"
#endif
