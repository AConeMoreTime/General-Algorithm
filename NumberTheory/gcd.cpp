// Several algorithms to find the greatest common factor
// lcm(a, b) = ab / gcd(a, b)

#include <bits/stdc++.h>
using namespace std;


//The Euclidean Algorithm
int gcd1(int a, int b){
    if(b == 0)
        return a;
    return gcd1(b, a%b);
}



int gcd2(int a, int b){
    while (a != b)
        if(a > b)
            a -= b;
        else
            b -= a;
    return a;
}



//Recursive version of gcd2
int gcd2recur(int a, int b){
    if(a == b)
        return a;
    else if(a > b)
        return gcd2recur(a-b, b);
    else if(b > a)
        return gcd2recur(a, b-a);
}

int main(){
    int a, b; cin >> a >> b;
    cout << gcd1(a, b) << endl;
    cout << gcd2(a, b) << endl;
    cout << gcd2recur(a, b) << endl;
    return 0;
}
