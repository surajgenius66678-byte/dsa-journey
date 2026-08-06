#include<iostream>
#include<vector>
using namespace std;
int main(){
    vector<int> vec={1,2,3,4,5,6};
    vector <int> :: iterator i;
    for(i=vec.begin();i!=vec.end();i++){
        cout << *(i) << "  ";
    }

    vector<int> :: reverse_iterator rit;
    for(rit=vec.rbegin();rit!=vec.rend();rit++){
        cout<< *(rit)<< " ";
    }


    for(    vector<int> :: reverse_iterator rit=vec.rbegin();rit!=vec.rend();rit++){
        cout<< *(rit)<< " ";
    }


    for(    auto rit=vec.rbegin();rit!=vec.rend();rit++){
        cout<< *(rit)<< " ";
    }
    return 0;
    return 0;

}