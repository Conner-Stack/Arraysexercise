#include <iostream>

using namespace std;

int main()
{
	//system pause and return 0 at bottom of code
	//Question 1 
	//Part 1
	//valid
	/*int numbers[10] = { 0, 0, 1, 0, 0, 1, 0, 0, 1, 1 };
	for (int i = 0; i < 10; i++)
		cout << numbers[i] << endl;*/
	//invalid - too many integers and not enough array slots
	//Part 3
	//invalid - iterations not in {} scopes
	//Part 4
	//invalid - the array is not contiguous
	//Part 5
	//Valid
	/*char codes[] = { 'A' ,'X' , '1' , '2' , 's' };
	for (int i = 0; i < 5; i++)
		cout << codes[i] << endl;*/
	//Part 6
	//invalid - no arrays defined in the variable
	//Part 7
	//invalid - can't have negative arrays
	//part 8
	//invalid - no scope for the definitions

	//Question 2

	/*int values[] = { 2, 6, 10, 14 };
*/
	//Part A
	//cout << values[2]
	// prints 10
	//Part B
	//cout << ++values[0]
	//prints 3
	//Part C
	//cout<<values[1]++
	//prints 6
	//Part D
	/*int x = 2;
		cout << values[++x];*/
	//prints 14
	//Part E
	//cout<<values[4];
	//prints a random default value

	//Question 3
	/*int data[10];

	for (int i = 9; i >= 0; i--)
	{
		data[i] = i;
			cout << data[i] << endl;
	}
*/
	//Question 4
	/*int num[5];
	cin >> num[0] >> num[1] >> num[2] >> num[3] >> num[4];
			for (int j = 4; j >= 0; j--)
				cout << num[j] << endl;*/
	//Question 5
	/*int nums[10];
	int smallNum;
	int bigNum;
		cin >> nums[0] >> nums[1] >> nums[2] >> nums[3] >> nums[4] >> nums[5] >> nums[6] >> nums[7] >> nums[8] >> nums[9];
		smallNum = nums[0];
		bigNum = nums[0];
		for (int i = 0; i < 10; i++)
		{
			if (bigNum < nums[i])
				bigNum = nums[i];
			if (smallNum > nums[i])
				smallNum = nums[i];
		}
		cout << bigNum << endl << smallNum << endl;
	*/
//Question 6
	int grid[3][3] = { {1, 2, 3} , {4, 5, 6} , {7 , 8 , 9} };

	for (int row = 0; row < 3; ++row)
	{
		for (int col = 0; col < 3; ++col)
		{
			cout << grid[3][3] << endl;

		}
	}
	system("pause");
	return 0;

	

}