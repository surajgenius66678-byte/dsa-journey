#include<iostream>
#include<string>
#include<algorithm>
using namespace std;
string func(string line){
    int n= line.length();
    string ans="";
    reverse(line.begin(),line.end());
    for(int i=0;i<n;i++){
        string str="";
        while(i<n && line[i] != ' '){
            str+=line[i];
            i++;
        }
        reverse(str.begin(),str.end());
        if(str.length()>0)
        ans+= " "+str;
    }
    return ans.substr(1);
}
int main(){
    string line="hello i am suraj";
    cout << func(line);
    return 0;
}