#include <iostream>
#include "md5.h"
#include <bits/stdc++.h>
#include <string>
using namespace std;

// This 
void writeToFile(string filename, string data)
{
    ofstream file;
    file.open(filename, ios::out);
    file << data;
    file.close();
}
//
char calculateHash(string filename)
{
    ifstream file;
    file.open(filename,ios::in );
    string input;
    string hash;
    
    while (!file.eof())
	{
		file >> skipws>>input;	
		hash.append(input);	
	}
    file.close();
    cout << "The hash of file" + filename << endl;
    cout << md5(hash);
}
//
int main()
{
    writeToFile("hashing_file", "man");
    calculateHash("hashing_file");
}