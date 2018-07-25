#ifndef LINKED_LIST_MANAGER_H
#define LINKED_LIST_MANAGER_H

#include "LinkedListNode.h"

class LinkListManager
{
public:
	
	static void Create();

	static void AddToFront(LinkedListNode *node);
	static void AddToMiddle(LinkedListNode *node, int data);
	static void AddToBack(LinkedListNode *node);

	static void RemoveFront(LinkedListNode *node);
	static void RemoveMiddle(LinkedListNode *node, int data);
	static void RemoveBack(LinkedListNode *node);

	static int Find(const int inData);

	static void PrintList();

private:
	
	//singleton land
	LinkListManager();
	~LinkListManager();
	static LinkListManager *privGetInstance();

	//private methods
	void privAddToFront(LinkedListNode *node);
	void privAddToBack(LinkedListNode *node);
	void privAddToMiddle(LinkedListNode *node, int data);

	void privRemoveFront(LinkedListNode *node);
	void privRemoveMiddle(LinkedListNode *node);
	void privRemoveBack(LinkedListNode *node);

	//data
	LinkedListNode *head;
	bool isInitialized;
};


#endif // !LINKED_LIST_MANAGER_H

