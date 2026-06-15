// #include <iostream>
// using namespace std;
// int main(){
//     // Bitwise operator: operator functioning on bits of a number.
//     // it includes -- bitwise and (&),bitwise or (|),bitwise xor(^).
//     int a = 4,b=8 ;
//     cout << (a&b) ;
//     cout << (a|b) ;
//     cout << (a^b) ;
//     return 0;
// }


// #include <iostream>
// using namespace std;
// int main(){
//     // bitwise right shift (>>),bitwise left shift (<<).
//     int n = 4;
//     int i = 1;
//     cout << (n<<i);
//     cout << (n>>i);

//     return 0;
// }

// #include <iostream>
// using namespace std;
// int main(){
//     cout << (6&10);
//     cout << (6|10);
//     cout << (6^10);
//     cout << (10<<2);
//     cout << (10>>1);
//     return 0;
// }

// Precedence order
// !,+,-(uranary operator)  right to left
// *,/,%   left to right
// +,-  left to right
// <,>,<=,>=  left to right
// ==,!=   left to right
// &&   left to right
// ||   left to right
// = (assingment operator )

// Scope of variable - Local-aceessable in the block of code,Global acessible everywhere. 

// # include <iostream>
// using namespace std;
// int main(){
//     int n = 64;
//     if((n&(n-1))==0){
//         cout << "power of 2";
//     }else{
//         cout << "not a power of 2";
//     }
//     return 0;
// }

#include <iostream>
using namespace std;
int main(){
    int num= 125;
    int newNum=0;
    int pro=1;
    for (int i=num; i>0;i=i/10){
        newNum=newNum*pro;
        newNum+=(i%10);
        pro=pro*10;
    }
    cout << newNum;
    return 0;
}