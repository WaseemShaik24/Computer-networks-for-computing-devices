#include <stdio.h>
#include <string.h>

#define MAX_LENGTH 100


void bitStuffing(char *data, char *stuffedData) {
    int count = 0;
    int index = 0;
    

    for (int i = 0; i < strlen(data); i++) {
        stuffedData[index++] = data[i];
        if (data[i] == '1') {
            count++;
        } else {
            count = 0;
        }
        
    
        if (count == 5) {
            stuffedData[index++] = '0'; 
            count = 0; 
        }
    }
    stuffedData[index] = '\0';
}

int main() {
    char data[MAX_LENGTH];
    char stuffedData[MAX_LENGTH * 2]; 
    
   
    printf("Enter the data: ");
    scanf("%s", data);
    
    
    bitStuffing(data, stuffedData);
    
  
    printf("Original Data: %s\n", data);
    printf("Stuffed Data: %s\n", stuffedData);
    
    return 0;
}
