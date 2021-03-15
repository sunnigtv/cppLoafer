#pragma once
#include <iostream>
#include <fstream>
using namespace std;

namespace Ss //Ss
{
	namespace login //Ss::login
	{
		char id;
		char ps;
		void login()
		{
			char ids;
			char psa;
			ifstream log("login.dat");
			log >> id >> ps;
			cout << "Login\n";
			cout << "id:"; cin >> ids;
			cout << "ps:"; cin >> psa;
			if (ids == id)
			{
				if (psa == ps)
				{
					cout << "yes";
				}
				else
				{
					cout << "no";
					return;
				}
			}
			else
			{
				cout << "no";
				return;
			}
		}
		void signup()
		{
			cout << "sign up\n";
			cout << "id:"; cin >> id;
			cout << "password:"; cin >> ps;
			ofstream log("login.dat");
			log<< id << " " << ps;
			log.close();
		}
	}
}