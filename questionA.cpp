#include <iostream>
#include <fstream>
#include <cstdlib>
#include <vector>
#include <algorithm>
#include <iomanip>
using namespace std;
int main(){
	ifstream inFile("file.in", ios::in);
	if(!inFile){
		cerr << "Failed opening" << endl;
		exit(1);
	}
	int numberOfCow;
	inFile >> numberOfCow;

	vector<int>cow(numberOfCow);
	for(int i=0; i<numberOfCow; ++i){
		inFile >> cow.at(i);
	}
	
	sort(cow.begin(), cow.end());
	
	int sum = 0;
	for(int term = 1; term <= 5; ++term){
		sum += cow.at(numberOfCow - term);
	}
	cout << sum << endl;
	return 0;
}

