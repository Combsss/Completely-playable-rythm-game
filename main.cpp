

#include <bits/stdc++.h>
using namespace std;

//Complex numbers headers + macros
typedef complex<int> vect;
#define X real()
#define Y imag()

int main(){



	//Complex numbers as vectors: Declaration
	vect p1 = {4,2};
	vect p2 = {3, 6};
	cout << p1.X << " " << p1.Y << " or " << p1 << endl;
	//Without macros
	complex<int> pp = {4, 2};
	int r = real(pp);
	int i = imag(pp);

	//Note that complex numbers cannot be changed
	/*
	 * p1.X = 5; is ILLEGAL!
	 */

	//Functions

	//Dot product
	(conj(p1) * p2).X;

	//Cross product
	(conj(p1) * p2).Y;

	//Vector addition/subtraction
	vect p3 = p1+p2;
	p3 = p1-p2;

	//Scalar multiplication/division
	p3 = 8*p1;
	p3 = p2/8;
	//Visit this page for more functions: https://codeforces.com/blog/entry/22175 or https://cplusplus.com/reference/complex/
	//Mar 5

	//More functions
	vect func = {1, 1};
	vect hey = polar(func);
	int degree = arg(func); //Returns degree of the vector in respected to the x axis *in radians
	int length = abs(func);

	//Stuff with Cross product
	//*Cross product of line A and B will be 0 if A is in the same direction as B
	//Negative if B is right of A, Positive if B is left of A
	//Determine weither a point is on the left or right side of a line
	string cross = (conj(p1)*p2).Y > 0)? "left":"right";




}
