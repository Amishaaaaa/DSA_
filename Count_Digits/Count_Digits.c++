int count(int n){
    //write your code here
    
    int sum=0;
    while(n>0){
        int last_digit=n%10;
        n=n/10;
        sum++;
    }
    return sum;
}
