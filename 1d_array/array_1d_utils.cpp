#include <iostream>
#include <cmath>
#include "format_utils.h"
using namespace std;

void input_array(int arr[], int n){
    for (int i=0;i<n;i++){
        cin >> arr[i];
    }
}
void print_array(int arr[], int n){
    for (int i=0;i<n;i++){
        cout << arr[i];
        if (i < n-1) cout << " ";
    }
}
int search(int arr[], int n, int value){
    for (int i=0;i<n;i++){
        if (arr[i] == value) return i;
    }
    return -1;
}
bool add_at_index(int arr[], int& n, int value, int index){
    if (index < 0 || index >=n) return 0;
    for (int i =n;i>index;i--){
        arr[i]=arr[i-1];
    }
    arr[index] = value;
    n++;
    return 1;
}
bool remove_at_index(int arr[], int& n, int index){
    if (index < 0 || index >=n) return 0;
    if (n-1 < 0) return 0;
    for (int i =index;i<n-1;i++){
        arr[i] = arr[i+1];
    }
    n--;
    return 1;
}



void sort_ascending(int arr[], int n){
    int temp = 0;
    for (int i =0;i<n-1;i++)
        for (int j =i+1;j<n;j++){
            if (arr[j] < arr[i]){
                temp = arr[i];
                arr[i] = arr[j];
                arr[j] = temp;
            }
        }
}
void sort_descending(int arr[], int n){
    int temp = 0;
    for (int i =0;i<n-1;i++)
        for (int j =i+1;j<n;j++){
            if (arr[j] > arr[i]){
                temp = arr[i];
                arr[i] = arr[j];
                arr[j] = temp;
            }
        }
}
long long compute_array(int arr[], int n, char op = '+'){
    if (op == '*') {
        long long res =1;
        for (int i =0;i<n;i++) res*=arr[i];
        return res;
    }
    else {
        long long res =0;
        for (int i =0;i<n;i++) res+=arr[i];
        return res;
    }
}
float compute_mean(int arr[], int n){
    float res=0;
    for (int i = 0;i<n;i++){
        res += arr[i];
    }
    return round_to_decimal(res/n,2);
}
float compute_median(int arr[], int n){
    sort_ascending(arr,n);
    if (n%2==0){
        return round_to_decimal((arr[n/2]+arr[n/2-1])/2,2);        
    } else {
        return arr[n/2];
    }
}
int get_max_min(int arr[], int n, bool max = true){
    int res = arr[0];
    if (max==true){
        for (int i =1;i<n;i++){
            if (arr[i]>res) res = arr[i]; 
        }
    } else {
        for (int i =1;i<n;i++){
            if (arr[i]<res) res = arr[i]; 
        }
    }
    return res;
}