#include <iostream>
#include <fstream>	

using namespace std;

ifstream fin("siruri1.in");
ofstream fout ("siruri1.out");
int a[100],b[100],n;
void citire (){
    fin >> n;
    for (int i = 0; i <n; ++i) {
        fin >> a[i];
    }
}
void bubblesort2(int arr[], int n) {
      bool swapped = true;
      int j = 0;
      int tmp;
      while (swapped) {
            swapped = false;
            j++;
            for (int i = 0; i < n - j; i++) {
                  if (arr[i] > arr[i + 1]) {
                        tmp = arr[i];
                        arr[i] = arr[i + 1];
                        arr[i + 1] = tmp;
                        swapped = true;
                  }
            }
      }
}

void mirror(int *a, int *b,int n){
    int i;
    for (i = 0; i < n; ++i) {
        b[i]=a[i];   
    }
}
int main ()
{
    citire();
    mirror(a,b,n);
    bubblesort2(a,n);
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            if (b[i]==a[j]) {
                fout <<j+1<<" ";
            }
        }
    }
    return 0;
}
