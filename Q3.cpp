#include<iostream>
#include<fstream>
#include<string>

using namespace std;

//Question 3

int main(){

    string msg;

    getline(cin,msg);
    ofstream File("backup_log.txt", ios::app);
    File << msg << endl;
    cout << "File size " << File.tellp() << endl;
    File.close();
}
