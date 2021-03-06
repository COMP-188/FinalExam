/** \file FinalExam.cpp
 *  \brief     A final exam work of Dmytro Venchak
 *  \details   This programm will have a functionality to manipulate an array of integers 
 *              through a users input
 *  \author    Dmytro Venchak
 *  \version   0.1
 *  \date      28/05/2021
 */

#include <iostream>
#include <cassert>
using namespace std;

//prototypes
int printMenu();
void fillArray(int[], const int);
void displayArray(const int[], const int);
int sumOfAll(const int[], const int);
void allZero(int[], const int);

	/**
 * <code>main</code> is the main function of this program.
 * <BR>
 * @return Returns 0 if success, any other value otherwise.
 */
	int main()
	{
		int choice;
		const int SIZE = 15;

		int arr[SIZE] = {};

		do {
			choice = printMenu();

			switch (choice) {
				
			case 1:
				fillArray(arr, SIZE);
				break;
				
			case 2:
				displayArray(arr, SIZE);
				break;
				
			case 3:
				cout << "\nThe sum of all elements in the array is: " << sumOfAll(arr, SIZE) << endl;
				break;
				
			case 4:
				allZero(arr, SIZE);
				break;
				
			case 5:
				break;
				
			default:
				assert(true);
			}
		} while (choice != 5);

		cout << "\nHave a nice day:)" << endl;
		return 0;
	}
/**
 * <code>printMenu</code> shows a menu and accepts the choice
 * from the user which is returned.
 * <BR>
 * @return Returns the menu choice.
 */
int printMenu() {
	int choice;

	do {
		cout << "\n == MENU ==\n";
		cout << "\n1) Enter data in array";
		cout << "\n2) Show array";
		cout << "\n3) Sum of all elements of the array";
		cout << "\n4) Make all elements of the array zero";
		cout << "\n5) Exit";

		cout << "\nEnter the choice: ";
		cin >> choice;

		if (choice <= 0 || choice >= 6) {
			cout << "\nWrong choice, try again.\n";
		}
	} while (choice <= 0 || choice >= 6);
	return choice;
}
/**
 * <code>fillArray</code> is a function that will
 * fill in the elements of an array.
 * <BR>
 * @param <code>arr<code> The array to be filled in.
 * @param <code>size<code> The size of the array.
 */
void fillArray(int arr[], const int size) {

	for (int i = 0; i < size; i++) {
		cout << "\nEnter an element for the array at " << i + 1 << ": ";
		cin >> arr[i];
	}
}
/**
 * <code>displayArray</code> prints out the value
 * of each of the elements of the array.
 * <BR>
 * @param <code>arr<code> The array containing the values.
 * @param <code>size<code> The size of the array.
 */
void displayArray(const int arr[], const int size) {
	cout << endl;
	for (int i = 0; i < size; i++) {
		cout << arr[i] << ' ';
	}
	cout << endl;
}
/**
 * <code>sumOfAll</code> sums all the elements
 * in the array of integers.
 * <BR>
 * @param arr The array containing the values.
 * @param size The size of the array.
 * @return the sum of all elements of the array.
 */
int sumOfAll(const int arr[], const int size) {
	int sum = 0;
	for (int i = 0; i < size; i++) {
		sum += arr[i];
	}
	return sum;
}
/**
 * <code>allZero</code> resets all the elements of the array to 0.
 * <BR>
 * @param arr The array containing the values.
 * @param size The size of the array.
 * @return the sum of all elements of the array.
 */
void allZero(int arr[], const int size) {

	for (int i = 0; i < size; i++) {
		arr[i] = 0;
	}
	cout << "\nSuccessfully updated!\n";
}