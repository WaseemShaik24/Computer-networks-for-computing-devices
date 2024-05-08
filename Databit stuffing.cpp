#include<stdio.h>
#include<string.h>
int main()
{
	int i=0,count=0;
    char databits[80];
    printf("Enter the data bits: ");
    scanf("%s",databits);
    printf("\nData bits after stuffing: ");
    for(i=0;i<strlen(databits);i++){
    	if(databits[i]=='1'){
    		count++;
		}
    	
	}
}