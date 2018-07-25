#ifndef LINKED_LIST_MANAGER_H
#define LINKED_LIST_MANAGER_H

#include "LinkedListNode.h"

class LinkListManager
{
public:
	
	static void Create();

	static void AddToFront(LinkedListNode *node);
	static void AddToMiddle(LinkedListNode *node);
	static void AddToBack(LinkedListNode *node);

	static void RemoveFront(LinkedListNode *node);
	static void RemoveMiddle(LinkedListNode *node);
	static void RemoveBack(LinkedListNode *node);

	static int Find(const int inData);

	static void PrintList();

private:
	
	//singleton land
	LinkListManager();
	~LinkListManager();
	static LinkListManager *privGetInstance();

	//data
	LinkedListNode *head;
	bool isInitialized;
};


#endif // !LINKED_LIST_MANAGER_H

