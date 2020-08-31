#include "inord_list.h"
#include<cstring>

extern ifstream document_file;

inord_list ::inord_list ()
{
head = NULL;
current = NULL;

}
bool inord_list::insert( const listelemtype & e)
{
   link addednode;
   link pred;
   addednode= new node;   //step1

if(addednode==NULL)
    {
      return false;
    }
 else {
        addednode->item=e;   //step2
      }
if (head==NULL ||e<= head->item)
    {
	addednode->next=head;
	head=addednode;
	return true;
	}
 else
   {
     pred=head;
    while (pred->next != NULL && pred-> next->item < e)
     {
         pred=pred->next;
     }
   }
 addednode-> next = pred-> next;
 pred -> next = addednode;
 return true;
 }

void inord_list::word_count(char file_name[])
{
   document_file.open("file_name");










}












