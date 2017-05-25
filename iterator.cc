#include "iterator.h"

OperatorIterator::OperatorIterator(Base* ptr) : Iterator(ptr) {}
void OperatorIterator::first()
{
  if(self_ptr->get_left() != NULL)
  {
    current_ptr = self_ptr->get_left();
  }
}
void OperatorIterator::next()
{
  if(current_ptr == self_ptr->get_left())
  {
    current_ptr = self_ptr->get_right();
  }
  else if(current_ptr == self_ptr->get_right())
  {
    current_ptr = NULL;
  }
}
bool OperatorIterator::is_done()
{
  if(current_ptr == NULL)
  {
    return true;
  }
  return false;
}
Base* OperatorIterator::current()
{
  return current_ptr;
}

UnaryIterator::UnaryIterator(Base* ptr) : Iterator(ptr) {}
void UnaryIterator::first()
{
  if(self_ptr->get_left() != NULL)
  {
    current_ptr = self_ptr->get_left();
  }
}
void UnaryIterator::next()
{
  if(current_ptr == self_ptr->get_left())
  {
    current_ptr = NULL;
  }
}
bool UnaryIterator::is_done()
{
  if(current_ptr == NULL)
  {
    return true;
  }
  return false;
}
Base* UnaryIterator::current()
{
  return current_ptr;
}

NullIterator::NullIterator(Base* ptr) : Iterator(ptr) {}
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

PreOrderIterator::PreOrderIterator(Base* ptr) {this->ptr = ptr;}
void PreOrderIterator::first() {
	//Empty the stack (just in case we had something leftover from
	//another run)
  iterators.clear();
	//Create an iterator for the Base* that we built the iterator for
  Iterator iter = new Iterator(ptr);
	//Initialize that iterator and push it onto the stack
  iterators.push(iter);
}

void PreOrderIterator::next() {
	//Create an iterator for the item on the top of the stack
  Iterator iter = new Iterator(;
	//Initialize the iterator and push it onto the stack

	//As long as the top iterator on the stack is done, pop it off the
	//stack and then advance whatever iterator is now on top of the stack
}

bool PreOrderIterator::is_done() {
	//Return true if there are no more elements on the stack to iterate
  if (iterators.empty()){
    return true;
  }
  else
    return false
}

Base* PreOrderIterator::current() {
	//Return the current for the top iterator in the stack
   return iterators.top();
}
