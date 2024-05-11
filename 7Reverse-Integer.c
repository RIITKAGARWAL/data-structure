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