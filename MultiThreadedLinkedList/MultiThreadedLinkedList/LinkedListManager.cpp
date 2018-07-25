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

LinkListManager * LinkListManager::privGetInstance()
{
	static LinkListManager linkMan;

	return &linkMan;
}
