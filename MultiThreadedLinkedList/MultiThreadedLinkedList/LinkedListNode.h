#ifndef LINK_LIST_NODE_H
#define LINK_LIST_NODE_H

class LinkedListNode
{
public:
	
	//Big 4
	LinkedListNode();
	~LinkedListNode();
	LinkedListNode(LinkedListNode &other);
	LinkedListNode& operator= (const LinkedListNode &other);

	//Set methods
	void SetNext(LinkedListNode * const in);
	void SetPrevious(LinkedListNode * const in);
	void SetData(const int inData);

	//Accessors
	LinkedListNode *getPrevious() const;
	LinkedListNode *getNext() const;
	int getData() const;

private:
	
	//data
	int data;
	LinkedListNode *next;
	LinkedListNode *prev;
};

#endif // LINK_LIST_NODE_H

