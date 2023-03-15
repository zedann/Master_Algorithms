#include<bits/stdc++.h>
using namespace std;
#define el '\n'
#define cel cout << '\n';
#define loop(x) for(int i = 0 ; i < x ; i++)
void insertion_sort(vector<int>&arr){
    int n = arr.size();
    for(int i = 1 ; i < n ; i++){
        int key = arr[i];
        int j = i - 1;
        while (j >= 0 && key < arr[j])
        {
            arr[j+1] = arr[j];//shift right
            j--;
        }
        arr[j+1] = key;
    }
}
void selection_sort(vector<int>&arr)
{
    int n = arr.size();
    for(int i = 0 ; i < n-1 ; i++){
        int min = i;
        for(int j = i + 1 ; j < n ;j++)
            if(arr[j] < arr[min])
                min = j;
            
        swap(arr[i] , arr[min]);
    }
}
void count_sort(vector<int>&arr)
{
    //range [0,500] 
    int mx_val = *max_element(arr.begin() , arr.end());
    int freq[mx_val + 1] = {0};
    for(auto i : arr) freq[i] ++;
    int idx = 0;
    for(int i =0; i <= mx_val ; i++)
        if(freq[i] > 0)
            for(int j = 0 ; j < freq[i] ; j++ , idx ++)
                arr[idx] = i;
        
}
int main(){
    vector<int>arr = {9,2,10,0,5,10,3,90,85};
    //insertion_sort(arr);
    // selection_sort(arr);
    count_sort(arr);
    loop(arr.size()){
        cout << arr[i] << ' ';
    }

    
   cel return 0;
}