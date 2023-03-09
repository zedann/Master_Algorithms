#include<bits/stdc++.h>
using namespace std;
#define el '\n'
#define cel cout << '\n';
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
int length_3n_plus_1(int n)
{

    if(n == 1) 
        return 1;
    return (n&1) ? 1+length_3n_plus_1(3*n + 1) : 1+length_3n_plus_1 (n/2);
}
int my_pow(int n , int p = 2)
{
    if(p == 0) return 1;
    return my_pow(n,p-1) * n;
}
int arr_max(int arr[] , int len)
{
    if(len == 1)
        return arr[0];

    int sub_result = arr_max(arr, len - 1);
    return max(sub_result , arr[len-1]);
    // 1 8 2 10 3
}
int sum(int arr[] , int len)
{
    if(len == 1) return arr[0];
    return sum(arr,len - 1) + arr[len - 1];
}
double arr_avg(int arr[] , int len){

    if(len == 1) 
        return arr[0];
    double sub_res = arr_avg(arr,len-1);
    sub_res = sub_res * (len - 1);

    return (sub_res + arr[len - 1]) / len;
    // 1 8 2 10 3

}
void arr_increment(int arr[] , int len)
{
    if(len == 0)
        return;
    arr_increment(arr, len - 1);
    arr[len - 1] += len - 1;
    // 1 8 2 10 3
}
void accumulate_arr(int arr[], int len)
{
    if(len == 1)
        return;
    accumulate_arr(arr,len - 1);
    arr[len - 1] += arr[len - 2];
}
void left_max(int arr[] , int len)
{
    if(len == 1)
        return;
    left_max(arr,len - 1);
    arr[len - 1] = max(arr[len - 1] , arr[len - 2]);
}
//=============================================================
void right_max(int arr[] , int len ){
    //1 3 5 7 4 2 => 7 7 7 7 4 2
    if(len == 1) 
        return;
    arr[len - 2] = max(arr[len - 2] , arr[len - 1]);
    right_max(arr,len-1);
}
int suffix_sum(int arr[] , int len , int N){
    if(N==0)
        return 0;
    return arr[len - 1] + suffix_sum(arr,len - 1,N - 1);
}
int prefix_sum(int arr[] , int len , int N ){
    if(N == 0)
        return 0; 
    return arr[N - 1] + prefix_sum(arr,len,N-1);
}
bool is_palindrome(int arr[] , int start , int end){
    if(start >= end)
        return true;
    if(arr[start] != arr[end])
        return false;
    return is_palindrome(arr,++start , --end);
}
bool is_prefix(string main , string prefix , int start_pos = 0){
    if(start_pos == prefix.size()) 
        return true;
    if(main[start_pos] != prefix[start_pos])
        return false;
    return is_prefix(main,prefix,start_pos+1);
}   
bool is_prime(int m , int cur_num = 3){
    if(m == 2) return true;
    if(m <= 1 || m % 2 == 0) return false;
    if(m == cur_num) return true;
    if(m % cur_num == 0) return false;

    return is_prime(m , cur_num + 1);

}
int count_primes(int start , int end){
    if(start > end) return 0;
    int res = count_primes(start + 1 , end);
    res += (is_prime(start));
    return res;
}
int grid_sum(){

}
int fibonacci(int n){
    if(n <= 1) 
        return 1;
    return fibonacci(n-1) + fibonacci(n-2);
}

int main(){
    // print_triangle(5);
    // fun3n(9);
    // cout << length_3n_plus_1(6) << "\n";
    // cout << my_pow(3) << '\n';
    int arr[] = {1,3,5,7,4,2};
    // left_max(arr,6);
    // accumulate_arr(arr,6);
    // right_max(arr,6);
    //  cout << suffix_sum(arr,6,3) << '\n';
    //  cout << prefix_sum(arr,6,3) << '\n';
    cout << count_primes(10,20) << '\n';
    for(auto i : arr) cout << i << " ";
    cel
    return 0;
}