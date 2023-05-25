#include<iostream>
using namespace std;

int main(){
    int a[6];
    int count = 0;

    for(int i = 0;i<6;i++){
        cin >> a[i] ;
    }

    for(int i = 0;i<6;i++){
        if(a[i] > 0){
            count++;
        }
    }

    cout << count << " valores positivos" << endl;
}