#include <iostream>
using namespace std;
 int main()
{int a,b,c;
cout<<"Enter a numbers\n";
cin>>a;
cout<<"Enter b numbers\n";
cin>>b;
cout<<"Enter c numbers\n";
cin>>c;
if (a>b>c)
	cout<<"a>b>c";

else if (a>c && c>=b)
	cout<<a<<">"<<c<<">="<<b;

else if (b>a && a>=c)
	cout<<b<<">"<<a<<">="<<c;

else if (b>c && c>=a)
	cout<<b<<">"<<c<<">="<<a;

else if (c>a && a>=b)
	cout<<c<<">"<<a<<">="<<b;

else if (c>b && b>=a)
	cout<<c<<">"<<b<<">="<<a;

else
	cout<<a<<"="<<b<<"="<<c;

}
