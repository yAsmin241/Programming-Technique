#include <iostream>
#include <string>
using namespace std;

void displayMainMenu ();
void addBook (string[], string[], int[], int[], int&);
void displayLibrary (string[], string[], int[], int);
void searchByTitle(string[], string[], int[], int);



const int MAX_BOOKS = 100;

int main (){
	
	int choice;
	int yearM[MAX_BOOKS];
	string titleM[MAX_BOOKS], authorM[MAX_BOOKS], search[MAX_BOOKS];
	int numBooks = 0;
	
	do{
		displayMainMenu();
			cout<<"Enter your choice: ";
			cin>>choice;
		
		cout<<endl;
		
		switch (choice){
			case 1 : if (numBooks < MAX_BOOKS){
						addBook(titleM, authorM, yearM, numBooks);
						break;
					}
					else{
						cout<<"Maximun books reached."<<endl;
						break;
					}
					
			case 2 : if (numBooks == 0){
						cout<<"No books in library."<<endl;
						break;
					}
					else{
						displayLibrary (titleM, authorM, yearM, numBooks);
		         		break;	
					}
					
			case 3 : searchByTitle(titleM, authorM, yearM, numBooks);
				 break;
				 
			case 4 : cout<<"Goodbye! "<<endl;
					 cout<<"-------------";
				 	 return 0;
		}
		
	}while(true);
	
}
	

void displayMainMenu(){
	cout<<"<<<<<Library Management System>>>>>"<<endl;
	cout<<"===================================="<<endl;
	cout<<"1. Add a Book"<<endl;
	cout<<"2. Display Library"<<endl;
	cout<<"3. Search by Title"<<endl;
	cout<<"4. Quit"<<endl;
	cout<<endl;
	
}

void addBook (string titleF[], string authorF[], int yearF[], int &numBooks){
	
	cin.clear();
	cin.ignore();
	
	cout<<"Enter book title: ";
	cin>>titleF[numBooks];
	
	cout<<"Enter author name: ";
	cin>>authorF[numBooks];
	
	cout<<"Enter publication year: ";
	cin>>yearF[numBooks];
	
	cout<<"\nBook added successfully! "<<endl;
	numBooks++;
	
	cout<<endl;
		
}

void displayLibrary (string titleF[], string authorF[], int yearF[], int numBooks){
	cout<<"<<<<<Library Contents>>>>"<<endl;
	cout<<"========================="<<endl;
	
	for (int i = 0; i<numBooks; i++){
		cout<<"Title: "<<titleF[i]<<endl;
		cout<<"Author: "<<authorF[i]<<endl;
		cout<<"Year: "<<yearF[i]<<endl;
		cout<<endl;
	}
	
}

void searchByTitle(string titleF[], string authorF[], int yearF[], int numBooks){
	
	string search;
	int index = numBooks + 1;
	
	do{
		cout<<"Enter the title to search"<<endl;
		cin>>search;
	}
	while (search.empty());
	
	cout<<endl;
	
	for (int i = 0; i<MAX_BOOKS; i++){
		if (search == book[i]){
			index = i;
			break;
		}
	}
	
	if (index == numBooks + 1){
		cout<<"Book is not found!";
	}
	else {
		cout<<"Books found: "<<endl;
		cout<<"=============="<<endl;
		cout<<"Title: "<<titleF[index]<<endl;
		cout<<"Author: "<<authorF[index]<<endl;
		cout<<"Year: "<<yearF[index]<<endl;
		cout<<"Index book found: "<<index
	}
	
	cout<<endl;
	
	
}


