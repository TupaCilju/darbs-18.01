//#include <iostream>
//using namespace std; 
//
//int main()
//{
//	
//		int i = 0;
//		do {
//
//			i++;
//
//			cout << i * i * i << endl;
//			while (i < 10);
//		}
//		return 0; 
//}
//
//	string username = "Vlados", ul;
//	do {
//		i++;
//		cin >> ul;
//		if (ul == username) { exit(0); }
//	} while (i <= 1);
//	cout << "out of attempts";
//	return 0;


	//}*/
//
//int main() {
//	string myname;
//
//
//	do {
//		cout << "Enter my name " << endl;
//		cin >> myname;
//		if (myname == "no") { cout << "yes!"; };
//	} while (myname != "Vadims");	return 0;
//}
//

//#include <iostream>
//using namespace std;
//bool isNumber(string s)
//{
//	for (int i = 0; i < s.length(); i++)
//		if (isdigit(s[i]) == false)
//			return false;
//
//	return true;
//}
//int main() {
//	// Local variable declaration:
//	string myname;
//
//	//do loop execution
//
//	do 
//	{
//
//		cout << "Enter my name" << endl;
//		cin >> myname;
//		if (isNumber(myname)) { cout << "That is a number!"; };
//
//	} while (myname != "Vadims");
//
//	return 0;
//
//}
//		

//#include <iostream>
//using namespace std; 
//
//double loopFib(double number)
//{
//	double temp = 0, value1 = 0, value2 = 1;
//
//	if (number == 0) return value1;
//	if (number == 1) return value2; 
//
//	for (int count = 2; count <= number; count++)
//	{
//		temp = value2;
//		value2 = value2 + value1;
//		value1 = temp;
//
//	}
//	return value2;
//
//}


#include <iostream>
using namespace std;
int main() {

	string myname, password;

	do {

		cout << "Enter the password" << endl;

		cin >> myname, password;

		if (password == "no") { cout << "yes!"; };

	} while (myname != "Vadims");

	return 0;

}