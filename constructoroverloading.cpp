#include <iostream>
using namespace std;
class product{
public:
	product(int x,int y){
		pro=x*y;
	}
	product(float x, float y){
		pro=x*y;
	}
	product(char x, char y){
		pro=int(x)*int(y);
	}
	void display(){
		cout<<pro;
	}
};
int main(){
	product p1(1,2);
	product p1(3.2, 4.5)
	product p1(a, b);
	display.p1;
	return 0;
}