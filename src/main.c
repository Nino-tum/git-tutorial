#include <stdio.h>
#include <espl_lib.h>
#include <stdbool.h>

int main()
{
	printf("Hello ESPL\n");

	unsigned int input;
	unsigned char decision;
	bool continue_; 
	// noticing that continue is a C keyword takes a long time when using nano
	do{
	    printf("input a number:");
	    scanf("%d",&input);
	    printf("the word is: %s\n",num_to_words(input));
	    printf("continue program? [Y/n]\n");
	    scanf(" %c",&decision);
	    switch(decision)
	    {
		case 'y':
		    continue_ = 1;
		    break;
		default:
		case 'n':
		    continue_ = 0;
		    break;	
	    }
	}while(continue_);
	return  0;
}
