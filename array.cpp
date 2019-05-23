#include<bits/stdc++.h>
#include "md5.h"
using namespace std;
void calculateHash(string arr, string text)
   {  fstream file; //object of fstream class
   char thing[1000];
    
   //opening file "sample.txt" in out(write) mode
   file.open(arr,ios::out);
    
   if(!file)
   {
       cout<<"Error in creating file!!!"<<endl;
       
   }
   
   cout<<"File created successfully."<<endl;
   //write text into file
   file <<text;
   //closing the file
   file.close();
    
   //again open file in read mode
   file.open(arr,ios::in);
    
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
   
   string st=md5(str);
    cout<<st<<"chck 2 "<<endl;
   file.close(); //close file

  
 }


int main()
{   
    
    int n,i;
    cout<<"ENTER NUMBER OF TEXT FILES"<<endl;
    cin>>n;
    string arr[n],text;
    for(i=0;i<n;i++)
    {  cout<<"ENTER NAME OF FILE"<<i+1;
       cin>>arr[i];  
        cout<<"ENTER TEXT"<<endl;
       cin>> text;
       calculateHash(arr[i],text);
    }
    

}
