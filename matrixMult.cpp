#include <iostream>
#define HEIGHT 3


int dotRow(int arrA[HEIGHT], int arrB[HEIGHT]){

	int retVal = 0;
	for (int i = 0; i < HEIGHT; ++i)
	{
		retVal += arrA[i] * arrB[i];
	}
	return retVal;
}


int main(){

	int a[HEIGHT][HEIGHT] = {{1,5,9},{6,7,8},{3,28,1}};
	int b[HEIGHT][HEIGHT] = {{1,5,9},{6,7,8},{3,28,1}};


	//////////////////////////////////////////////////



	//////////////////////////////////////////////////////////
	int flipped[HEIGHT][HEIGHT];

	for (int i = 0; i < HEIGHT; ++i)
	{
		for (int j = 0; j < HEIGHT; ++j)
		{
			flipped[j][i] = b[i][j];
		}
	}


	//////////////////////////////////////////////////////////


	//////////////////////////////////////////////////////////

	for (int i = 0; i < HEIGHT; ++i)
	{


		for (int j = 0; j < HEIGHT; ++j)
		{

			std::cout << dotRow(a[i], flipped[j]) << " ";

		}

		std::cout << "\n";	


	}

	///////////////////////////////////////////////////////

}