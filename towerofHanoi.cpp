#include <iostream>
using namespace std;

void tower(int, char, char, char);

int main()
{
	int num;
	
	cout << "Number of the disk = ";
	cin>>num;
	cout << "The sequence of moves in ToH are : " << num << endl;
	tower(num, 'A', 'C', 'B');
}

void tower(int num, char frompeg, char topeg, char auxpeg)
{
	//base case
	if(num == 1)
	{
		cout << "Move disk 1 from peg " << frompeg << " to peg " << topeg <<endl;
		return;
	}
	tower(num - 1, frompeg, auxpeg, topeg);
	cout << "Move disk " << num << " from peg " << frompeg << " to peg " << topeg <<endl;
	tower(num - 1, auxpeg, topeg, frompeg);
}
