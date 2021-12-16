// CMakeProject3.cpp: 定义应用程序的入口点。
//

#include "CMakeProject3.h"
#include  "CNet.h"
using namespace std;

int main()
{
	CNet * pnet = new CNet();
	pnet->m_nXPos = 1;
	auto result = pnet->Cac();
	cout << "Hello CMake." << result<< endl;
	return 0;
}
