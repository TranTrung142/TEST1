#include <iostream>

using namespace std;
int n=3;
int a[100];
void printKQ(int a[], int n){
    for(int i=1;i<=n;i++){
        cout <<a[i];
    }
    cout <<endl;
}
void Try(int k){
    for(int j=0;j<=2;j++){
        cout << "a";
        a[k] = j;
        if(k==n){

            printKQ(a,n);}
        else Try(k+1);
    }
}

int main()
{
    Try(1);
    return 0;
}
