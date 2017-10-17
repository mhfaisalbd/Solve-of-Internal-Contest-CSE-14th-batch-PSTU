//Bidimensional Array & Matrix

//solve of: https://www.hackerrank.com/contests/internal-contest-l-1-s-2/challenges/bidimensional-array-matrix

 #include<stdio.h>
#include<string.h>
int main()
{
    int N,i,j;
    char a[]="C",b[]="S",c[]="E";
    scanf("%d",&N);
    for(i=0;i<N;i++){
        for(j=0;j<N;j++){
            if(j==0||i==0||j==(N-1)||i==(N-1)){
                printf("%s",a);
            }
            else if(j==1||i==1||j==(N-2)||i==(N-2)){
                printf("%s",b);
            }
            else{
                printf("%s",c);
            }
                if(i!=N){
                    printf(" ");
                }
        }
        printf("\n");
    }
    return 0;
}
