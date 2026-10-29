#include <iostream>
#include "array_2d_utils.h"
#include "format_utils.h"

using namespace std;


void input_2d(int arr[][MAX_COLS], int rows, int cols){
    for (int i = 0 ; i < rows;i++)
        for (int j= 0 ;j< cols;j++)
            cin >> arr[i][j];
}
void print_2d(int arr[][MAX_COLS], int rows, int cols){
    for (int i = 0 ; i < rows;i++)
        for (int j= 0 ;j< cols;j++)
            cout << arr[i][j] << " ";
}
bool check_exist(int arr[][MAX_COLS], int rows, int cols, int value){
    for (int i = 0 ; i < rows;i++)
        for (int j= 0 ;j< cols;j++)
            if (arr[i][j] == value) return true;
    return false;
}
long long compute_2d(int arr[][MAX_COLS], int rows, int cols, char op){
    if (op == '*'){
        long long res =1;
        for (int i = 0 ; i < rows;i++)
            for (int j= 0 ;j< cols;j++)
                res *= arr[i][j] ;
        return res;
    } else {
        long long res =0;
        for (int i = 0 ; i < rows;i++)
            for (int j= 0 ;j< cols;j++)
                res += arr[i][j] ;
        return res;
    }
}
float compute_mean_2d(int arr[][MAX_COLS], int rows, int cols){
    float res =0;
    for (int i = 0 ; i < rows;i++)
        for (int j= 0 ;j< cols;j++)
            res += arr[i][j] ;
    return round_to_decimal(res/(rows*cols),2);

}
int get_max_min_2d(int arr[][MAX_COLS], int rows, int cols, bool max){
    int res = arr[0][0];
    if (max){
        for (int i = 0 ; i < rows;i++)
            for (int j= 0 ;j< cols;j++)
                if (arr[i][j] > res) res = arr[i][j];
    } else {
        for (int i = 0 ; i < rows;i++)
            for (int j= 0 ;j< cols;j++)
                if (arr[i][j] < res) res = arr[i][j];
    }
    return res;
}