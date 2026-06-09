// //  Conditional statements
// // 1)-if-else
// #include <iostream>
// using namespace std;
// int main (){
//     int n=4;
//     if(n>0){
//         cout << ("positive");
//     }else if (n<0){
//         cout<<"negative";
//     }
//     else{
//         cout<< "zero";
//     }
// return 0;
// }

// // check voting  eligibility
// #include <iostream>
// using namespace std;
// int main (){
//     int age = 19;
//     if(age<18){
//         cout<<"not eligible to vote";
//     }else{
//         cout<<" eligible to vote";
//     }
// return 0;
// }


// // check odd,even
// #include <iostream>
// using namespace std;
// int main (){
//     int num = 19;
//     if(num %2==0){
//         cout<<"num is even";
//     }else{
//         cout<<" num is odd";
//     }
// return 0;
// }


// Grading system-;
// # include <iostream>
// using namespace std;
// int main(){
//     int marks ;
//     cout << "enter marks";
//     cin >> marks ;
//     if (marks >=90){
//         cout << "grade A";

//     }
//     else if(marks>=80){
//         cout << "Grade B";
//     }else{
//         cout<< "Grade C";
//     }
//     return 0;
// }


// // vheck if char is upper or lower
//  # include <iostream>
// using namespace std;
// int main(){
//     char ch ;
//     cout << "enter a character";
//     cin >> ch ;
//     if(ch <='z'&& ch >= 'a'){
//         cout<< "Lowercase";
//     }else{
//         cout<< "Uppercase";
//     }
//     return 0;
// }

// //  TERNARY OPERATOR:- positive or negative
// # include <iostream>
// using namespace std;
// int main(){
//     cout << (n>0?"positive":"negative");
//     return 0;
// }

// //  LOOPS:-while,for
// # include <iostream>
// using namespace std;
// int main(){
//     int i=1;
//     while(i<6){
//         cout << i << " " ;
//         i++;
//     }
//     return 0;
// }

// # include <iostream>
// using namespace std;
// int main(){
//     int sum =0;
//     int n;
//     cout << "enter a number ";
//     cin >> n;
//     for(int i=0;i<=n;i++){
//         sum += i;
//     }
//     cout << "sum ="<< sum;
//     return 0;
// }

// # include <iostream>
// using namespace std;
// int main(){
//     int sum=0,i=0,n;
//     cout << "enter a number ";
//     cin >> n;
//     while(i<n+1){
//         sum +=i;
//         i++;
//     }
//     cout << "sum ="<< sum;
//     return 0;
// }


// // Break:- this keyword is used to exit a loop
// # include <iostream>
// using namespace std;
// int main(){
//     int n =50;
//     int sum=0;
//     for (int i=0;i<n;i++){
//         if(i%2 !=0){
//             sum +=i;
//         }
//     }
//     cout << sum;
//     return 0;
// }


// //  Check if a number is a prime or not
// # include <iostream>

// using namespace std;
// int main (){
//     bool isPrime = true;
//     int num = 18 ;
//     for(int i=2; i*i<num;i++){
//         if (num%i ==0){
//             isPrime =false;
//             break;
//         }
//     }
//     if (isPrime==true){
//         cout << "number is prime";
//     }else{
//         cout<< "num is not prime";
//     }
//     return 0;
// }


//  #include <iostream>
//  using namespace std;
//  int main(){
//     for(int i =0 ;i<5;i++){
//         for(int j =0 ; j<5;j++){
//             cout << "*";
//         }
//         cout << "\n";
//     }
//     return 0;
//  }
// # include <iostream>
// using namespace std;
// int main (){
//     int sum =0;
//     int num ;
//     cout << "enter a number" ;
//     cin >> num ;
//     for(int i=0; i<=num;i++){
//         if (i%3 ==0){
//             sum +=i;
//         }
//     }
//     cout << sum;
   
//     return 0;
// }

# include <iostream>
using namespace std;
int main (){
int num = 5;
int produc =1;
for(int i = num ;i>0;i--){
    produc =i*produc;
}
cout << produc;
return 0;
}