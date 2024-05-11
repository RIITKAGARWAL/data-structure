/*
Q7. Reverse Integer

Given a signed 32-bit integer x, return x with its digits reversed. If reversing x causes the value to go outside the signed 32-bit integer range [-231, 231 - 1], then return 0.
Assume the environment does not allow you to store 64-bit integers (signed or unsigned).

*/



int reverse(int x){
    double rev = 0;
    while(x!=0)
        {
            
            rev = rev*10 + x%10;
            x/=10;
           
        }
     if(rev<(pow(2,31) *-1) || rev >=pow(2,31))
    return 0;
    else 
     return rev;
}
