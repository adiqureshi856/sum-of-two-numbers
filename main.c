#include <stdio.h>
int main() {
	int r;
	printf("Enter radius");
	scanf("%d",&r);
	int area = 3.14 * r*r;
	printf("Area of Circle= %d",area);
	 getch();
	
	return 0;
}
#include <iostream>
using namespace std;
int main() {
	int r;
	cout<<"Enter radius";
	cin>>r;
	int area = 3.14 * r*r;
	cout<<"area of circle="<<area;
	 getch();
	return 0;
}
