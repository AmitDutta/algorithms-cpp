/*
 * Main.cpp
 *
 *  Created on: Nov 13, 2013
 *      Author: amit
 */

#include <stdio.h>
#include <climits>

void rotation(){
	unsigned short i = 1;
	/*unsigned short rotated = ((i & 1) << 15) | (i >> 1);
	printf("%d\n", rotated);*/

	// A number remains same after total bits - 1 rotation
	/*for (int turn = 0; turn < 16; turn++){
		i = ((i & 1) << 15) | (i >> 1);
	}
	printf("%d\n", i);*/

	int max = i;
	int index = 0;
	for (int turn = 1; turn <= 15; turn++){
		i = ((i & 1) << 15) | (i >> 1);
		if (max < i) {
			max = i;
			index = turn;
		}
	}
	printf("%d %d\n", max, index);
}

void rotate(){
	unsigned short num = 5;
	int times = 3;
	int n = 16;
	for (int i = 1; i <= times; i++){
		num = ((num & 1) << (n - 1)) | (num >> 1);		
	}
	printf("Result: %d\n", num);
}

int main(void){
	//rotation();
	rotate();
	return 0;
}


