#include <iostream>
using namespace std;

class Cla
{
public:
	void getHello() { cout << "Hello world!" << endl; }
};

int main()
{
	Cla* cla = new Cla;
	cla->getHello();
}