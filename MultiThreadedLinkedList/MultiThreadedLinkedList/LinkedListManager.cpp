#include "LinkedListManager.h"
#include <cstdlib>
#include <iostream>
#include <assert.h>

LinkListManager::LinkListManager()
	:head(0), isInitialized(false)
{
	
}

LinkListManager::~LinkListManager()
{

}

void LinkListManager::Create()
{
	LinkListManager *linkMan = privGetInstance();

	assert(linkMan->isInitialized == false);

	linkMan->isInitialized = true;
}

void LinkListManager::AddToFront(LinkedListNode * node)
{
	assert(node != 0);

	LinkListManager *linkMan = privGetInstance();

	linkMan->privAddToFront(node);
}

void LinkListManager::AddToMiddle(LinkedListNode * node, int data)
{
	assert(node != 0);

	LinkListManager *linkMan = privGetInstance();

	linkMan->privAddToMiddle(node, data);
}

void LinkListManager::AddToBack(LinkedListNode * node)
{
	assert(node != 0);

	LinkListManager *linkMan = privGetInstance();

	linkMan->privAddToBack(node);
}

LinkListManager * LinkListManager::privGetInstance()
{
	static LinkListManager linkMan;

	return &linkMan;
}

void LinkListManager::privAddToFront(LinkedListNode * node)
{
	assert(node != 0);

	//if first node
	if (this->head == 0)
	{
		this->head = node;
		this->head->SetNext(0);
		this->head->SetPrevious(0);
	}
	//otherwise push to the front
	else
	{
		this->head->SetPrevious(node);
		node->SetNext(head);
		node->SetPrevious(0);
		this->head = node;
	}
}

void LinkListManager::privAddToBack(LinkedListNode * node)
{
	assert(node != 0); //safety

	//if we are the only node on the list
	if (head == 0)
	{
		head = node;
		head->SetNext(0);
		head->SetPrevious(0);
		return;
	}

	//otherwise iterate till we are at the end
	LinkedListNode* temp = head;

	while (temp != 0)
	{
		if (temp->getNext() == 0)
		{
			break;
		}

		temp = temp->getNext();
	}

	temp->SetNext(node);
	node->SetPrevious(temp);
	node->SetNext(0);
}
