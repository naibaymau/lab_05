#include <iostream>
#include <cmath>
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
    for (int i =index;i<n;i++){

    }
    return 1;
}
bool remove_at_index(int arr[], int& n, int index){
    return 1;
}