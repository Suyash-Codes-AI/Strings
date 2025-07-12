#include<iostream>
#include<string>

using namespace std;

int main(){
    string str1 = "KEYBOARD";
    for(int i =0; i<str1.length(); i++){
        cout << str1[i] << " ";

    }
    cout<<endl;


    return 0;
}




2nd method 

#include<iostream>
#include<string>
#include<algorithm>

using namespace std;

int main(){
    string str = "DTU IS A GOOD COLLEGE";

    reverse(str.begin(),str.end());
    cout<<str << endl;

    return 0;
}
