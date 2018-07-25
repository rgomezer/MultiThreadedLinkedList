#include "LinkedListManager.h"

LinkListManager * LinkListManager::privGetInstance()
{
	static LinkListManager linkMan;
	
	return &linkMan;
}
