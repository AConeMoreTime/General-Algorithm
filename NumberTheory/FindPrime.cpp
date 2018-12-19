/*
If a is a factor of n, ∃b s.t. ab = n, a <= √n and b <= √n,
since if a > √n and b > √n, ab > n , which does not satisfy ab = n.
Consequently, if n is a non-prime number, we only need to enumerate to √n to find at least
one factor of n. Otherwise, n must be a prime number.
*/
bool is_prime(int n){
    for(int i = 2; i*i <= n; i++){
        if(n%i == 0)
            return true; //Not prime
    }
    return false; //Prime
}
