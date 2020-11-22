#include <iostream>

int det(int get[2][2]){

	int det = (get[0][0] * get[1][1]) - (get[0][1] * get[1][0]);
	return det;

}

int main(){


	int a[3][3] = {{1,5,9},{6,7,8},{3,28,1}};

	int a1[2][2] = {{a[1][1], a[1][2]}, {a[2][1], a[2][2]}};
	int a2[2][2] = {{a[1][0], a[1][2]}, {a[2][0], a[2][2]}};
	int a3[2][2] = {{a[1][0], a[1][1]}, {a[2][0], a[2][1]}};

	int det3x3 = (a[0][0] * det(a1))  +( (-1 *a[0][1]) * det(a2)) +   (a[0][2] * det(a3)) ;


	std::cout << det3x3;
}