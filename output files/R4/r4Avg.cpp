// main.cpp
//g++-4.7 -std=c++11 *.cpp will compile all files in working directory
//gcc-4.7 -std=c++11 *.cpp
//gcc -std=c++11 *.cpp
//
//gcc main.c -o main.out creates executable file
//run by ./.main.out
#include <iostream>
#include <sstream>
#include <fstream>
#include <math.h>
#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <stdexcept>
#include <vector>

using namespace std;

int main(){
    try{
        stringstream ss1, ss2;
	string filename1, filename2, suffix, sort, read;
	int  comps, comp_sum, n;
	double rt, rt_sum;
	vector<string> vec;

	for (int s = 0; s < 1; s++)//change to only loop once for testing purpose
	{
		switch (4)//manually change this for now because of time constraints
		{
		case 0:sort = "S";
			break;
		case 1:sort = "B";
			break;
		case 2:sort = "I";
			break;
		case 3:sort = "H";
			break;
		case 4:sort = "R";
			break;
		default:cout << "first loop wrong\n";
			break;
		}
		for (int i = 0; i < 3; i++)//iterates dec,inc,ran
		{
			rt_sum = 0;
			comp_sum = 0;
			rt = 0;
			comps = 0;
			switch (i)
			{
			case 0:suffix = "Dec";
				break;
			case 1:suffix = "Inc";
				break;
			case 2:suffix = "Ran";
				break;
			default:cout << "First loop went too long\n";
				break;
			}

			for (int i = 0; i <3; i++) {//goes through each power 10^2,10^3,10^4,10^5
				//needs to change to only go 1,2,3 so that it takes different runs
				//and averages them
				ifstream myfile;//input file
				ss2 << "out" << sort << suffix << 4 << ((i * 3) + 1) << ".txt";//create filename
				filename2 = ss2.str();
				cout << filename2 << endl;
				myfile.open(filename2);//create and open file

				while (myfile >> read) {//create a vector of items in file
					vec.push_back(read);
				}

				if (vec.size() >= 7)
				{
					stringstream convert(vec[2]);
					convert >> rt;
					stringstream convert2(vec[6]);
					convert2 >> comps;
				}
				rt_sum += rt;
				comp_sum += comps;
				vec.clear();
				myfile.close();
				cout << "done\n";
				ss2.str(string());
			}

			ofstream fs;//output file
			ss1 << "Average" << sort << suffix << ".txt";//create filename
			filename1 = ss1.str();
			cout << filename1 << endl;
			fs.open(filename1);//create and open file

			fs << "runtime " << rt_sum / 3 << "\n" << "# comparisons " << comp_sum / 3;

			//write to file here
			fs.close();
			cout << "done\n";
			ss1.str(string());
			rt = 0;
			comps = 0;
		}
	}
    }
    catch(exception &error){
        cerr << "Error: " << error.what() << endl;
    }
}
