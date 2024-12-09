#include <iostream>
#include <fstream>
#include <string>

using namespace std;

int main (){
    /* writing */
    ofstream outfile ("output.txt");
    outfile << "writing to a file" <<endl;
    outfile.close();

    // Reading from a file
    ifstream infile ("output.txt");
    string content;
    while (std::getline( infile, content))
    {
        cout << content << endl;

    }
    infile.close(); //close the file after reading the content
    return 0;
}