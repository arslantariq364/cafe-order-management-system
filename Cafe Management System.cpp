#include<iostream>
#include<string>
using namespace std;


class Node{
	public:
		string name;
		string cust;
		int id;
		float price;
		Node* next;
		
		Node(string name,string cust,int id,float price){
			this->name=name;
			this->cust=cust;
			this->id=id;
			this->price=price;
			next=NULL;
		}
		
};

class Queue{
	private:
		int ide;
		Node *front;
		Node *rear;
	public:	
		Queue(){
			ide=0;
			front=rear=NULL;
			
		}
		
		void Additems(int id,string cust){
			string name;
			
			float price;
			
			if(id==1){
				name="karahi";
			
				price=500;
			
			}
			if(id==2){
				name="Biryani";
				
				price=600;
			
			}
			if(id==3){
				name="Kabli Pulao";
				
				price=350;
				
			}
			if(id==4){
				name="Bev Coca Cola";
				
				price=90;
			
			}
			if(id==5){
				name="Bev Pepsi";
				price=110;
				
			}
	            ide++;		
				Node *newnode=new Node(name,cust,ide,price);
				if(!front){
					front=rear=newnode;
				}
				else{
					rear->next=newnode;
					rear=newnode;
				}
			
			
		}
		
		void processed(){
			if(!front){
				cout<<"\nNo order for completion...\n";
				return;
			}
			
			else{
				Node *tmp=front;
				cout<<"\n\n\nThe order is completed with following details:\n";
				cout<<"Name of item :"<<tmp->name<<endl;
				cout<<"Name of customer :"<<tmp->cust<<endl;
				cout<<"Id of the order :"<<tmp->id<<endl;
				cout<<"Price Of the item :"<<tmp->price<<endl;
				cout<<"\nOrder processed successfully...\n";
				front=front->next;
				delete tmp;
			}
		}
		
		void Orders(){
			if(!front){
				cout<<"\nNo orders to show...\n";
				return;
			}
			Node *tmp=front;
			while(tmp!=NULL){
				cout<<"\n\n\nName of item :"<<tmp->name<<endl;
				cout<<"Name of customer :"<<tmp->cust<<endl;
				cout<<"Id of the order :"<<tmp->id<<endl;
				cout<<"Price Of the item :"<<tmp->price<<endl;
				tmp=tmp->next;
			}
		}
};
int main(){
	Queue q;
	string name;
	int choice,choicee;
do{
	
	cout<<"\n\n\n..CAFE MENUE..\n";
	cout<<"1.Adding Order\n";
	cout<<"2.Removing Processed Orders\n";
	cout<<"3.Showing Present Orders\n";
	cout<<"4.For Exit\n";
	cout<<"Enter your choice :\n";
	cin>>choicee;

	switch(choicee){
		case 1:
			cout<<"\n\n\n..Available Food Items..\n";
			cout<<"1.Karahi       -500 PKR\n";
			cout<<"2.Biryani      -600 PKR\n";
			cout<<"3.Kabli Pulao  -350 PKR\n";
			cout<<"4.Coca Cola    -90  PKR\n";
			cout<<"5.Pepsi        -110 PKR\n";
			cout<<"Enter your Item for order:\n";
			cin>>choice;
			switch(choice){
				
				case 1:
					cout<<"Enter your name:\n";
					cin>>name;
					q.Additems(1,name);
					break;
				case 2:	
				    cout<<"Enter your name:\n";
					cin>>name;
					q.Additems(2,name);
					break;
				case 3:
					cout<<"Enter your name:\n";
					cin>>name;
					q.Additems(3,name);
					break;
				case 4:
					cout<<"Enter your name:\n";
					cin>>name;
					q.Additems(4,name);
					break;
				case 5:
				    cout<<"Enter your name:\n";
					cin>>name;
					q.Additems(5,name);	
					break;
				default:
				    cout<<"Invalid Entry\n";
					break;	
			}
			break;
			
			case 2:
				q.processed();
				break;
			case 3:
			    q.Orders();
				break;
			case 4:
			    cout<<"\nExiting";
				break;
			default:
				cout<<"\nInvalid Entry";
				break;
						}
      }	while(choicee!=4);
	
}