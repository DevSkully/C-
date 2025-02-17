#include<iostream>
#include<unordered_set>
#include<functional>

using namespace std;

class Unique{

	public:
		Unique(){}
		bool AllDigitsUnique(unsigned int number){
			//value use for return
			bool unique = true;

			// using a container I can easily and quickly determine if a number is repeating or not
			// getting the first digit and reducing the original number by 10 when i have yet to detect repititions 
			// 
			unordered_set<int> values;
			while(number>0){
				int digit = number % 10;
				// cout << digit << " ";
				if(values.find(digit) != values.end()){
					unique = false;
				}
				values.insert(digit);
				number/=10;
			}
			//cout << endl;
			return unique;
		}
		
		void Print(bool val){
			if(val){
				cout << "It is Unique :)";
			} else {
				cout << "It is not Unique :(";
			}
		}
};
