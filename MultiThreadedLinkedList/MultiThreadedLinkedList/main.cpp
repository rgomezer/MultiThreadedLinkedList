#include "LinkedListManager.h"
#include "LinkedListNode.h"

#include <cstdlib>
#include <iostream>
#include <assert.h>

using namespace std;

int main()
{
	LinkedListNode* A = new LinkedListNode();
	A->SetData(1);

	LinkedListNode* B = new LinkedListNode();
	B->SetData(2);

	LinkedListNode* C = new LinkedListNode();
	C->SetData(3);

	LinkedListNode* D = new LinkedListNode();
	D->SetData(4);

	LinkedListNode* E = new LinkedListNode();
	E->SetData(5);

	LinkedListNode* F = new LinkedListNode();
	F->SetData(6);

	LinkedListNode* G = new LinkedListNode();
	G->SetData(7);

	LinkListManager::Create();

	LinkListManager::AddToFront(A);
	LinkListManager::AddToFront(B);
	LinkListManager::AddToFront(C);
	LinkListManager::AddToFront(D);
	LinkListManager::AddToFront(E);
	LinkListManager::AddToFront(F);
	LinkListManager::AddToFront(G);

	delete A;
	delete B;
	delete C;
	delete D;
	delete E;
	delete F;
	delete G;

	return 0;
}