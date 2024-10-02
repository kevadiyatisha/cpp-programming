#include <iostream>
#include <fstream>
using namespace std;
int main(int argc, char const *argv[])
{
    ofstream onFile;
    onFile.open("C:\\Users\\TISHA KEVADIYA\\desktop\\myfile.txt");
    onFile<<"Thank you so much";
    cout<<"Data has been return in the file";
    onFile.close();

    return 0;
}