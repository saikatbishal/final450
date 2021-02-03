#include <iostream>
#include <fstream>
#include <string>
using namespace std;
int main(){
    fstream newf;
    newf.open("file.txt",ios::);
    using file object;
    if(newf.is_open())  
    {
        newf<<"Tutorials point \n";
        newf.close(); 
    }
    newf.open("file.txt",ios::in);
    if (newf.is_open()){ 
        string tp;
        while(getline(newf, tp)){ string.
            cout << tp << "\n"; 
        }
    newf.close(); 
    }
}