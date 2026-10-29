#include <iostream>

#include "1d_array/array_1d_utils.h"
#include "2d_array/array_2d_utils.h"

using namespace std;

int a[10000];
int n=5;

// // 5
// 1 3 5 7 9

int main(){
    // TODO
    // input_array(a,n);
    // print_array(a,n); cout << endl;
    int b[100] = {1,31,20,1,10,20,35,20};
    cout << search (b,8,20) << endl;
    int c[100] = {23 ,10, 30, 0 ,10, 0};
    int nC = 6;
    cout << (add_at_index(c,nC,5,0)==1) ;cout << " " << nC << " ";
    print_array(c,nC); cout << endl;
    int d[100] = {23,10,30,0,10,0};
    int nD = 6; 
    cout << (remove_at_index(d,nD,0)==1);cout << " " << nD << " ";
    print_array(d,nD); cout << endl;

    cout << endl;

    int e[100] = {23,10,30,0,11,0};
    int nE = 6;
    cout << compute_array(e, nE, '+') << endl;
    cout << compute_mean(e, nE) << endl;
    cout << compute_median(e, nE) << endl;
    cout << get_max_min(e, nE, false) << endl;
    sort_ascending(e, nE);print_array(e,nE); cout << endl;
    sort_descending(e,nE);print_array(e,nE); cout << endl;

    cout << endl;
    // END TODO
    return 0;
}