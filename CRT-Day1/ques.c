#include<stdio.h>
#include<math.h>
int main(){
    //sum and reverse of 3 digit

    // int n , f, m , l , sum, rev;
    // printf("enter a 3 digit no:");
    // scanf("%d" , &n);
    // f= n/100;
    // m= n/10%10;
    // l = n%10;
    // // sum = f+m+l;
    // rev= l*100+m*10+1;
    // printf("sum is %d", rev);
    // return 0;

    //max of 3 nos

//     int a, b, c, max;
//     printf("enter 3 nos:");
//     scanf("%d %d %d", &a, &b, &c);

//     if(a>b){
//       if(a>c)
//       max=a;
//       else
//       max= c;

//     }

//     else{
//       if(b>c)
//       max = b;
//       else
//       max=c;

//     }
    
// printf("max is %d", max);
// return 0;

//max of 2 nos
// int a, b, max;
// printf("enter 2 nos:");
// scanf("%d %d", &a, &b);
// max = (a+b+abs(a-b))/2;
// printf("max is %d", max);

//2nd max of 3 nos
int a, b ,c, max, smax;
printf("enter 3 nos:");
scanf("%d %d %d", &a, &b , &c);
if(a>b){
    max=a;
    smax = b;
}
else{
    max=b;
    smax=a;
}

if(c>max){
    smax= max;
    max=c;
}
else if(c>smax){
    smax=c;
}
printf("smax is %d", smax);
return 0;
}