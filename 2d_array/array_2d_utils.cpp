#include <iostream>
#include "array_2d_utils.h"
#include "format_utils.h"

using namespace std;


// void input_2d(int arr[][MAX_COLS], int rows, int cols){
//     for (int i = 0 ; i < rows;i++)
//         for (int j= 0 ;j< cols;j++)
//             cin >> arr[i][j];
// }
// void print_2d(int arr[][MAX_COLS], int rows, int cols){
//     for (int i = 0 ; i < rows;i++)
//         for (int j= 0 ;j< cols;j++)
//             cout << arr[i][j] << " ";
// }
// bool check_exist(int arr[][MAX_COLS], int rows, int cols, int value){
//     for (int i = 0 ; i < rows;i++)
//         for (int j= 0 ;j< cols;j++)
//             if (arr[i][j] == value) return true;
//     return false;
// }
// long long compute_2d(int arr[][MAX_COLS], int rows, int cols, char op){
//     if (op == '*'){
//         long long res =1;
//         for (int i = 0 ; i < rows;i++)
//             for (int j= 0 ;j< cols;j++)
//                 res *= arr[i][j] ;
//         return res;
//     } else {
//         long long res =0;
//         for (int i = 0 ; i < rows;i++)
//             for (int j= 0 ;j< cols;j++)
//                 res += arr[i][j] ;
//         return res;
//     }
// }
// float compute_mean_2d(int arr[][MAX_COLS], int rows, int cols){
//     float res =0;
//     for (int i = 0 ; i < rows;i++)
//         for (int j= 0 ;j< cols;j++)
//             res += arr[i][j] ;
//     return round_to_decimal(res/(rows*cols),2);

// }
// int get_max_min_2d(int arr[][MAX_COLS], int rows, int cols, bool max){
//     int res = arr[0][0];
//     if (max){
//         for (int i = 0 ; i < rows;i++)
//             for (int j= 0 ;j< cols;j++)
//                 if (arr[i][j] > res) res = arr[i][j];
//     } else {
//         for (int i = 0 ; i < rows;i++)
//             for (int j= 0 ;j< cols;j++)
//                 if (arr[i][j] < res) res = arr[i][j];
//     }
//     return res;
// }



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
long long compute_array(int arr[], int n, char op){
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
    float res =0.0;
    if (n%2==0){
        res =(arr[n/2]+arr[n/2-1])/2.0f;
    } else {
        res = arr[n/2];
    }
    return round_to_decimal(res,2);
}
int get_max_min(int arr[], int n, bool max){
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
void sort_ascending_2d(int arr[][MAX_COLS], int rows, int cols, bool row_based ){
    if (row_based)
        for (int i =0 ;i <rows;i++)
            sort_ascending(arr[i],cols);
    else 
        for (int i=0;i<cols;i++){
            for (int m = 0; m<rows-1;m++){
                for (int n = m+1;n<rows;n++){
                    if (arr[n][i] < arr[m][i]){
                        int temp = arr[n][i];
                        arr[n][i] = arr[m][i];
                        arr[m][i] = temp;
                    }
                }
            }
        }
}
void sort_descending_2d(int arr[][MAX_COLS], int rows, int cols, bool row_based ){
    if (row_based)
        for (int i =0 ;i <rows;i++)
            sort_descending(arr[i],cols);
    else 
        for (int i=0;i<cols;i++){
            for (int m = 0; m<rows-1;m++){
                for (int n = m+1;n<rows;n++){
                    if (arr[n][i] > arr[m][i]){
                        int temp = arr[n][i];
                        arr[n][i] = arr[m][i];
                        arr[m][i] = temp;
                    }
                }
            }
        }
    return;
}
void swap_2d(int arr[][MAX_COLS], int rows, int cols,
             int first_index, int second_index, bool row_based ){
    if (row_based){
        for (int i = 0;i<cols;i++){
            int temp = arr[first_index][i];
            arr[first_index][i] = arr[second_index][i];
            arr[second_index][i] = temp;
        }
    }
    else{
        for (int i = 0;i<rows;i++){
            int temp = arr[i][first_index];
            arr[i][first_index]= arr[i][second_index];
            arr[i][second_index] = temp;
        }
    } 
    return;
}
void transpose_2d(int arr[][MAX_COLS], int rows, int cols){
    for (int i =1;i<rows;i++)
        for (int j =0;j<cols/2+1;j++)
            {
                int temp = arr[i][j];
                arr[i][j] = arr[j][i];
                arr[j][i] = temp; 
            }
    return;
}
void rotate_2d(int arr[][MAX_COLS], int rows, int cols, int n){
    return;
}
void reverse_2d(int arr[][MAX_COLS], int rows, int cols, bool row_based ){
    return;
}