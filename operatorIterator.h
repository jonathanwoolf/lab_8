#ifndef __OPERATORITERATOR_H__
#define __OPERATORITERATOR_H__
#include "iterator.h"
class Base;
class OperatorIterator : public Iterator {
	public:
		OperatorIterator(Base* ptr);

void first();
      	void next();
      	bool is_done();
      	Base* current();
};
#endif
