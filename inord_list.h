#include <iostream>
#include <string.h>
using namespace std;
#ifndef INORD_LIST_H_INCLUDED
#define INORD_LIST_H_INCLUDED

typedef string ListElemType;
class inord_list
{
    public:
           inord_list();
           bool insert(const ListElemType &e);
           bool first(ListElemType &e);
           bool next(ListElemType &e);
           void word_count(char file_name[]);



       private:
              struct node;
	          typedef node* link;
	          struct node
	          {
		      ListElemType item ;
              link next;
	          };
	link head;
	link current;


};


#endif // INORD_LIST_H_INCLUDED

