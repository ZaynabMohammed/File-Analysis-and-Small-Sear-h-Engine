#include<iostream>
#include<fstream>
#include<cstring>
#include<stdio.h>
#include"inord_list.h"
ifstream document_file;
using namespace std;

int main(int argc,char*argv[])
{
   if (argc!=3)
      {
        cout<<"Incorrect Number of Arguments";
        return 0;
      }
     ifstream command_file;
     command_file.open("commands.txt");

   if (!command_file.is_open())
       {
          cout<<"file not found";
          return 0;
       }
      if (!document_file.is_open())
      {
          cout<<"file not found";
          return 0;
      }
////////////////////////commands///////////////////////////////////
   string comm_word_count ("wordCount");





///////////////////////////////////////////////////////////////////
       inord_list my_list;
       char x[5]=".txt";



   while(!(command_file.eof()))
     {
         string command_value;
         getline(command_file,command_value);
         if((command_value)==(comm_word_count))
          {
          cout<<"wordCount exists in the CommandsFile"<<endl;
          strcat(argv[1],x);
          my_list.word_count(argv[1]);

          }






     }


    return 0;
}
