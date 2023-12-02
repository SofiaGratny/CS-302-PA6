template<class ItemType>
void LinkedBTree<ItemType>::preorderTraverse(void visit(ItemType&), LinkedBTreeNode<ItemType>* treePtr) const {
    if (treePtr != nullptr) {
        ItemType theItem = treePtr->getItem();
        visit(theItem);
        std::cout << theItem << std::endl;
        preorderTraverse(visit, treePtr->getLeftChildPtr());
        preorderTraverse(visit, treePtr->getRightChildPtr());
    }
}

template<class ItemType>
void LinkedBTree<ItemType>::inorderTraverse(void visit(ItemType&), LinkedBTreeNode<ItemType>* treePtr) const {
    if (treePtr != nullptr) {
        inorderTraverse(visit, treePtr->getLeftChildPtr());
        ItemType theItem = treePtr->getItem();
        visit(theItem);
        std::cout << theItem << std::endl;
        inorderTraverse(visit, treePtr->getRightChildPtr());
    }
}

template<class ItemType>
void LinkedBTree<ItemType>::postorderTraverse(void visit(ItemType&), LinkedBTreeNode<ItemType>* treePtr) const {
    if (treePtr != nullptr) {
        preorderTraverse(visit, treePtr->getLeftChildPtr());
        preorderTraverse(visit, treePtr->getRightChildPtr());
        ItemType theItem = treePtr->getItem();
        visit(theItem);
        std::cout << theItem << std::endl;
    }
}
