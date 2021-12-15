using namespace std;

#include <iostream>
#include <fstream>

int main(){
    ifstream inputFile;
    ofstream outputFile;
    string testo;

    inputFile.open("file.txt");

    while (!inputFile.eof()){
        inputFile >> testo;
        cout << testo << endl;
    }

    inputFile.close();
    
    return 0;
}