#include<bits/stdc++.h>
#include "md5.h"
using namespace std ;
class Hash
{
    public:
      
  void calculateHash()
 {  fstream file; //object of fstream class
   char thing[1000];
    
   //opening file "sample.txt" in out(write) mode
   file.open("sample.txt",ios::out);
    
   if(!file)
   {
       cout<<"Error in creating file!!!"<<endl;
       
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
       
   }   
    
   //read untill end of file is not found.
   string ch; //to read single character
   string str;
    
   while(!file.eof())
   {
       file>>ch; //read single character from file
       str.append(ch);
       
   }
   cout<<str<<"chck 2 "<<endl;
   string st=md5(str);
    
   file.close(); //close file


  fstream fi; //object of fstream class
   
    
   //opening file "sample.txt" in out(write) mode
   fi.open("eii.txt",ios::out | ios::app);
    
   if(!fi)
   {
       cout<<"Error in creating file!!!"<<endl;
       
   }
   cout<<"File created successfully."<<endl;
   //write text into file
   fi<< st;
   //closing the file
   fi.close();

 }
     
 };
 int main()
 {
     Hash o1;
     o1.calculateHash();
     return 0;
 }
