#include<iostream>
#include<fstream>
#include<string>

using namespace std;

string split(string str){
    string khen = "";
    string t = "";
    int j = 0;
    string a[2];

    for(int i=0; i<(int)str.size(); i++){
        if(str[i] != 32){
            t+=str[i];
        }
        else{
            a[j]=t;
            j++;
            t="";
        }
    }
    a[j]=t;
    if(stoi(a[1])>7){
        khen+=str;
    }
    return khen;
}
 
int main() {

    string separator = " ";
    ifstream MyReadFile("D:/C++/Baitap/data1.txt");
    string myText;
    string khen_out;
    int num = 0;
    while(getline(MyReadFile,myText)){
        string khen = split(myText);
        khen_out+= khen;
        if(khen != ""){
        khen_out+= "\n";
        }
    }
    MyReadFile.close();
    cout<<khen_out;
    ofstream f_out("D:/C++/Baitap/khen.txt");
    f_out<<khen_out;
    return 0; 

}
