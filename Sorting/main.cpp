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
int main(){
    vector<int>arr = {9,2,10,0,5,3,90,85};
    //insertion_sort(arr);
    selection_sort(arr);
    loop(arr.size()){
        cout << arr[i] << ' ';
    }

    
   cel return 0;
}