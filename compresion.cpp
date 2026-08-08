#include<iostream>
#include<vector>
#include<string>
using namespace std;
int compression(vector<char>&character){
    int n=character.size();
    int idx=0;
    int count =0;
    for(int i=0;i<n;){
        char  ch=character[i];
        while(i<n && character[i]==ch){
            count++;
            i++;
        }
        if(count==1){character[idx++]=ch;}
        else{
            character[idx++]=ch;
            string st=to_string(count);
            for( char v:st){
                character[idx++]=v;
            }
        }
    }
    character.resize(idx);
    return idx;
}
int main(){
    vector<char>character={'a','a','b','b','c','c','c'};
    cout <<compression(character);

    return 0;
}