#include <iostream>
#include<iomanip>
using namespace std;

int factorial(int num) {
    if (num <= 1) return 1;
    return num * factorial(num - 1);
}

int perm(int n, int k) {
    return factorial(n) /factorial(n - k);
}

int combination(int n, int k) {
    return perm(n,k) / factorial(k);
}

void drawTriangle(int rows) {
   for(int i = 0; i<rows; i++){
      for(int j = 0; j<(rows-i-1); j++)
         cout <<setw(3)<< " ";
      for(int j = 0; j<(i+1); j++)
         cout <<setw(3)<< combination(i, j) <<setw(3)<< " ";
      cout << endl;
   }
}

int main()
{
 drawTriangle(5);
}

