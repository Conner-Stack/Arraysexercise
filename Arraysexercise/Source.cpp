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
						/*int grid[3][3] = { {1, 2, 3} ,
											{4, 5, 6} ,
											{7 , 8 , 9} };
						for (int row = 0; row < 3; ++row)
						{
							for (int col = 0; col < 3; ++col)
							{
								cout << grid[row][col];
							}
							cout << endl;
						}*/


						//Question 7

			/*int days[29][5];
						
			int sumrow= 0;
			int sumcol = 0;
			int anumber = 0;*/
				//for (int i = 0; i < 29; i++)//loops through 29 iterations of the value of i add +1 starting from zero
				//{
				//	for (int j = 0; j < 5; j++)//loops through 5 iterations of the value of j 29 times adding 1 to j each loop, (should start over after re-entering from the outside loop)
				//	{
				//		
				//		days[i][j] = { anumber };
				//		
				//		

				//		sumrow += days[i][j];
				//	}

				//	cout << sumrow << endl;
				//	anumber++;
				//	sumrow = 0;
			
				//}

			/*for (int i = 0; i < 5; i++)
			{
				for (int j = 0; j < 29; j++)
				{
					days[j][i] = { anumber };

					sumcol += days[j][i];
				}
				cout << sumcol << endl;
				anumber++;
				sumcol = 0;
			
			}*/

			//question 8
			
			/*int personhealth[5] = { 100, 100, 100, 100, 100 };
			int damage = 40;
			int characters;
			
			cout << "input any number between 0 and 4 5 times" << endl;
			
			for (int i = 0; i < 5; i++)
			{
				cin >> characters;
				if(characters > 4 || characters < 0)
				cout
				switch (characters)
				{
				case 0:
					if (personhealth[0] > 0)
					{
						personhealth[0] -= damage;
							if (personhealth[0] < 0)
									personhealth[0] = 0;
					}
					else if (personhealth[0] <= 0)
						personhealth[0] = 0;
					break;
						
				case 1:
					if (personhealth[1] > 0)
					{
						personhealth[1] -= damage;
							if (personhealth[1] <= 0)
									personhealth[1] = 0;
					}
					else if (personhealth[1] <= 0)
						personhealth[1] = 0;
					break;
				case 2:
					if (personhealth[2] > 0)
					{
						personhealth[2] -= damage;
							if (personhealth[2] <= 0)
									personhealth[2] = 0;
					}
					else if (personhealth[2] <= 0)
						personhealth[2] = 0; 
					break;
				case 3:
					if (personhealth[3] > 0)
					{
						personhealth[3] -= damage;
						if (personhealth[3] <= 0)
								personhealth[3] = 0;
					}
					else if (personhealth[3] <= 0)
						personhealth[3] = 0;
					break;
				case 4:
					if (personhealth[4] > 0)
					{
						personhealth[4] -= damage;
						if (personhealth[4] <= 0)
								personhealth[4] = 0;
					}
					else if (personhealth[4] <= 0)
						personhealth[4] = 0;
					break;
				}
			}
			cout << personhealth[0] << endl << personhealth[1] << endl << personhealth[2] << endl << personhealth[3] << endl << personhealth[4] << endl;*/

//question 9
int alltotal = 0;
int dragondiet[3][7];
int allaverage = 0;
int singletotal = 0;
int singleavg = 0;
int leasteatenID;
int mosteatenID;
//this gives an assignment to all numbers in the dragondiet array
for (int dragon = 0; dragon < 3; dragon++)
{	
	//specifies which dragon the array is geared for
	if (dragon == 0)
		cout << "input kg per day for Tiny" << endl;
	else if (dragon == 1)
		cout << "input kg per day for Arsen" << endl;
	else if (dragon == 2)
		cout << "input kg per day for Frank" << endl;
	for (int day = 0; day < 7; day++)
	{
		int info;
		cin >> info;
		dragondiet[dragon][day] = info;
	//numbers of arrays are now stored
	}

}
int leasteaten = dragondiet[0][0];
int mosteaten = dragondiet[0][0];
//this is where we math.
for (int dragon = 0; dragon < 3; dragon++)
{
	for (int day = 0; day < 7; day++)
	{
		alltotal += dragondiet[dragon][day];
		//trying to get the ID of the dragon
		if (leasteaten > dragondiet[dragon][day])
			leasteaten = dragondiet[dragon][day];
	
		if (mosteaten < dragondiet[dragon][day])
			mosteaten = dragondiet[dragon][day];
	
		singletotal += dragondiet[dragon][day];
	}
	
	singleavg = singletotal / 7;
	singletotal = 0;
	cout << "average food eaten by dragon " << dragon << endl << singleavg << endl;
	singleavg = 0;
	
}
allaverage = alltotal / 7;
cout <<"average food eaten by all dragons" << endl << allaverage << endl;
cout << "least amount of food eaten by which dragon" << endl << "food eaten: " << leasteaten << endl;

system("pause");
	return 0;	
}