/*Keith Pottratz
April 23, 2015
Using STL for Queues!*/

#include <iostream>
#include <fstream>
#include <istream>
#include <string>
#include <queue>
using namespace std;

struct mtype
{
	int num;
	string major;
};

void main()
{

	queue<mtype> m;
	ifstream inf;
	ofstream outf;
	mtype one;
	inf.open("q1.dat");
	outf.open("q1.ot");
	while (!inf.eof())
	{
		inf >> one.num >> one.major;
		m.push(one);
		
	}
	
	outf << "The number of elements in the Queue is : " << m.size() << endl; 
	outf << endl;
	outf << "The contents of the Queue is : " << endl;
	while (!m.empty())
	{
		one = m.front();
		outf << "  " << one.num << "   " << one.major << endl;
		m.pop();
	}
	system("pause");
}