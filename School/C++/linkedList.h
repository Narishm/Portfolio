#ifndef LINKED_LIST_H
#define LINKED_LIST_H
#include "linkedListNode.h"

class linkedList {
  public:
    linkedList();
    ~linkedList();
    int add(record *rRecord);
    record* search(int iKey, string sName);
  private:
    linkedListNode *g_llnStart;
};
#endif
