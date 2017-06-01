#ifndef __PRINTVISITOR_H__
#define __PRINTVISITOR_H__

#include "composite.h"

class Visitor {
	private:
		std::string output;

	public:
		virtual void rootNode() {}		//For visiting a root node (do nothing)
		virtual void sqrNode() {}		    //For visiting a square node
		virtual void multNode() {}		  //For visiting a multiple node
		virtual void subNode() {}		    //For visiting a subtraction node
		virtual void addNode() {}		    //For visiting an add node
		virtual void opNode(Op* op) {}	//For visiting a leaf node
		virtual void execute() {}		    //Prints all visited nodes
};

class PrintVisitor : public Visitor {
	private:
		std::string output;

	public:
		PrintVisitor();

		void rootNode() {}		//For visiting a root node (do nothing)
		void sqrNode() {output.append("^2")};		    //For visiting a square node
		void multNode() {output.append("*")};		  //For visiting a multiple node
		void subNode() {output.append("-")};		    //For visiting a subtraction node
		void addNode(){output.append("-")};		    //For visiting an add node
		void opNode(Op* op){
			std::ostringstream strs;
			strs << op->evaluate();
			std::string str = strs.str();
			output.append(str)};	//For visiting a leaf node
		void execute(){
			for (unsigned int i=0; i < output.size(); i++){
				cout << output[i] << ", "
			}
		};		    //Prints all visited nodes
};

#endif
