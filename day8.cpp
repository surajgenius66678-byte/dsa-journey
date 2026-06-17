// // Vectors
// #include <iostream>
// #include<vector> // particular header file of vector
// using namespace std;
// int main(){
// /*syntax
// vector<int> vec; intially its size is 0
// vector<int>vec={1,2,3};,size is 3 intially.
// vector<int>vec(3,0);size is 3 and every index has valu 0
// */
// vector <int>vec={1,2,3};
// vector <char>vect={'a','A','t','T','y','U'};
// cout << vec[0] << "\n";
// // generally we use for each loop
// for(int i:vec){
//     cout << i<<endl;
// }
// for(char i:vect){
//     cout << i<<endl;
// }
//     return 0;
// }

/*
Vector Function
1)Size- calculate size of vector
2)push_back- add value at the end of a vector
3)pop_back-delete value at the end of a vector
4)Front-tells the valuse present at first
5)back-tells the valuse present at last
6)at-tells the valuse present at any position 
*/
// #include<iostream>
// #include<vector>
// using namespace std;
// int main(){
//     vector <char>vect={'a','A','t','T','y','U'};
//     cout << "Size ="<< vect.size();
//     vect.pop_back();
//     vect.push_back('z');
//     cout << "Size ="<< vect.size();

//     for(char i:vect){
//         cout << i<<"\n";    }
//         cout << vect.front();
//         cout << vect.back();
//         cout << vect.at(3);
//         cout << vect.capacity();
        
//     return 0;
// }

# include <iostream>
#include <vector>
using namespace std;
int main(){
    vector <int> vec = {4,1,2,1,2 };
    int a=0;
    for(int i:vec){
        a=a^i;
    }
    cout << a;
    return 0; 
}