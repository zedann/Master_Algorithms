#include<bits/stdc++.h>
using namespace std;
#define el '\n';
// void print_triangle(int levels)
// {
//     if(levels == 0) return;
//     for(int i = 0 ; i < levels ; i++)
//         cout << "* ";
//     cout << '\n';
//     print_triangle(levels - 1);
// }
// void fun3n(int n)
// {
//     cout << n << " ";
//     if(n == 1) return;
//     (n&1) ? fun3n(3*n + 1) : fun3n (n/2);
// }
///---------------------------------------------------
// int length_3n_plus_1(int n)
// {

//     if(n == 1) 
//         return 1;
//     return (n&1) ? 1+length_3n_plus_1(3*n + 1) : 1+length_3n_plus_1 (n/2);
// }
// int my_pow(int n , int p = 2)
// {
//     if(p == 0) return 1;
//     return my_pow(n,p-1) * n;
// }
// int arr_max(int arr[] , int len)
// {
//     if(len == 1)
//         return arr[0];

//     int sub_result = arr_max(arr, len - 1);
//     return max(sub_result , arr[len-1]);
//     // 1 8 2 10 3
// }
// int sum(int arr[] , int len)
// {
//     if(len == 1) return arr[0];
//     return sum(arr,len - 1) + arr[len - 1];
// }
// double arr_avg(int arr[] , int len){

//     if(len == 1) 
//         return arr[0];
//     double sub_res = arr_avg(arr,len-1);
//     sub_res = sub_res * (len - 1);

//     return (sub_res + arr[len - 1]) / len;
//     // 1 8 2 10 3

// }
// void arr_increment(int arr[] , int len)
// {
//     if(len == 0)
//         return;
//     arr_increment(arr, len - 1);
//     arr[len - 1] += len - 1;
//     // 1 8 2 10 3
// }
// void accumulate_arr(int arr[], int len)
// {
//     if(len == 1)
//         return;
//     accumulate_arr(arr,len - 1);
//     arr[len - 1] += arr[len - 2];
// }
int main(){
    // print_triangle(5);
    // fun3n(9);
    // cout << length_3n_plus_1(6) << "\n";
    // cout << my_pow(3) << '\n';
    // int arr[] = {1,2,3,4,5,6};
    // accumulate_arr(arr,6);
    // for(auto i : arr) cout << i << " ";
    // cout << '\n';
    return 0;
}