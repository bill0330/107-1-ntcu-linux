#include<stdio.h>
int main(void)
{
  char message[80], ch;
  int i, key;
    
  printf("Enter message to be encrypted: ");
  gets(message);
  printf("Enter shift amount (1-25): ");
  scanf("%d", &key);
    
  for (i = 0; message[i] != '\0'; ++i) {
    ch = message[i];
        
    if (ch >= 'a' && ch <= 'z') {
        if ((ch + key) > 'z') {
            ch = ch + key - 'z' + 'a' -1;
        }
        else
        ch = ch + key;
        message[i] = ch;
    }
    else if (ch >= 'A' && ch <= 'Z') {
        ch = ch + key;
        if (ch > 'Z') {
            ch = ch - 'Z' + 'A' -1;
        }
            
            message[i] = ch;
    }
  }
    printf("Encrypted message: %s", message);
    return 0;
}

