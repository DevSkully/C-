#include<iostream>
#include<string>

using namespace std;

struct Room{
	string name;
	Room* North;
	Room* South;
	Room* East;
	Room* West;
};

typedef Room* RoomPtr;

class RoomManager{
	private:
		Room* head;
		int size=0;
		int index=0;
	
	public:
		//Constructor:
		RoomManager(){}
		RoomManager(int size){
			this->size = size;
		}

		//Create New Room
		RoomPtr NewRoom(const string& BuildingLevel)
		{
			//Creating new Room with malloc
			RoomPtr newRoom = new Room;
			
			newRoom->name = BuildingLevel + to_string(index);
			newRoom->North = NULL;
			newRoom->South = NULL;
			newRoom->East = NULL;
			newRoom->West = NULL;

			if (head == NULL){
				head = newRoom;
			}
		    
		    index++;
			return newRoom;
		}
		
		//Handling Doors Path
		void DoorsHandler(RoomPtr head){
			RoomPtr current = head;
			int connections = rand() % 4;
			// Print Probable Connections
            cout << connections << endl;

		}
		
		//Functions For Debgging:
		void PrintRoom()
		{
			while(!isEmpty()){
				
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
};
