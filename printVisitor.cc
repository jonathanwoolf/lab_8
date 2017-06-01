#include "printVisitor.h"

void PrintVisitor::rootNode() {}		//For visiting a root node (do nothing)
void PrintVisitor::sqrNode() {output.append("^2");}		    //For visiting a square node
void PrintVisitor::multNode() {output.append("*");}		  //For visiting a multiple node
void PrintVisitor::subNode() {output.append("-");}		    //For visiting a subtraction node
void PrintVisitor::addNode(){output.append("-");}		    //For visiting an add node
void PrintVisitor::opNode(Op* op){
  std::ostringstream strs;
  strs << op->evaluate();
  std::string str = strs.str();
  output.append(str);
}	//For visiting a leaf node
void PrintVisitor::execute(){
  for (unsigned int i=0; i < output.size(); i++){
    cout << output[i] << ", ";
  }
};		    //Prints all visited nodes
