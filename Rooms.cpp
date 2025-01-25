#include<iostream>
#include<string>

using namespace std;

struct Room{
	string name;
	Room North;
	Room South;
	Room East;
	Room West;
}RoomPtr;

class Building{
	private:
		Room head;
		int size=0;
	
	public:
		//Constructor:
		Building(){}
		Builidin(int size){
			this.size = size;
		}

		//Create New Room
		RoomPtr* NewRoom(string name)
		{
			//Creating new Room with malloc
			RoomPtr* newRoom = new RoomPtr;
			
			newRoom->name = '0'+to_string(index);
			newRoom->North = NULL;
			newRoom->South = NULL;
			newRoom->East = NULL;
			newRoom->West = NULL;

			if (head == null)
			{
				head = newRoom;
				return head;
			}
		
			return newRoom;
		}
		
		//Handling Doors Path
		void Doors(RoomPtr* head){
			
		}
		
		//Functions For Debgging:
		void PrintRoom()
		{
			while(!isEmpty))
			{
				
			}
			cout << endl;
		}

		int RoomSize()
		{
			int size=0;
			while(isEmpty())
			{
				if(!isEmpty())
				{
					size++;
				}	
			}
			return size;
		}

		bool isEmpty()
		{
			if(head!=NULL)
			{
				return 1;
			}
			return 0;
		}
}
