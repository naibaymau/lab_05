#include <iostream>

#include "1d_array/array_1d_utils.h"
#include "2d_array/array_2d_utils.h"

using namespace std;

int a[10000];
int n=5;

// // 5
// 1 3 5 7 9

void print_2d(int arr[][MAX_COLS], int rows, int cols){
    for (int i = 0 ; i < rows;i++)
        for (int j= 0 ;j< cols;j++)
            cout << arr[i][j] << " ";
}
// void print_array(int arr[], int n){
//     for (int i=0;i<n;i++){
//         cout << arr[i];
//         if (i < n-1) cout << " ";
//     }
// }
int main(){
    // TODO
    // input_array(a,n);
    // print_array(a,n); cout << endl;
    // int b[100] = {1,31,20,1,10,20,35,20};
    // cout << search (b,8,20) << endl;
    // int c[100] = {23 ,10, 30, 0 ,10, 0};
    // int nC = 6;
    // cout << (add_at_index(c,nC,5,0)==1) ;cout << " " << nC << " ";
    // print_array(c,nC); cout << endl;
    // int d[100] = {23,10,30,0,10,0};
    // int nD = 6; 
    // cout << (remove_at_index(d,nD,0)==1);cout << " " << nD << " ";
    // print_array(d,nD); cout << endl;

    // cout << endl;

    // int e[100] = {23,10,30,0,15,0};
    // int nE = 6;
    // cout << compute_array(e, nE, '*') << endl;
    // cout << compute_mean(e, nE) << endl;
    // cout << compute_median(e, nE) << endl;
    // cout << get_max_min(e, nE, false) << endl;
    // sort_ascending(e, nE);print_array(e,nE); cout << endl;
    // sort_descending(e,nE);print_array(e,nE); cout << endl;

    // cout << endl;

    
    // int b[MAX_ROWS][MAX_COLS];
    // int rB = 2; int cB = 3; 
    // input_2d(b, rB, cB);
    // print_2d(b, rB, cB); cout << endl;
    // int c[MAX_ROWS][MAX_COLS]={
    //     {1,2},
    //     {3,4}
    // };
    // rB = 2; cB = 2; 
    // cout << check_exist(c, rB, cB, 3) << endl;
    // cout <<  compute_2d(c, rB, cB, '+') << endl;
    // cout <<  compute_mean_2d(c, rB,cB) << endl;
    // int d[MAX_ROWS][MAX_COLS]={
    //     {1,8},
    //     {-2,4}
    // };
    //  rB = 2;  cB = 2; 
    // cout << get_max_min_2d(d, rB, cB, true) << endl;

    
    int b[MAX_ROWS][MAX_COLS]={
        {3,1,2},
        {6,4,5}
    };
    int rB = 2; int cB = 3; 
    sort_ascending_2d(b, rB, cB, true);
    print_2d(b,rB,cB); cout << endl;
    int c[MAX_ROWS][MAX_COLS]={
        {1,3,2},
        {4,6,5}
    };
    rB = 2; cB = 3; 
    sort_descending_2d(c, rB, cB, true);
    print_2d(c,rB,cB); cout << endl;
    int d[MAX_ROWS][MAX_COLS]={
        {1,2},
        {3,4}
    };
    rB = 2; cB = 2; 
    swap_2d(d, rB, cB,
                0, 1, true);
    print_2d(d,rB,cB); cout << endl;
    int e[MAX_ROWS][MAX_COLS]={
        {1,2,3,4}, //       1 5 9 13
        {5,6,7,8}, //       2 6 10 14
        {9,10,11,12},//     3 7 11 15
        {13,14,15,16}  //   4 8 12 16
    };
    rB = 4; cB = 4; 
    transpose_2d(e, rB, cB);
    print_2d(e,rB,cB); cout << endl;
    int f[MAX_ROWS][MAX_COLS]={
        {1,2},
        {3,4}
    };
    rB = 2; cB = 2; 
    rotate_2d(f, rB, cB, 1);
    print_2d(f,rB,cB); cout << endl;
    int g[MAX_ROWS][MAX_COLS]={
        {1,2},
        {3,4}
    };
    rB = 2; cB = 2; 
    reverse_2d(g, rB, cB, true);
    print_2d(g,rB,cB); cout << endl;

    
    cout << endl;

    // END TODO
    return 0;
}