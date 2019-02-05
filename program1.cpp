#include <stdlib.h>
#include <stdio.h>
#include <vector>
#include <iostream>

using namespace std;

int main()
{

vector<int> v1={1,2,3,4,5};

for (int i = 0; i < 4; i++)
{
	v1.push_back(8);
}

for (int i=0; i < v1.size(); i++)
{
	cout << v1[i] << " ";
}

}
