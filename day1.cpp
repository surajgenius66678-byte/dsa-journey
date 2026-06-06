// c++ is a case sensitive language.

// writing an output the first Program


// // BOILER PLATE CODE AND OUTPUT STATEMENT
// #include <iostream>  /*preprocessor directive*/
// using namespace std;
// int main(){
//     cout << "Suraj \nKumar"<<"\n";/*\n is used for next line */
//     return 0;
// }

// // Variable- containers to store Data.
// #include<iostream>
// using namespace std;
// int main(){
//     // Data Type- it tells which type of Data we need to store.
//     // example-int(4),Char(1),float(4),bool(1),double(8).[1Byte=8bits]
//     int age= 18;
//     char grade='A';
//     float PI=3.14f;
//     bool isSafe=false;
//     double price=100.99;
//     cout<< sizeof(age)<<age<<"\n";
//     cout<< sizeof(grade)<<grade<<"\n";
//     cout<< sizeof(PI)<<PI<<"\n";
//     cout<< sizeof(isSafe)<<isSafe<<"\n";
//     cout<< sizeof(price)<<price<<"\n";
//     return 0;
// }

// // Typecast-coversion from 1 to another datatype.
// // type conversion(implicit)->small space to big spce it is automatically done by compiler
// #include<iostream>
// using namespace std;
// int main(){
//     char grade='A';
//     int value = grade;
//     cout<<value<<"\n";
//     return 0;
// }

// // type casting(explicit)-> vig to small done by programmer.
// # include<iostream>
// using namespace std;
// int main(){
//         double price=100.99;
//         int newPrice =price;
//         cout<<sizeof(newPrice)<<"\n"<<newPrice;
//     return 0;
// }

// // Taking input in c using "cin"
// # include<iostream>
// using namespace std;
// int main(){
//     int age;
//     cout<< "Enter the age\n";
//     cin >>age;
//     cout<<"your age is = "<< age<<"\n";
//     return 0;
// }

// // operator in c++  ->Arithmetic(+,-,*,/(no decimal part),%,)
// //  -> Relational Operator--(<,>,<=,>=,==,!=)
// //   ->Logical Operator( ||(logical OR),&&(logical and),!(logical not))
// # include<iostream>
// using namespace std;
// int main(){
//     int a=5,b=10;
//     cout<<" sum="<<a+b<<"\n";
//     cout<<"difference="<<a-b<<"\n";
//     cout << (a<b)<< "\n";
//     cout << !true;
//     cout<< true && true<<"\n";
//     cout<< false || true<<"\n";
//     return 0;
// }

// Unary operator-> 1)Increment=>1)pre increment++i,2)post increment -i++  2)Decrement =>1)pre decrement --i,2)post decrement i--



///// Question - cal sum of 2 num
// #include <iostream>
// using namespace std;
// int main(){
//     int num_1;
//     int num_2;
//     cout<< "Enter first number :";
//     cin>>num_1;
//     cout<<"Enter second number :";
//     cin>>num_2;
//     cout << "Sum ="<<num_1+num_2<<"\n";
//     return 0;
// }

// question 2-create an cal which can add ,sub,multi,divide,remainder.
#include <iostream>
using namespace std;
int main(){
    int num_1;
    int num_2;
    cout<< "Enter first number :";
    cin>>num_1;
    cout<<"Enter second number :";
    cin>>num_2;
    cout << "Sum ="<<num_1+num_2<<"\n";
    cout << "Subtract ="<<num_1-num_2<<"\n";
    cout << "Product ="<<num_1*num_2<<"\n";
    cout << "Division ="<<num_1/(float)num_2<<"\n";
    cout << "Remainder ="<<num_1%num_2<<"\n";
    return 0;
}