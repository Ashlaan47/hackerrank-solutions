#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    int n,d;
    cin>>n>>d;
    int *arr =new int[n];
   for(int i=0; i<n;i++)
       cin>>arr[i];
   
    for(int i=0; i<n;i++)
        cout<<arr[(i+d)%n]<<" ";
     
    return 0;
}
