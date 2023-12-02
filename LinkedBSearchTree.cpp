template<class ItemType>
LinkedBTreeNode<ItemType>* LinkedBSearchTree<ItemType>:: placeNode(LinkedBTreeNode<ItemType>*
 subTreePtr, LinkedBTreeNode<ItemType>* newNodePtr) {

    if (subTreePtr == nullptr) {
        return newNodePtr;
    }
    else if (subTreePtr->getItem() > newNodePtr->getItem()) {
        LinkedBTreeNode<ItemType>* tempPtr = placeNode(subTreePtr->getLeftChildPtr(), newNodePtr);
        subTreePtr->setLeftChildPtr(tempPtr);
    }
    else {
        LinkedBTreeNode<ItemType>* tempPtr = placeNode(subTreePtr->getRightChildPtr(), newNodePtr);
        subTreePtr->setRightChildPtr(tempPtr);
    }
    return subTreePtr;
}

template<class ItemType>
LinkedBSearchTree<ItemType>::LinkedBSearchTree() : rootPtr(nullptr) {}

template<class ItemType>
bool LinkedBSearchTree<ItemType>::isEmpty() const {
    return rootPtr == nullptr;
}

template<class ItemType>
int LinkedBSearchTree<ItemType>:: getHeight(LinkedBTreeNode<ItemType>* treePtr) const {
    if (treePtr == nullptr) {
        return -1;
    }
    int leftDepth = getHeight(treePtr->getLeftChildPtr());
    int rightDepth = getHeight(treePtr->getRightChildPtr());

    if (leftDepth > rightDepth) {
        return(leftDepth + 1);
    } else {
        return(rightDepth + 1);
    }
}

template<class ItemType>
bool LinkedBSearchTree<ItemType>::add(const ItemType& newData) {
    LinkedBTreeNode<ItemType>* newNodePtr;
    newNodePtr->setItem(newData);
    rootPtr = placeNode(rootPtr, newNodePtr);
    return true;
}

template<class ItemType>
ItemType LinkedBSearchTree<ItemType>:: getEntry(const ItemType& anEntry) const {

}
