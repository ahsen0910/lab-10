#include<iostream>
#include<fstream>
#include<string>

using namespace std;

int main(){

    string Name;
    string Email;

    getline(cin, Name);
    getline(cin, Email);


    ofstream File;
    File.open("signup.txt", ios::app);

    File << Name << endl;
    File << Email << endl;

    File.close();

}
