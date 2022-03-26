#include <iostream>
#include <string>

using namespace std;
string pd(float a,float b,float c){
	string t;
	if (a+b>c&&a+c>b&&b+c>a)
		 t = "yes";
	else
		 t = "no";
	return t;
}
int main(){
	cout << pd(3,4,5) << endl;
	return 0;
}
