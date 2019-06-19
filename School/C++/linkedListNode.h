#ifndef LINKED_LIST_NODE_H
#define LINKED_LIST_NODE_H
#include <iostream>
#include "record.h"
using namespace std;

class linkedListNode {
  public:
    linkedListNode();
    linkedListNode(linkedListNode* llnNext, record* rRecord);
    ~linkedListNode();
    linkedListNode* getNext();
    record* getRecord();
    void setNext(linkedListNode* llnNext);
    void setRecord(record* rRecord);
  private:
    linkedListNode *g_llnNext;
    record *g_rRecord;
};
#endif
