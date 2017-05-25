#ifndef __UNARYITERATOR_H__
#define __UNARYITERATOR_H__
#include "iterator.h"

class UnaryIterator : public Iterator {
	public:
		UnaryIterator(Base* ptr);

		void first();
       	void next();
       	bool is_done();
       	Base* current();
};
#endif
