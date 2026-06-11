// Function :-
/* syntax 
returType "function name"(){
}
*/
// #include <iostream>
// using namespace std;
// void printHello ();
// int main (){
// // Function call
//     printHello();
//     return 0;
// }

// // Function defination
// void printHello (){
//     cout << "hello "; 
// }

// # include <iostream>
// using namespace std;
// int sum (int a,int b);
// int main(){
//     cout << sum(2,3);
//     return 0;
// }
// int sum(int a ,int b){
//     int Sum = a+b ;
//     return Sum ;
// }
// # include <iostream>
// using namespace std;
// int Sum( int n);
// int main (){
//     cout << Sum(8);
//     cout << Sum(10);
//     return 0;
// }
// int Sum( int n){
//     int sum=0;
//     for(int i=1;i<=n;i++){
//         sum+=i;
//     }
//     return sum;
// }
// # include <iostream>
// using namespace std;
// int factorial (int n);
// int main(){
//     cout << factorial(5);
//     return 0;
// }
// int factorial(int n){
//     int fact=1;
//     for(int i=1;i<=n;i++){
//         fact*=i;
//     }
//     return fact;
// }
//  #include <iostream>
//  using namespace std;
//  int sumOfDigit(int num);
//  int main(){
//     cout << sumOfDigit(105);
//     return 0;
//  }
// int sumOfDigit(int num){
//     int sum=0;
//     while(num>0){
//         sum+=num%10;
//         num=num/10;
//     }
//     return sum;
// }

// # include <iostream>
// using namespace std;
// int factorial(int n);
// int binomialcoff(int n,int r);
// int main(){
//     cout << binomialcoff(8,2);
//     return 0;
// }
// int factorial(int n){
//     int fact=1;
//     for(int i=1;i<=n;i++){
//         fact*=i;
//     }
//     return fact;
// }
// int binomialcoff(int n,int r){
//     int nfact=factorial(n);
//     int rfact=factorial(r);
//     int ncrfact=factorial(n-r);
//     return nfact/(rfact * ncrfact);

// }

//  # include <iostream>
//  using namespace std;
//  bool checkprime(int n){
//     for(int i=2;i*i<n;i++){
//         if (n%2==0){
//             return false;
//         }
//     }
//     return true;
//  }
//  int main(){
//     int num = 17;
//     cout << checkprime(num);
//     return 0;
//  }

// #include <iostream>
// using namespace std;
//  bool checkprime(int n){
//     for(int i=2;i*i<=n;i++){
//         if (n%i==0){
//             return false;
//         }
//     }
//     return true;
//  }
//  void printprime(int n){
//     for(int i=2;i<=n;i++)
//     {if (checkprime(i)==1){
//         cout << i ;
//     }}

//  }
// int main(){
// printprime(7);
// return 0;
// }

# include <iostream>
using namespace std;
int fibonaci(int n);
int main(){
    int n= 5;
    for(int i=0;i<n;i++){
        cout << fibonaci(i);
    }
}
int fibonaci(int n){
    if(n==0){
        return 0;
    }else if(n==1){
        return 1;
    }
    return fibonaci(n-1)+fibonaci(n-2);
}