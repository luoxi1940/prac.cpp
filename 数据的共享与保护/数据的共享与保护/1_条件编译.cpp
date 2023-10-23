#include <iostream>
using namespace std;
#define MAX(a,b) (a>=b?a:b)
void  main()
{
	int  a, b;
	cin >> a >> b;
#ifdef   MAX
	cout <<MAX(a,b) << endl;
#else
	cout <<a<=b?a:b<< endl;
#endif
}