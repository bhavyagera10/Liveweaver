#include <iostream>
#include <bits/stdc++.h>
#include <fstream>
#include "md5.h"
using namespace std;

 void apend (string text)
 { char ch;
 char bg[1000];
   fstream f;
   f.open("ei.txt", ios::out);
   while(!f.eof())
   {
       f>>ch; //read single character from file
       cout<<ch <<bg;
   }
    
   f.close(); 
   fstream fo;
   fo.open("eibg.txt",ios::out);
   if(!fo)
   fo<< bg;
  fo.close(); 
 }
  
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
 int main()
 { 
   calculateHash();
   
   return 0;
 }