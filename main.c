#include <stdio.h>
#include <string.h>

int main()
{
    char message[100], ch;
	int i, keyi, a, b, c;
// ********************************************************** Cipher selection **************************************************
	printf("Enter 1 for Caesar Cipher \n 2 for Simple Cipher \n");
  scanf("%d", a);
// ************************************************Encryption or Decrypt Caesar**************************************************
if (b==1){	
	
    	printf("enter 1 for Caesar Cipher encryption\n 2 for Caesar Cipher decryption\n");
  	scanf("%d", a);
  	
  	printf("Enter a message: ");
	gets(message);
	  
	  printf("Enter key: ");
	scanf("%d", &keyi);
	
//***********************************************Encryption*********************************************************************	
	if (a==1){
	    	for(i = 0; message[i] != '\0'; ++i){//Initialises for loop that encrypts message
		ch = message[i];//selects each character in message to be encrypted
		
		if(ch >= 'a' && ch <= 'z'){//ensures character is within a -> z
			ch = ch + keyi;//increases character by key 
			
			if(ch > 'z'){
				ch = ch - 'z' + 'a' - 1;//repeats increase by key for each letter
			}
			
			message[i] = ch;//saves encrypted message 
		}
		else if(ch >= 'A' && ch <= 'Z'){//ensures character is within A -> Z
			ch = ch + keyi;//increases character by key 
			
			if(ch > 'Z'){//repeats increase by key for each letter
				ch = ch - 'Z' + 'A' - 1;
			}
			
			message[i] = ch;//saves encrypted message
		}
	}
printf("Encrypted message: %s", strupr(message));//prints encrypted message in uppercase 
}
	
//*****************************************************Decryption***************************************************************
	else if (a==2){
	  
//Does the same as encryption but subtracting the key
		for(i = 0; message[i] != '\0'; ++i)
		{
				ch = message[i];
		
				if(ch >= 'a' && ch <= 'z')
				{
				ch = ch - keyi;
			
				if(ch < 'a'){ch = ch + 'z' - 'a' + 1;}
				message[i] = ch;
				}
			
				else if(ch >= 'A' && ch <= 'Z')
					{
					ch = ch - keyi;
			
					if(ch < 'A'){
					ch = ch + 'Z' - 'A' + 1;
					}
			
					message[i] = ch;
					}
		}
	printf("Decrypted message: %s", strupr(message));//Prints decrypted message in uppercase
}}
// ****************************************Encryption or Decrypt Simple cipher**************************************************
else if(b==2){
	printf("Enter 1 for Simple Cipher Encryption\n 2 for Simple Cipher Decryption\n");
  	scanf("%d", c);
// **************************************************Encryption Simple cipher**************************************************
	if(c==1)
	{
	
		char KEY[30];// creates string to store the key 
   		printf("Enter key text:");
   		fgets(KEY, sizeof(KEY), stdin);//key string length                   
    
    		char message[999];// creates string to store message
   		printf("Enter text: ");
    		fgets(message, sizeof(message), stdin);                 
    		message[strlen(message) - 1] = 0;// remove the \n
    		int count = strlen(message);//message string length

    		char output[count];// output string
    		for(int i = 0; i < count; i++) {// loop through characters in message
        	int index = ((int) message[i]) - 97;// get the index in the cipher by subtracting 'a' (ASCII 97) from the current character
        	if(index < 0)
		{
            	output[i] = ' ';// if index < 0, put a space to account for spaces
        	}
        	else {output[i] = KEY[index];}// else, assign the output[i] to the KEY[index]
    }
    output[count] = 0;// terminate the string

    printf("output: %s\n", strupr(output));// output in uppercase
		}
// **************************************************Decrypt Simple cipher**************************************************
		if(c==2){
		
		}

	  
//Does the same as encryption but subtracting the key
		for(i = 0; message[i] != '\0'; ++i)
		{
				ch = message[i];
		
				if(ch >= 'a' && ch <= 'z')
				{
				ch = ch - keyi;
			
				if(ch < 'a'){ch = ch + 'z' - 'a' + 1;}
				message[i] = ch;
				}
			
				else if(ch >= 'A' && ch <= 'Z')
					{
					ch = ch - keyi;
			
					if(ch < 'A'){
					ch = ch + 'Z' - 'A' + 1;
					}
			
					message[i] = ch;
					}
		}
	printf("Decrypted message: %s", strupr(message));//Prints decrypted message in uppercase
}}
// ****************************************Encryption or Decrypt Simple cipher**************************************************
else if(b==2){
	printf("Enter 1 for Simple Cipher Encryption\n 2 for Simple Cipher Decryption\n");
  	scanf("%d", c);
// **************************************************Encryption Simple cipher**************************************************
	if(c==1)
	{
/* Placeholder pseudocode + code 

//Add to global variables 
	int i,j;
	
	char text[999];// creates string to store the text 
   		printf("Enter message text:");
   		fgets(text, sizeof(text), stdin);//text string length
	  
	  char KEY[30];// creates string to store the key 
   		printf("Enter key text:");
   		fgets(KEY, sizeof(KEY), stdin);//key string length
   	
   	char abc[28] = "abcdefghijklmnopqrstuvqxyz";
	
	while(i!=sizeof(text)){
	
	for(i=0 && j==0;text[i]!=KEY[j];i++){
	text[i]=abc[j];
	j=j+1;
	}
	}
 
    
	printf("Decrypted message: %s", strup(text));//Prints decrypted message in uppercase


*/ 
    
		
		
		
	}
	return 0;
}
