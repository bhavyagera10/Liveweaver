#include <iostream>
#include <fstream>
#include "md5.h"
 
using namespace std;
 
int main()
{
   fstream file; //object of fstream class
   char thing[1000];
    
   //opening file "sample.txt" in out(write) mode
   file.open("sample.txt",ios::out);
    
   if(!file)
   {
       cout<<"Error in creating file!!!"<<endl;
       return 0;
   }
    
   cout<<"File created successfully."<<endl;
   //write text into file
   file<<"ABCD.";
   //closing the file
   file.close();
    
   //again open file in read mode
   file.open("sample.txt",ios::in);
    
   if(!file)
   {
       cout<<"Error in opening file!!!"<<endl;
       return 0;
   }   
    
   //read untill end of file is not found.
   char ch; //to read single character
   
    
   while(!file.eof())
   {
       file>>ch; //read single character from file
       cout<<ch <<thing;
   }
    
   file.close(); //close file
fstream f;
   f.open("ei.txt",ios::out);
   f<<md5(thing);
  f.close(); 
   return 0;
}
