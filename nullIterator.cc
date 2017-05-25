#include "nullIterator.h"

NullIterator::NullIterator(Base* ptr);

void NullIterator::first(){}
void NullIterator::next(){}
bool NullIterator::is_done()
{
  return true;
}
Base* NullIterator::current()
{
  return NULL;
}
