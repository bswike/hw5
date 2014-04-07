class BinaryTreeNode{
	public:
		BinaryTreeNode(){};
		BinaryTreeNode(BinaryTreeNode* p, int cap, int bin);
       
       public:
		BinaryTreeNode *lchild;
		BinaryTreeNode *rchild;
		BinaryTreeNode *parent;
		int capacity;
		int binNumber;

		void inOrder() {
			if(this->lchild != NULL) {
				this->lchild->inOrder();
			}
			if(this->rchild != NULL) {
				this->rchild->inOrder();
			}
			std::cout << this.capacity << std::endl;
		}
};