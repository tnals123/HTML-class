//2. STL vector를 이용하여 두 개의 2x2 행렬을 생성하고 + 연산자를 오버로딩 하여 행렬의 덧셈을 구현한 뒤 연산자 << 를 오버로딩하여 2x2 행렬의 형태로 출력하라.
//
//행렬 vector 안에 행 vector가 있는 구조 등의 이중 벡터로 구현
//
//아래의 typedef 사용하여 간단히 표현 가능
//
//
//
//typedef vector<vector<int> > Matrix;
//
//typedef vector<int> Vec;
//
//
//
//행렬의 덧셈 : A + B = C일 경우
//
//C[i][j] = A[i][j] + B[i][j]
//
//즉 C[0][0] = A[0][0] + B[0][0] 6 = 1 + 5
//
//C[0][1] = A[0][1] + B[0][1] 8 = 2 + 6
//
//C[1][0] = A[1][0] + B[1][0] 10 = 3 + 7
//
//C[1][1] = A[1][1] + B[1][1] 12 = 4 + 8

#include <iostream>
#include <vector>
using namespace std;
vector<vector<int>>Maxtrix(vector<vector<int>>A, vector<vector<int>> B) {
	vector<vector<int>> C;
	for (int i = 0; i < A.size(); i++) {
		vector<int> asdf;
		for (int q = 0; q < A[0].size(); q++) {
			asdf.push_back(A[i][q] + B[i][q]);
		}
		C.push_back(asdf);
	}
	return C;
}
int main() {
	vector<vector<int>>A{ {1,2} }, vector<vector<int>> B{ {2,3} };
	vector<vector<int>> C = Maxtrix(A, B);
	for (int i = 0; i < C.size(); i++) {
		for (int q = 0; q < C[0].size(); q++) {
			cout << C[i][q] << " ";
		}
	}
}