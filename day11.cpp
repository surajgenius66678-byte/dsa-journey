// #include <iostream>
// using namespace std;

// #include <iostream>
// using namespace std;

// double mypow(double num, int pow) {
//     if (pow == 0)
//         return 1.0;

//     if (num == 0) {
//         if (pow < 0) {
//             cout << "Undefined!" << endl;
//             return -1;
//         }
//         return 0.0;
//     }

//     long long p = pow;  // handles INT_MIN

//     if (p < 0) {
//         num = 1.0 / num;
//         p = -p;
//     }

//     double ans = 1.0;

//     while (p > 0) {
//         if (p % 2 == 1)
//             ans *= num;

//         num *= num;
//         p /= 2;
//     }

//     return ans;
// }

// int main() {
//     cout << mypow(3, 5) << endl;     // 243
//     cout << mypow(2, -3) << endl;    // 0.125
//     cout << mypow(-2, 3) << endl;    // -8
//     cout << mypow(-2, 4) << endl;    // 16
//     cout << mypow(5, 0) << endl;     // 1
//     cout << mypow(0, 5) << endl;     // 0

//     return 0;
// }


// Buy And Sell Stock 
#include<iostream>
#include<vector>
using namespace std;
int buy_and_sell (vector<int>vec){
  int max_profit = 0;
  int sell = vec[0];
  int best_buy=vec[0];
  for(int i=1;i<vec.size();i++){
    int profit = vec[i]-best_buy;
    if(profit > max_profit){
        max_profit= profit;
        sell = vec[i];
    }
    best_buy=min(best_buy,vec[i]);
  }
  cout << best_buy << "\n" << sell << endl ;
  return max_profit;
}
int main(){
    vector <int> vec = {7,1,5,3,6,4};
    cout << buy_and_sell(vec);
    return 0;
}