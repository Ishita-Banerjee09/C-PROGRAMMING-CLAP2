#include <stdio.h>
#include <string.h>
int main()
{
    int n;
    printf("Enter the number: ");
    scanf("%d",&n);
    if(n){
        for(;n!=0;n/=10){
            if(!(n%10)){
                printf("Not a GOOD Number");
                break;
            }
        }
        if(!n) printf("GOOD Number");
    }
    else printf("Not a GOOD Number");
    return 0;
}
