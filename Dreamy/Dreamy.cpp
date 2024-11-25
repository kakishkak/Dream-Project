#include <iostream>
#include <conio.h>

using namespace std;

int main() {
	cout << "sss";
	string** fileManager = new string * [10];
	for (int i = 0; i < 10; i++)
	{
		fileManager[i] = new string[10];
	}
	fileManager[0][0] = "Disk:C";
	fileManager[1][0] = "Disk:D";
	fileManager[0][3] = "Shit from diskC";
	fileManager[1][3] = "Shit from diskC";
	fileManager[2][3] = "Shit from diskC";
	int posArrX = 1;
	int posArrY = 0;
	while (true) {
		fileManager[posArrY][posArrX] = "<-";
		for (int i = 0; i < 10; i++)
		{
			for (int j = 0; j < 10; j++)
			{
				//if(lenght(fileManager[i][j])<1)
				cout << fileManager[i][j];
			}
			cout << endl;
		}
		int key = _getch();
	}

}

//#include <iostream>
//#include <filesystem>
//#include <fstream>
//
//using namespace std;
//namespace fs = std::experimental::filesystem;
//
//int main() {
//    ofstream file;
//    fs::create_directory("MyFolder");
//
//}


//#include <iostream>
//#include <fstream>
//
//int main() {
//	fstream file("loh",ios::app);
//}






//#include <iostream>
//#include <conio.h>
//
//using namespace std;
//
//int main() {
//    cout << "Press a key (Esc to exit):" << endl;
//
//    while (true) {
//        int key = _getch(); // Read the first character
//        if (key == 224) { // Check if it is a special key
//            key = _getch(); // Read the second character
//            switch (key) {
//            case 72:
//                cout << "Arrow up" << endl;
//                break;
//            case 80:
//                cout << "Arrow down" << endl;
//                break;
//            case 75:
//                cout << "Arrow left" << endl;
//                break;
//            case 77:
//                cout << "Arrow right" << endl;
//                break;
//            default:
//                cout << "Other special key: " << key << endl;
//            }
//        }
//        else if (key == 27) { // Esc
//            cout << "Exiting..." << endl;
//            break;
//        }
//        else {
//            cout << "You pressed: " << char(key) << endl;
//        }
//    }
//
//    return 0;
//}










//#define _CRT_SECURE_NO_WARNINGS
//#include <iostream>
//#include <fstream>
//#include <string>
//
//using namespace std;
//
//
//class User {
//    string name;
//    int age;
//    string surname;
//public:
//    User() {
//        name = "Boryslav";
//        age = 222;
//        surname = "GAGA";
//    }
//
//    User(string name, int age, string surname) {
//        this->name = name;
//        this->age = age;
//        this->surname = surname;
//    }
//
//    void setName(string name) {
//        this->name = name;
//    }
//
//    void setSurname(string surname) {
//        this->surname = surname;
//    }
//
//    void setAge(int age) {
//        this->age = age;
//    }
//
//    string getName() {
//        return this->name;
//    }
//
//    string getSurname() {
//        return this->surname;
//    }
//
//    int getAge() {
//        return this->age;
//    }
//
//    void WriteUserToFile() {
//        ofstream outFile("users.txt", ios::app);
//        outFile << this->name << endl;
//        outFile.close();
//
//        ofstream outThirdFile("surname.txt", ios::app);
//        outThirdFile << this->surname << endl;
//        outThirdFile.close();
//
//        ofstream outSecondFile("age.txt", ios::app);
//        outSecondFile << this->age << endl;
//        outSecondFile.close();
//    }
//};
//
//
//class Group {
//    User* user;
//    int amountOfUsers;
//public:
//    Group() {
//        ifstream inFile("users.txt");
//        string line;
//        int counter = 0;
//        while (getline(inFile, line)) {
//            counter++;
//            cout << line << endl;
//        }
//        amountOfUsers = counter;
//        user = new User[amountOfUsers];
//    }
//
//    void ReadAllUsersFromFile() {
//        string* usersName = new string[amountOfUsers];
//        string* usersSurname = new string[amountOfUsers];
//        int* usersAge = new int[amountOfUsers];
//
//        ifstream inFile("users.txt");
//        string line;
//        int counter = 0;
//        while (getline(inFile, line)) {
//            usersName[counter] = line;
//            //bookList[i] = new char[strlen(timeArr[i]) + 1];
//            counter++;
//            cout << line;
//        }
//        inFile.close();
//
//        ifstream inThirdFile("surname.txt");
//        counter = 0;
//        while (getline(inThirdFile, line)) {
//            usersSurname[counter] = line;
//            counter++;
//        }
//        inThirdFile.close();
//        counter = 0;
//        ifstream inSecondFile("age.txt");
//        while (getline(inSecondFile, line)) {
//            usersAge[counter] = stoi(line);
//            counter++;
//        }
//        inSecondFile.close();
//
//        for (int i = 0; i < amountOfUsers; i++) {
//            user[i].setName(usersName[i]);
//            user[i].setSurname(usersSurname[i]);
//            user[i].setAge(usersAge[i]);
//        }
//
//        delete[] usersSurname;
//        usersSurname = nullptr;
//
//        delete[] usersName;
//        usersName = nullptr;
//
//        delete[] usersAge;
//        usersAge = nullptr;
//    }
//
//    void PrintAllUsers() {
//        for (int i = 0; i < amountOfUsers; i++) {
//            cout << "UserName: " << this->user[i].getName() << endl;
//            cout << "UserSurname: " << this->user[i].getSurname() << endl;
//            cout << "Age: " << this->user[i].getAge() << endl;
//        }
//    }
//};
//
//int main()
//{
//
//    User obj = User("Ivan", 10, "GAGAsurname");
//    obj.WriteUserToFile();
//
//    Group group;
//    //group.ReadAllUsersFromFile();
//    //group.PrintAllUsers();
//}

//#include <iostream>
//#include <string.h>
//
//using namespace std;
//
//
//
//void main() {
//	int** arr = new int* [10];
//	for (int i = 0; i < 10; i++)
//	{
//		arr[i] = new int[20];
//	}
//	for (int i = 0; i < 10; i++)
//	{
//		for (int j = 0; j < 20 ; j++)
//		{
//			arr[i][j] = 1;
//			cout << arr[i][j];
//		}
//		cout << endl;
//	}
//}






//#include <iostream>
//#include <string.h>
//
//using namespace std;
//
//int main()
//{
//
//	int amountOfBooks = 4;
//	char** bookList = new char* [amountOfBooks];
//	for (int i = 0; i < amountOfBooks; i++)
//	{
//		bookList[i] = new char[10];
//		cout << "Write name of book " << i + 1 << ": ";
//		cin.getline(bookList[i], 10);
//	}
//	cout << "Your list: " << endl;
//	for (int i = 0; i < amountOfBooks; i++)
//	{
//		cout << bookList[i] << endl;
//	}
//
//
//	while (true) {
//		cout << "1 - Add a book\n2 - Rename book\n3 - Delete book\n4 - Exit application\n5-Show all books\n: ";
//		int result;
//		cin >> result;
//		cin.ignore();
//
//
//
//
//		if (result == 1) {
//			char** timeArr = new char* [amountOfBooks]; //временный массив
//			for (int i = 0; i < amountOfBooks; i++)
//			{
//				timeArr[i] = new char[strlen(bookList[i]) + 1];			 //
//																		 //
//																		 //
//				for (int j = 0; j < strlen(bookList[i]) + 1; j++)		 //
//				{														 //перезаписывание
//					timeArr[i][j] = (char)bookList[i][j];				 //
//				}														 //
//				delete[] bookList[i];									 //
//				bookList[i] = nullptr;									 //
//
//			}
//			delete[] bookList;
//			bookL  ist = nullptr;
//
//			amountOfBooks++;											   //
//			bookList = new char* [amountOfBooks];						   //
//			for (int i = 0; i < amountOfBooks - 1; i++)					   //
//			{															   //
//				bookList[i] = new char[strlen(timeArr[i]) + 1];			   //
//																		   //
//																		   //опять перезаписываем
//				for (int j = 0; j < strlen(timeArr[i]) + 1; j++)		   //
//				{														   //
//					bookList[i][j] = (char)timeArr[i][j];				   //
//				}														   //
//				delete[] timeArr[i];									   //
//				timeArr[i] = nullptr;									   //
//			}
//			delete[] timeArr;
//			timeArr = nullptr;
//
//			bookList[amountOfBooks - 1] = new char[10];
//			cout << "Write your book: ";
//			cin.getline(bookList[amountOfBooks - 1], 10);
//			cout << endl;
//			cout << "Your list: " << endl;
//			for (int i = 0; i < amountOfBooks; i++)
//			{
//				cout << bookList[i] << endl;	//выводим массив
//			}
//			cout << endl;
//		}
//
//
//		else if (result == 2) {
//			int numberBook;
//			char* newName = new char[10];
//			cout << "Write the number of book you want to rename: ";
//			cin >> numberBook;
//			cout << "Write your new name: ";
//			cin >> newName;
//			delete[] bookList[numberBook - 1];
//			bookList[numberBook - 1] = nullptr;									//
//			bookList[numberBook - 1] = new char[strlen(newName) + 1];			//перезаписываем новое имя
//			bookList[numberBook - 1] = newName;									//
//			cout << endl;
//			cout << "Your list: " << endl;
//			for (int i = 0; i < amountOfBooks; i++)
//			{
//				cout << bookList[i] << endl;
//			}
//			cout << endl;
//		}
//
//
//		else if (result == 3) {
//			if (amountOfBooks - 1 < 0) {
//				cout << "i cant";
//				continue;
//			}
//			else {
//				int numberBook;
//				cout << "Write the number of book you want to delete: ";
//				cin >> numberBook;
//				amountOfBooks--;// уменьшаем количество книг
//				int time = 0;
//				char** timeArr = new char* [amountOfBooks];// временный массив 
//				for (int i = 0; i < amountOfBooks + 1; i++)
//				{
//					if (i == numberBook - 1) {
//						continue;
//					}
//					else {
//						timeArr[time] = new char[strlen(bookList[time]) + 1];	   //
//						for (int j = 0; j < strlen(bookList[i]) + 1; j++)		   //
//						{														   //
//							timeArr[time][j] = (char)bookList[i][j];			   //записывем в временный массив
//						}														   //
//						delete[] bookList[time];								   //
//						bookList[time] = nullptr;								   //
//						time++;													   //
//					}
//				}
//				delete[] bookList;
//				bookList = nullptr;
//
//				bookList = new char* [amountOfBooks];
//				for (int i = 0; i < amountOfBooks; i++)
//				{
//					bookList[i] = new char[strlen(timeArr[i]) + 1];				   //
//					for (int j = 0; j < strlen(timeArr[i]) + 1; j++)			   //
//					{															   //
//						bookList[i][j] = (char)timeArr[i][j];					   //записываем обратно
//					}															   //
//					delete[] timeArr[i];										   //
//					timeArr[i] = nullptr;										   //
//				}
//				delete[] timeArr;
//				timeArr = nullptr;
//				cout << endl;
//				cout << "Your list: " << endl;
//				for (int i = 0; i < amountOfBooks; i++)
//				{
//					cout << bookList[i] << endl;
//				}
//			}
//			cout << endl;
//		}
//
//
//		else if (result == 4) {
//			cout << "goodbye";
//			break;
//		}
//
//
//		else if (result == 5) {
//			cout << endl;
//			cout << "Your list: " << endl;
//			for (int i = 0; i < amountOfBooks; i++)
//			{
//				cout << bookList[i] << endl;
//			}
//			cout << endl;
//		}
//	}
//}
