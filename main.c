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

/*
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <ctype.h>

char shift_tbl_u[27] = "GHIJKLMNOPQRSTUVWXYZABCDEF"; 
char shift_tbl_l[27] = "ghijklmnopqrstuvwxyzabcdef"; 
char encrypt(char inchar)
{
        if(isalpha(inchar) && isupper(inchar))
    {
        return shift_tbl_u[inchar-'A'];
    }
    else if(isalpha(inchar) && islower(inchar)) 
    {
        return shift_tbl_l[inchar-'a'];
    }
    return inchar; // non alphabetic = no change;
}


int main (void)
{
    FILE *fp = fopen("code.txt", "rb+");
    char *buffer = NULL;    


    size_t s_file;
    int i;

    if(!fp)
    {
        puts("Could not open code.txt");
        exit(EXIT_FAILURE);
    }

    fseek(fp, 0, SEEK_END);
    s_file = ftell(fp);
    rewind(fp);
    buffer = malloc(s_file + 1);
    if(!buffer)
    {
        perror("malloc");
        exit(EXIT_FAILURE);
    }

    fread(buffer, 1, s_file, fp);

    fseek(fp, 0, SEEK_SET);

    for(i = 0; i < s_file; i++)
    {
        char c = encrypt(buffer[i]);
        fwrite(&c, 1, 1, fp);
    }
    free(buffer);
    buffer = NULL;

    fclose(fp);

    return 0;
}
*\
