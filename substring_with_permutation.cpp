#include<iostream>
#include<string>
using namespace std;
bool freqSame(int freq1[],int freq2[]){
    for(int i=0;i<26;i++){
        if(freq1[i]!=freq2[i]){
            return false;
        }
    }
    return true;
}
bool search_occurence(string s1,string s2){
    int freq[26]={0};
    int windfreq[26]={0};
    for(int i=0;i<s2.length();i++){
        freq[s2[i]-'a']++;
        windfreq[s1[i]-'a']++;

    }

    if(freqSame(freq,windfreq)){
            return true;
        }
    int i=0,j=s2.length();
    while(j<s1.length()){
        windfreq[s1[i]-'a']--;
        windfreq[s1[j]-'a']++;
        i++;
        j++;


        if(freqSame(freq,windfreq)){
            return true;
        }}
    
    return false;
}
int main(){
    string s1={"eidbaoo"};
    string s2={"ab"};
    cout << s2.length();
    cout << search_occurence(s1,s2);
    return 0;
}