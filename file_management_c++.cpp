#include<iostream>
#include<fstream>
#include<cmath>
#include<string>
#include<time.h>


using namespace std;



int main() {


	cout << " ------------------------------------------wecome to filemanagemnt system c++-------------------------------" << endl << endl << endl;
	string pass, nam;
	string choice;
start:
	cout << " click 1 to signin or click 2 for signup : " << endl;
	cin >> choice;

	if (choice == "2") {
		system("cls");
		cout << "plz enter your data correctyle : " << endl << endl;

		cout << "=======================================you are creating an acount==================================== " << endl << endl;
		cout << "enter name here : " << endl;
		cin >> nam;
		cout << "enter your password here : " << endl;
		cin >> pass;
		/*const int l = pass.length();





		string asc;

		for (int i = 0; i < l; i++) {
			asc = asc + char(int(pass[i] + 2));
		}
		cout << endl;


		cout << endl;

		string ran;
		char ch[] = { 'a','b','c','d','e','f','g','h','i','j','k','l','m','n','o','p','q','r','s','t','u','v','w','x','y','z','@','#','*','&','!','^','(' };


		srand(time(0));
		for (int i = 0; i < l; i++) {
			ran = ran + ch[rand() % 31];
		}


		string div[50];
		for (int i = 0; i < l; i++) {
			div[i] = div[i] + asc.substr(i, 1);
		}


		cout << endl << endl;
		string d[50];
		for (int i = 0; i < l; i++) {
			d[i] = d[i] + ran.substr(i, 1);
		}
		string p;
		int lrg = l + l;
		string p2;
		for (int i = 0; i < lrg; i++) {
			p2 = p2 + div[i] + d[i];
		}*/
		ofstream n("user_n.txt", ios::app);
		n << nam + "\n";
		n.close();
		ofstream pop("password.txt", ios::app);
		pop << pass + "\n";
		pop.close();
		cout << "you have created a user and dont ever forget that data  (^~^) : " << endl << endl << endl;
		cout << "click 2 to  quit or click 1 to continue signing  : " << endl;
		char user_ch;
		cin >> user_ch;
		if (user_ch == '2') {
			cout << "bye have a great day " << endl;
			return 0;
		}
		goto signin;

	}
	else if (choice != "1" && choice != "2") {
		cout << "invalid fucntion try again plz : " << endl;
		goto start;
	}
signin:

	system("cls");

	cout << "--------------------------------------------welcome to sigin page-------------------------------------------- : " << endl;


	ifstream file, name;
	string decrement = "";
	string real_password = "";
	string real_name = "";

	cout << "enter your name : " << endl;
	cin >> real_name;
	cout << "enter your password : " << endl;
	cin >> real_password;

	string arr = "";
	string ar1 = "";






	file.open("password.txt");
	name.open("user_n.txt");

	//cout << "the name is : " << endl;
	//getline(name, ar1);
	//cout << "the password is : " << endl;
	//file >> arr;
	//int l = arr.length();
	//int d_l = l + l;
	//cout << endl;
	/*	for (int i = 0; i < l; i++) {
			decrement = decrement + div[i];

		}*/
	cout << endl;//
	cout << endl;
	cout << "your password was : " << endl;
	/*string final_decr;

	for (int i = 0; i < d_l; i += 2) {
		final_decr = final_decr + arr[i];
	}
	string real_decr;
	for (int i = 0; i < l; i++) {
		real_decr = real_decr + char(int(final_decr[i] - 2));
	}


	cout << ar1 << " " << real_decr;*/
	int lines = 0;
	int line = 0;

		/*int length = l;*/
		/*for (int i = 0; i < l; i += 2) {
			decr = decr + arr;
		}
		for (int i = 0; i < l; i++) {
			d_r = d_r + char(int(decr[i] - 2));
		}
		cout << d_r;*/
	


	bool ismatch = false;
	while (!file.eof())

	{
		getline(file, arr);
		if (real_password == arr) {
			ismatch = true;
			break;
		}
		lines++;

	}
	file.close();
	while (!name.eof())
	{
		getline(name, ar1);
		if (real_name == ar1) {
			ismatch = true;
			break;
		}
		line++;
	}
	name.close();
	cout << endl;

	if (ismatch == true) {
		cout << "user find by password or name (^~^)" << endl;
	}
	else {
		cout << "=====user not found----------------------------('_`) " << endl;
		cout << "enter 1 to try again and 2 to exit " << endl;
		char u_decision;
		cin >> u_decision;
		if (u_decision == '2') {
			cout << "bye have a good day : " << endl;
			return 0;
		}
		else {
			cout << "ivalid function plz can you try again : " << endl;
			system("cls");
			goto decision;
		}
		goto signin;
		system("cls");
	}
	cout << endl << endl;
	if (line == lines) {
		cout << "                                                 CONGRATS" << endl;
		cout << ": ------------------------------------------SUCCESFULLY LOGIN---------------------------------------------- : " << endl;
	}
	else {
		cout << "your data matches but not perfect" << endl;
		cout << " not succesfully login " << endl << endl << endl;
	decision:
		cout << "enter 1 to try again and 2 to exit " << endl;
		char user_decision;
		cin >> user_decision;
		if (user_decision == '2') {
			cout << "bye have a good day : " << endl;
			return 0;
		}
		else if (user_decision != '1' && user_decision != '2') {
			cout << "ivalid function plz can you try again : " << endl;
			system("cls");
			goto decision;
		}
		system("cls");
		goto signin;


	}

}
	
	
	




	

