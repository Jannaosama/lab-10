#include"theHeader.h"
#include<iostream>
#include<string>
#include<vector>
#include<fstream>
using namespace std;

int vertex;

int main()
{
    vector<vector<int>> array;
	string myText;
	ifstream Readfile("textlab10.txt");
	while (getline(Readfile, myText))
	{
		cout << myText<<endl;
        for (int i = 0; i < 10; i++)
        {
            for (int j = 0; j < 10; j++)
            {
                array[i][j] = stoi(myText);
            }
        }
	}
	cout << endl;

	Readfile.close();

    Edge E1;
    E1.source = array[5][5];
    E1.destination = array[6][5];

        InDirectedweightedGraph graphX (1);
        graphX.addEdge(E1);
	
}
