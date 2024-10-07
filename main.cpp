#include<iostream>
#include<fstream>
#include<string>

using namespace std;

int main()
{
    fstream myFile;
    // open() will take parameters the first one is the name our file and
    // the second one is the mode that file is going to happen (read,write...)
    myFile.open("file.txt",ios::out); // ios::out is for the write mode

    // check if we successfully open our file
    if(myFile.is_open()) {
        // while writing to the console we use cout <<
        // here instead of that we use the name our file
        myFile << "Hello World!\n";
        myFile.close();
    }

    myFile.open("file.txt",ios::app); // append the file

    if(myFile.is_open()) {
        myFile << "World \n";
        myFile.close();
    }

    myFile.open("file.txt",ios::in); // read the file

    if(myFile.is_open()) {
        string line;
        // getLine() gets two parameters it reads from the file and stores the line into line variable
        while(getline(myFile,line)) {
            cout << line << "\n";
        }
        myFile.close();
    }

    return 0;
}
