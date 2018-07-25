#include "LinkedListNode.h"

LinkedListNode::LinkedListNode()
	:next(0), prev(0), data(0)
{
	
}

LinkedListNode::~LinkedListNode()
{
	//does nothing for now
}

LinkedListNode::LinkedListNode(LinkedListNode & other)
{
	this->next = other.next;
	this->prev = other.prev;
	this->data = other.data;
}

LinkedListNode & LinkedListNode::operator=(const LinkedListNode & other)
{
	this->next = other.next;
	this->prev = other.prev;
	this->data = other.data;

	return *this;
}

void LinkedListNode::SetNext(LinkedListNode * const in)
{
	this->next = in;
}

void LinkedListNode::SetPrevious(LinkedListNode * const in)
{
	this->prev = in;
}

void LinkedListNode::SetData(const int inData)
{
	this->data = inData;
}

LinkedListNode * LinkedListNode::getPrevious() const
{
	return this->prev;
}

LinkedListNode * LinkedListNode::getNext() const
{
	return this->next;
}

int LinkedListNode::getData() const
{
	return this->data;
}


