//
//  main.c
//  test
//
//  Created by Nicolas on 24/04/2014.
//  Copyright (c) 2014 spirotron. All rights reserved.
//

#include <stdio.h>

int main(int argc, const char * argv[])
{
	// insert code here...
	printf("Hello, World!\n");
	
	FILE *myfile = fopen("/Users/nicolas/Development/projects/nl/test/dummy.txt","rb");

	if (!myfile) {
		printf("Could not open file.");
		return 1;
	}

	int BUFF_SIZE = 2;
	char buff[BUFF_SIZE+1];
	unsigned short readSize;
	
	while ((readSize = fread(buff, 1, BUFF_SIZE, myfile)) != 0) {
		buff[readSize] = 0;
		printf("%s",buff);
	}
	
	printf("\n");
	fclose(myfile);
	return 0;
}

