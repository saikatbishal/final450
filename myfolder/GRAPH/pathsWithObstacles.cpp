#include <vector>
#include <iostream>

using namespace std;
const unsigned int M = 1000000007;
int numPaths(vector<vector<int>> warehouse)
{
	
	int rows = warehouse.size(), cols = warehouse[0].size();
	vector<vector<int>> paths(rows, vector<int>(cols, 1));
	if (warehouse[0][0] == 1)
		paths[0][0] = 1;
	for(int i = 1; i < rows; i++)
	{
		if (warehouse[i][0] == 1)
			paths[i][0] = paths[i-1][0];
	}
	for(int j = 1; j < cols; j++)
	{
		if (warehouse[0][j] == 1)
			paths[0][j] = paths[0][j - 1];
	}
	
	for(int i = 1; i < rows; i++)
	{
		for(int j = 1; j < cols; j++)
		{
			if (warehouse[i][j] == 1)
				paths[i][j] = paths[i - 1][j] +
							paths[i][j - 1];
		}
	}
	return paths[rows - 1][cols-1];
}
int main()
{
vector<vector<int>> warehouse = { { 1,1,1,1 },
							{ 1,1,1,1 },
							{ 1,1,1,1 } };
							
cout << numPaths(warehouse)%M << " \n";											
}
