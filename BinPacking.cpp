#ifndef MAXWINNERTREE
#define MAXWINNERTREE
#include "MaxWinnerTree.h"
#endif

#ifndef BINARYSEARCHTREE
#define BINARYSEARCHTREE
#include "BinarySearchTree.h"
#endif

#ifndef BINARYTREENODE
#define BINARYTREENODE
#include "BinaryTreeNode.h"
#endif

#ifndef BINPACKING
#define BINPACKING
#include "BinPacking.h"
#endif
#include <stddef.h>
#include <iostream>
using namespace std;

void BinPacking::firstFitPack(int *objectSize, int numberOfObjects, int binCapacity)
{
	MaxWinnerTree firstfit;

	firstfit.initialize(numberOfObjects, binCapacity);

	/*for(int i = 0; i < numberOfObjects; i++) {
		BinaryTreeNode* temp = firstfit.find(objectSize[i]);
		temp -> capacity -= objectSize[i];
		binNumberArray[i] = temp->binNumber;
		firstfit.replay(temp->parent);

	} */

}
   	 
void BinPacking::bestFitPack(int *objectSize, int numberOfObjects, int binCapacity)
{
	BinarySearchTree bestfit = BinarySearchTree(binCapacity);
	int nxtBinNumber = 2;

	for(int i = 0; i < numberOfObjects; i++) {
		binNumberArray[i] = 0;
	}

	// for(int j = 0;j < numberOfObjects; j++){
	// 	BinaryTreeNode* temp = bestfit.find(objectSize[j]);
	// 	if (temp == NULL) {
	// 		bestfit.insert(binCapacity, nxtBinNumber++);
	// 		temp = bestfit.find(objectSize[j]);

	// 	}
	// 	//record the new capacity
	// 	//erase current node
	// 	//insert new node wih new capacity
	// 	temp -> capacity -= objectSize[j];
	// 	binNumberArray[j] = temp -> binNumber;
	// 	printBinSequence();
	// 	bestfit.insert(temp->capacity, temp -> binNumber);
	// 	//bestfit.erase(temp);

	// } 
	int i = 0;
	// 0
	BinaryTreeNode* temp = bestfit.find(objectSize[i]);
	if(temp == NULL) {
		bestfit.insert(binCapacity, nxtBinNumber++);
		temp = bestfit.find(objectSize[i]);
	}
	temp->capacity -= objectSize[i];
	binNumberArray[i] = temp->binNumber;
	printBinSequence();
	bestfit.insert(temp->capacity, temp->binNumber);
	bestfit.erase(temp);

	// 1
	i++;
	temp = bestfit.find(objectSize[i]);
	if(temp == NULL) {
		bestfit.insert(binCapacity, nxtBinNumber++);
		temp = bestfit.find(objectSize[i]);
	}
	temp->capacity -= objectSize[i];
	binNumberArray[i] = temp->binNumber;
	printBinSequence();
	bestfit.insert(temp->capacity, temp->binNumber);
	bestfit.erase(temp);

	// 2
	i++;
	temp = bestfit.find(objectSize[i]);
	if(temp == NULL) {
		bestfit.insert(binCapacity, nxtBinNumber++);
		temp = bestfit.find(objectSize[i]);
	}
	temp->capacity -= objectSize[i];
	binNumberArray[i] = temp->binNumber;
	printBinSequence();
	bestfit.insert(temp->capacity, temp->binNumber);
	bestfit.erase(temp);

	// 3
	i++;
	temp = bestfit.find(objectSize[i]);
	if(temp == NULL) {
		bestfit.insert(binCapacity, nxtBinNumber++);
		temp = bestfit.find(objectSize[i]);
	}
	temp->capacity -= objectSize[i];
	binNumberArray[i] = temp->binNumber;
	printBinSequence();
	bestfit.insert(temp->capacity, temp->binNumber);
	bestfit.erase(temp);

	// 4
	i++;
	temp = bestfit.find(objectSize[i]);
	if(temp == NULL) {
		bestfit.insert(binCapacity, nxtBinNumber++);
		temp = bestfit.find(objectSize[i]);
	}
	temp->capacity -= objectSize[i];
	binNumberArray[i] = temp->binNumber;
	printBinSequence();
	bestfit.insert(temp->capacity, temp->binNumber);
	bestfit.erase(temp);

	// 5
	i++;
	temp = bestfit.find(objectSize[i]);
	if(temp == NULL) {
		bestfit.insert(binCapacity, nxtBinNumber++);
		temp = bestfit.find(objectSize[i]);
	}
	temp->capacity -= objectSize[i];
	binNumberArray[i] = temp->binNumber;
	printBinSequence();
	bestfit.insert(temp->capacity, temp->binNumber);
	bestfit.erase(temp);

	// 6
	i++;
	std::cout << "i: " << i << std::endl;
	temp = bestfit.find(objectSize[i]);
	if(temp == NULL) {
		std::cout << "NULL" << std::endl;
		bestfit.insert(binCapacity, nxtBinNumber++);
		temp = bestfit.find(objectSize[i]);
	}
	temp->capacity -= objectSize[i];
	binNumberArray[i] = temp->binNumber;
	printBinSequence();
	std::cout << "Capacity: " << temp->capacity << " BinNumber: " << temp->binNumber << std::endl;
	bestfit.insert(temp->capacity, temp->binNumber);
	bestfit.erase(temp);

	// 7
	i++;
	std::cout << "i: " << i << std::endl;
	temp = bestfit.find(objectSize[i]);
	if(temp == NULL) {
		std::cout << "NULL" << std::endl;
		bestfit.insert(binCapacity, nxtBinNumber++);
		temp = bestfit.find(objectSize[i]);
	}
	temp->capacity -= objectSize[i];
	binNumberArray[i] = temp->binNumber;
	printBinSequence();
	std::cout << "Capacity: " << temp->capacity << " BinNumber: " << temp->binNumber << std::endl;
	bestfit.insert(temp->capacity, temp->binNumber);
	bestfit.erase(temp);

	// 8
	i++;
	temp = bestfit.find(objectSize[i]);
	if(temp == NULL) {
		bestfit.insert(binCapacity, nxtBinNumber++);
		temp = bestfit.find(objectSize[i]);
	}
	temp->capacity -= objectSize[i];
	binNumberArray[i] = temp->binNumber;
	printBinSequence();
	bestfit.insert(temp->capacity, temp->binNumber);
	bestfit.erase(temp);

	// 9
	i++;
	temp = bestfit.find(objectSize[i]);
	if(temp == NULL) {
		bestfit.insert(binCapacity, nxtBinNumber++);
		temp = bestfit.find(objectSize[i]);
	}
	temp->capacity -= objectSize[i];
	binNumberArray[i] = temp->binNumber;
	printBinSequence();
	bestfit.insert(temp->capacity, temp->binNumber);
	bestfit.erase(temp);

	// 10
	i++;
	temp = bestfit.find(objectSize[i]);
	if(temp == NULL) {
		bestfit.insert(binCapacity, nxtBinNumber++);
		temp = bestfit.find(objectSize[i]);
	}
	temp->capacity -= objectSize[i];
	binNumberArray[i] = temp->binNumber;
	printBinSequence();
	bestfit.insert(temp->capacity, temp->binNumber);
	bestfit.erase(temp);

	// 11
	i++;
	temp = bestfit.find(objectSize[i]);
	if(temp == NULL) {
		bestfit.insert(binCapacity, nxtBinNumber++);
		temp = bestfit.find(objectSize[i]);
	}
	temp->capacity -= objectSize[i];
	binNumberArray[i] = temp->binNumber;
	printBinSequence();
	bestfit.insert(temp->capacity, temp->binNumber);
	bestfit.erase(temp);
}