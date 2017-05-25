#ifndef __NULLITERATOR_H__
#define __NULLITERATOR_H__

#include "iterator.h"

class NullIterator : public Iterator {
	public:
		NullIterator(Base* ptr);

		void first();
        	void next();
        	bool is_done();
        	Base* current();
};

#endif
