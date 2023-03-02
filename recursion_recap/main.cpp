#include<bits/stdc++.h>
using namespace std;
#define el '\n';
void print_triangle(int levels)
{
    if(levels == 0) return;
    for(int i = 0 ; i < levels ; i++)
        cout << "* ";
    cout << '\n';
    print_triangle(levels - 1);
}
void fun3n(int n)
{
    cout << n << " ";
    if(n == 1) return;
    (n&1) ? fun3n(3*n + 1) : fun3n (n/2);
}
///---------------------------------------------------
// int length_3n_plus_1(int n , int l = 0)
// {
//     l++;
//     if(n == 1) 
//         return l;
//     (n&1) ? length_3n_plus_1(3*n + 1 , l) : length_3n_plus_1 (n/2 , l);
// }
int my_pow(int n , int p = 2)
{
    if(p == 0) return 1;
    return my_pow(n,p-1) * n;
}
int arr_max(int arr[] , int len)
{
    if(len == 1) return arr[0];
    return max(arr[len-1],arr_max(arr,len-1));
}
int sum(int arr[] , int len)
{
    if(len == 1) return arr[0];
    return sum(arr,len - 1) + arr[len - 1];
}
int main(){
    // print_triangle(5);
    // fun3n(9);
    // cout << length_3n_plus_1(5) << "\n";
    cout << my_pow(3) << '\n';
    return 0;
}