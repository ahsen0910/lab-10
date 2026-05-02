#include<iostream>
#include<fstream>
#include<string>

using namespace std;

//Question 4

int main(){

    fstream File("draft.txt",ios::in | ios::out);

    string Word;
    streampos Pos;

    while(File >> Word){
        if (Word == "teh"){
            Pos = File.tellg();
            Pos = Pos -3;

            File.seekp(Pos);

            File << "the";
            File.close();
            return 0;
        }
    }
}
