//2. STL vector�� �̿��Ͽ� �� ���� 2x2 ����� �����ϰ� + �����ڸ� �����ε� �Ͽ� ����� ������ ������ �� ������ << �� �����ε��Ͽ� 2x2 ����� ���·� ����϶�.
//
//��� vector �ȿ� �� vector�� �ִ� ���� ���� ���� ���ͷ� ����
//
//�Ʒ��� typedef ����Ͽ� ������ ǥ�� ����
//
//
//
//typedef vector<vector<int> > Matrix;
//
//typedef vector<int> Vec;
//
//
//
//����� ���� : A + B = C�� ���
//
//C[i][j] = A[i][j] + B[i][j]
//
//�� C[0][0] = A[0][0] + B[0][0] 6 = 1 + 5
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