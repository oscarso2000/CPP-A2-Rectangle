#include <iostream>
using namespace std;

class Rectangle{
	public:
		Rectangle(){
			mHeight = 0;
			mWidth = 0;
		}
		void setDimensions(int width, int height){
			if (width < 0){
				width = 0;
			}
			if (height < 0){
				height = 0;
			}
			mWidth = width;
			mHeight = height;
		}
		int area(){
			return mWidth*mHeight;
		}
		int circumference(){
			return  2*(mWidth+mHeight);
		}
		void print(){
			cout<<"Rectangle: ("<< mWidth << ","<< mHeight << ")" <<endl;
		}
	private:
		int mWidth;
		int mHeight;
};

int main(int argc, char *argv[]){
	Rectangle r1;
	r1.print();
	int w;
	int h;
	cout << "Enter a width: ";
	cin >> w;
	cout <<"Enter a height: ";
	cin >> h;
	r1.setDimensions(w,h);
	r1.print();
	cout << "Area is: " << r1.area() << endl;
	cout << "Circumference is: " << r1.circumference() <<  endl;
}
