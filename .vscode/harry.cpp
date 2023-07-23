#include <iostream>
#include <fstream>
using namespace std;

int main(){
    ofstream heyout("sample.txt");
    cout<<"Enter your name :";
    string name;
    cin>> name;

    heyout<<"My name is " + name;

    return 0;
}