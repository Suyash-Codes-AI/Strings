#include<iostream>
#include<string>

using namespace std;

int main(){
    string str1 = "KEYBOARD";
    string str2 = "laptop";

    string str3 = str1 + str2; //cont`atenation of str1 and str2
    cout<<str3<<endl;

    cout<<(str1 == str2) << endl; //comparison of str1 and str2)

    cout<< str2.length()<<endl; //length of str2

    string str;

    getline(cin,str); //input a string from the user
    cout <<"output = "<< str << endl; //output the value of str




    return 0;
}
