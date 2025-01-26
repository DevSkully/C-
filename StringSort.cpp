#include<iostream>

#include<unordered_map>
#include<functional>
#include<cstring>

using namespace std;

class StringSort {
	public:
		StringSort(){}
		// did you mean to make this a const char* for it to pass correctly shown in the example?
		// Options to do it :
		// to have sortOrder be like the input where it is a modified buffer
		// or have it const char* to let it pass...
		void SortLetters(char* input, char* sortOrder){
		// O(n^2) **Time complexity << sure?
		// Making 'sortOrder' into a modified buffer 

		for(int i=0; i<strlen(sortOrder); i++){
			for(int k=0; k<strlen(input);k++){
				if(sortOrder[i] == input[k]){
					cout << sortOrder[i];
				}
			}
		}
		cout << endl;
		}
};
