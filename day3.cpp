// #include <iostream>
// using namespace std ;
// int main(){
//     for(int i=0;i<4;i++){
//         for(int j=0;j<4;j++){
//             cout << j+1 ;
//         }
//         cout << "\n";
//     }
//     return 0;
// }
// #include <iostream>
// using namespace std ;
// int main(){
//     for(int i=0;i<4;i++){
//         char ch = 'A';
//         for(int j=0;j<4;j++){
//             cout << ch ;
//             ch++;
//         }
//         cout << "\n";
//     }
//     return 0;
// }

// #include <iostream>
// using namespace std ;
// int main(){
//     int num =1;
//     for(int i=0;i<3;i++){
//         for(int j=0;j<3;j++){
//             cout << num ;
//             num++;
//         }
//         cout << "\n";
//     }
//     return 0;
// }

// #include <iostream>
// using namespace std ;
// int main(){
//     char ch = 'A';
//     for(int i=0;i<4;i++){
//         for(int j=0;j<4;j++){
//             cout << ch ;
//             ch++;
//         }
//         cout << "\n";
//     }
//     return 0;
// }

// # include <iostream>
// using namespace std;
// int main(){
//     int n=4;
//     for(int i=1;i<n+1;i++){
//         for(int j=0;j<i;j++){
//             cout<< "*";
//         }
//         cout << "\n";
//     }
//     return 0;
// }

// # include <iostream>
// using namespace std;
// int main(){
//     int n=4;
//     for(int i=1;i<n+1;i++){
//         for(int j=0;j<i;j++){
//             cout<< i;
//         }
//         cout << "\n";
//     }
//     return 0;
// }
// # include <iostream>
// using namespace std;
// int main(){
//     int n=4;
//     char ch ='A';
//     for(int i=1;i<n+1;i++){
//         for(int j=0;j<i;j++){
//             cout<< ch;
//         }
//         ch++;
//         cout << "\n";
//     }
//     return 0;
// }


// #include <iostream>
// using namespace std;
// int main(){
//     int n=4;
//     for (int i=0;i<n;i++){
//         int a =1;
//         for(int j=0;j<i+1;j++){
//             cout << a;
//             a++;
//         }
//          cout << "\n";
//     }
//     return 0;
// }


// #include <iostream>
// using namespace std;
// int main(){
//     int n=4;
//     for (int i=0;i<n;i++){
//         int a =i+1;
//         for(int j=0;j<i+1;j++){
//             cout << a;
//             a--;
//         }
//          cout << "\n";
//     }
//     return 0;
// }


// #include <iostream>
// using namespace std;
// int main(){
//     int n=4;
//     int a =1;
//     for (int i=0;i<n;i++){
//         for(int j=0;j<i+1;j++){
//             cout << a;
//             a++;
//         }
//          cout << "\n";
//     }
//     return 0;
// }

// #include <iostream>
// using namespace std;
// int main(){
//     int n=4;
//     char a ='A';
//     for (int i=0;i<n;i++){
//         for(int j=0;j<i+1;j++){
//             cout << a;
//             a++;
//         }
//          cout << "\n";
//     }
//     return 0;
// }

// #include <iostream>
// using namespace std;
// int main(){
//     int n=4;
//     for (int i=0;i<n;i++){
//         char a =65+i;
//         for(int j=0;j<i+1;j++){
//             cout << a;
//             a--;
//         }
//          cout << "\n";
//     }
    
//     return 0;
// }

// #include <iostream>
// using namespace std;
// int main(){
//     for(int i=0;i<4;i++){
//         for(int j=i;j>0;j--){
//             cout << " ";
//         }
//         for(int k=0;k< 4-i;k++){
//             cout << i+1 ;
//         }
//         cout << "\n";    
//     }
//     return 0;
// }

// #include <iostream>
// using namespace std;
// int main(){
//     for(int i=0;i<4;i++){
//         for(int j=i;j>0;j--){
//             cout << " ";
//         }
//         char a =65+i;
//         for(int k=0;k< 4-i;k++){
//             cout << a ;
//         }
//         cout << "\n";    
//     }
//     return 0;
// }


// #include <iostream>
// using namespace std;
// int main(){
//     for(int i=0;i<4;i++){
//         for(int j=0;j<4-i-1;j++){
//             cout << " ";
//         }
//         for(int k=0;k<i+1;k++){
//             cout << k+1 ;
//         }
//         for(int l=i;l>0;l--){
//             cout << l ;
//         }
//         cout << "\n";
//     }
//     return 0;
// }

// #include <iostream>
// using namespace std;
// int main(){
//     for (int i=0;i<4;i++ ){
//         for(int j=0;j<4-i-1;j++){
//             cout << " ";
//         }
//         cout << "*";
//         if(i!=0){
//             for(int k = 0;k< 2*i-1;k++){
//                 cout << " ";
//             }
//             cout << "*";
//         }
//         cout <<"\n";
//     } 
//     for(int j=0;j<3;j++){
//         for(int a=0;a<j+1;a++){
//             cout << " ";
//         }
//         cout << "*";
//        if(j!=2){
//         for(int k=0;k< 2*(4-j)-5;k++){
//             cout << " ";
//         }
//         cout << "*";
//        } 
//        cout << "\n";
//     }
//     return 0;
// }


#include <iostream>
using namespace std;
int main(){
    int n=4;
    for(int i=0;i<n;i++){
        for(int j=0;j<i+1;j++){
            cout << "* ";
        }
        for(int k=0;k<n-i-1;k++){
            cout << "  ";
        }
        for(int l=0;l<n-i-1;l++){
            cout<< "  ";
        }
        for(int m=0;m<i+1;m++){
            cout <<"* ";
        }
        cout <<"\n";
    }

    for(int i=0;i<n;i++){
        for(int j=0;j<n-i;j++){
            cout << "* ";
        }
        for(int k=0;k<i;k++){
            cout << "  ";
        }
        for(int k=0;k<i;k++){
            cout << "  ";
        }
        for(int j=0;j<n-i;j++){
            cout << "* ";
        }
        cout <<"\n";
    }
    return 0;
}
