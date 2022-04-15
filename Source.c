/*
Write a program that converts an int input of seconds into hours, minutes, and remaining seconds
1 hour = 3600 seconds
04/14/2022
*/

#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main() {
	int secondsInput, hours, minutes, remainingSeconds;
	//
	printf("Please input the amount of seconds you would like converted into hours and minutes\n");
	scanf_s("%d", &secondsInput);
	//
	hours = secondsInput / 3600; // example: "4000" seconds input / 3600 = 1 hr
	minutes = (secondsInput - (hours * 3600)) / 60; // example: (4000sec - (1hr * 3600sec)) = 400sec |
	// 400sec / 60 = 6 minutes
	remainingSeconds = (secondsInput - (hours * 3600)) % 60;
	// example: (4000sec - (1hr * 3600sec)) % 60 = 40 seconds remaining
	//
	printf("%dhr : %dmin : %dsec\n", hours ,minutes, remainingSeconds);
	return 0;
}