#include <stdio.h>

int main()
{
    char message[100], ch;
	int i, key, a;
	
//select encryption method*********************************************************
    printf("enter 1 for Caesar Cipher encryption\n 2 for Caesar Cipher decryption\n");
  scanf("%d", a);
  	
  	printf("Enter a message: ");
	gets(message);
	  
	  printf("Enter key: ");
	scanf("%d", &key);
	
	//Encryption
	if (a==1){
	    	for(i = 0; message[i] != '\0'; ++i){
		ch = message[i];
		
		if(ch >= 'a' && ch <= 'z'){
			ch = ch + key;
			
			if(ch > 'z'){
				ch = ch - 'z' + 'a' - 1;
			}
			
			message[i] = ch;
		}
		else if(ch >= 'A' && ch <= 'Z'){
			ch = ch + key;
			
			if(ch > 'Z'){
				ch = ch - 'Z' + 'A' - 1;
			}
			
			message[i] = ch;
		}
	}
printf("Encrypted message: %s", strupr(message));
}
	
	//Decryption
	else if (a==2){
	  
	
	for(i = 0; message[i] != '\0'; ++i){
		ch = message[i];
		
		if(ch >= 'a' && ch <= 'z'){
			ch = ch - key;
			
			if(ch < 'a'){
				ch = ch + 'z' - 'a' + 1;
			}
			
			message[i] = ch;
		}
		else if(ch >= 'A' && ch <= 'Z'){
			ch = ch - key;
			
			if(ch < 'A'){
				ch = ch + 'Z' - 'A' + 1;
			}
			
			message[i] = ch;
		}
	}
	printf("Decrypted message: %s", strupr(message));
}
	return 0;
}
