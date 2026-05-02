#include<iostream>
#include<fstream>
#include<string>

using namespace std;

//Question 2

int main(){

    ifstream File;
    int count = 0;
    File.open("secret.txt");

    while(!File.eof()){
        char ch = File.get();
        if(ch >= 'A' && ch <= 'Z'){
            count++;
        }
    }
    File.close();


    cout << count << endl;

}
