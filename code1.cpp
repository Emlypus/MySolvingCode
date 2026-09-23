#include <iostream>
using namespace std;

int main() {
    int n;
    cin >> n;//input the value of element in array
    long val[n], m, sum;
    for (int i=0;i<n;i++) {//repeating input as much as n
        cin >> m;
        val[i]=m;
        if (i==0) {
            sum=m;//defining sum variable at the start
        }else {
            sum+=m;//adding up value to sum
        }
    }cout << sum;//output value
}
