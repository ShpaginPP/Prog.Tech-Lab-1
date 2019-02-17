#pragma once
#include "base_queue.h"
class protected_queue:protected base_queue
{
public:
	protected_queue(void);
	~protected_queue(void);
	int pop(void) override;
	void push(elem *newElem) override;
	base_queue *copy(void) override;
	int calcul(void);
	elem *getHead(void)const{return base_queue::getHead();};
	elem *getTail(void)const{return base_queue::getTail();};
	base_queue *operator + (const base_queue *op2);
	base_queue *operator + (elem *op2);
	base_queue *operator = (const base_queue *op2);
	friend ostream &operator<< (ostream &stream, const protected_queue *myQueue);
};
