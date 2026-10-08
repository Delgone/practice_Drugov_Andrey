#include <iostream>
#include <new>

int main()
{
  int rows;
  int cols;
  
  if (!(std::cin >> rows >> cols) || rows <=0 || cols <= 0)
  {
    return 1;
  }

	try{
		int** matrix = new int*[rows];
		for (int i = 0; i < rows; i++)
		{
			matrix[i] = new int[cols];
		}

		for (int i = 0; i< rows; i++)
		{
			for (int j = 0; j < cols; j++)
			{
				if (!(std::cin >> matrix[i][j]))
				{
					return 1;
				}
			}
		}

		int** trans = new int*[cols];
		for (int i = 0; i < cols; i++)
		{
			trans[i] = new int[rows];
		}

		for (int i = 0; i< rows; i++)
		{
			for (int j = 0; j < cols; j++)
			{
				trans[j][i] = matrix[i][j];
			}
		}

		for (int i = 0; i < cols; i++)
		{
			for (int j = 0; j < rows; j++)
			{
				std::cout << trans[i][j] << " ";
			}
			std::cout << "\n";
		}

		delete[] matrix;
		delete[] trans;
	}catch(...){
		return 2;
	}
	return 0;
}	
