#include<iostream>
#include<string>
using namespace std;
void removeOccurence(string &str,string part){
    
    if(part==""){return;}
    while(str.length()>0 && str.find(part)<str.length()){
        str.erase(str.find(part),part.length());
    }
}
int main(){
    string str= "surpraj";
    string part="rp";
    removeOccurence(str,part);
    cout<< str;
    return 0;
}