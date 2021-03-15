#pragma once
#include <iostream>
using namespace std;

namespace Ss
{
	namespace asmd
	{
		void a()
		{
			int v1;
			int v2;
			cout << "oo+oo\n"; cin >> v1; cin >> v2;
			int v3 = v1 + v2;
			cout << "" << v1 << "+" << v2 << "=" << v3 << "\n";
		}
		void s()
		{
			int v1;
			int v2;
			cout << "oo-oo\n"; cin >> v1; cin >> v2;
			int v3 = v1 - v2;
			cout << "" << v1 << "-" << v2 << "=" << v3 << "\n";
		}
		void m()
		{
			int v1;
			int v2;
			cout << "oo¡¿oo\n"; cin >> v1; cin >> v2;
			int v3 = v1 * v2;
			cout << "" << v1 << "¡¿" << v2 << "=" << v3 << "\n";
		}
		void d()
		{
			int v1;
			int v2;
			cout << "oo¡Àoo\n"; cin >> v1; cin >> v2;
			int v3 = v1 / v2;
			cout << "" << v1 << "¡À" << v2 << "=" << v3 << "\n";
		}
	}
}