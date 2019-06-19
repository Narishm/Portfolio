#include "linkedList.h"
#include <string>

linkedList::linkedList() {g_llnStart = NULL;}
linkedList::~linkedList() {if(g_llnStart) delete g_llnStart;}

int linkedList::add(record *rRecord) {
// Make sure we have a valid record
  if(!rRecord) {return 0;}
// Make sure that the record to be added is of the same type (key) as the
// Start node
  if(g_llnStart) {
    if((g_llnStart->getRecord()) && (g_llnStart->getRecord()->getKey() != rRecord->getKey())) {
      g_llnStart = new linkedListNode(g_llnStart, rRecord);
    }
    else return 0;
  }
  else {g_llnStart = new linkedListNode(g_llnStart, rRecord);}
  return 1;
}

record* linkedList::search(int iKey, string sName) {
// Make sure we have a valid list and valid name
  if(!g_llnStart) return NULL;
// Make sure that we are in the right list
  if((!g_llnStart->getRecord()) || (g_llnStart->getRecord()->getKey() != iKey)) return NULL;
// See if the record is in the list
  for(linkedListNode *llnCurrent = g_llnStart; llnCurrent; llnCurrent = llnCurrent->getNext()) {
    if(llnCurrent && llnCurrent->getRecord() && llnCurrent->getRecord()->getName() == sName) {
      return llnCurrent->getRecord();
    }
  }
  return NULL;
}
