#include <stdio.h>

void printAllData();
void addData(int, int);
void deleteData(int);

int marks[10] = {49, 51, 23, 77, 12, 29};
int n = 6;

void main()
{
	printf("\n-- Array \"before add 79\" at index number 3 --\n");
	printAllData();
	printf("\n");

	addData(3, 79);
	printf("\n-- Array \"after add 79\" at index number 3 --\n");
	printAllData();
	printf("\n");

	deleteData(23);
	printf("\n-- Array \"after delete 23\" --\n");
	printAllData();
	printf("\n");
}

// function for print all data in array
void printAllData()
{
	int i;
	for (i = 0; i < n; i++)
	{
		printf("%d\t", marks[i]);
	}
}

// function to add new data into array by position and its value
void addData(int pos, int val)
{
	if (n >= 10) {
		printf("Array is full. Can't add new data.\n");
		return;
	}
	for (int i = n; i > pos; i--) {
		marks[i] = marks[i - 1];
	}
	marks[pos] = val;
	n++;
}

// function to delete data by its value
void deleteData(int val)
{
	int pos = -1;
	for (int i = 0; i < n; i++) {
		if (marks[i] == val) {
			pos = i;
			break;
		}
	}
	if (pos == -1) {
		printf("Value not found in the array.\n");
		return;
	}
	for (int i = pos; i < n - 1; i++) {
		marks[i] = marks[i + 1];
	}
	marks[n - 1] = 0;
	n--;
}
