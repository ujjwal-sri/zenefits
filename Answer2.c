#include<stdio.h>
#include<string.h>
#include<math.h>
int factorial(int a);

int main()
{
    char req[100000]="I hate it";
    char addl[]="that I love it";
    char addh[]="that I hate it";
    int len;
    int i;
    int n;
    scanf("%d",&n);
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


int factorial(int a){
    if(a==0) return 1;
    else return (a*factorial(a-1));

}

