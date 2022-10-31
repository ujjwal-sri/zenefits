#include<stdio.h>
#include<string.h>
#include<math.h>
int factorial(int a);

int main()
{
    char req[100000]="I not hate it";
    char addl[]="that I not love it";
    char addh[]="that I not hate it";
    int len;
    int i;
    int n;
    scanf("%d",&n);
    printf("input given is a natural number n : %d", n);
    for(i=0;i<n-1;i++){
            len=strlen(req);
            if(i%2==0){
             req[len-2]='\0';
             strcat(req,addl);
            }
            if(i%2!=0){
             req[len-2]='\0';
             strcat(req,addh);
            }
    req[len+12]='\0';
    }
    printf("%s",req);
        return 0;
}

