//#include <iostream>
//using namespace std;
//
//class Array {
//private:
//    int* arr;
//    int size;
//public:
//    Array(int idx) {
//        arr = new int[idx];
//        size = idx;
//    };
//    void setArray(int idx) {
//        for (int i = 0; i < idx; i++) {
//            cin >> arr[i];
//        }
//    }
//    void shift(int d) {
//        int* tmp = new int[size];
//        for (int i = 0; i < size; i++) {
//            tmp[i] = arr[i];
//        }
//        for (int i = 0; i < size; i++) {
//
//            if (i + d < size) {
//                arr[i + d] = tmp[i];
//            }
//            else {
//                arr[i + d - size] = tmp[i];
//            }
//        }
//    }
//
//    void hisf(int d) {
//        int* tmp = new int[size];
//        for (int i = 0; i < size; i++) {
//            tmp[i] = arr[i];
//        }
//        for (int i = 0; i < size; i++) {
//            if (i + d < size) {
//                arr[i + d] = tmp[i];
//            }
//            else {
//                arr[i + d - size] = temp[i];
//            }
//        }
//    }
//
//    void reverse(int i, int j) {
//        for (int k = 0; k < (i - j + 1) / 2; k++) {
//            int tmp = 0;
//            tmp = arr[i + k];
//            arr[i + k] = arr[j - k];
//            arr[j - k] = tmp;
//        }
//    }
//
//    void reverse(int i, int j) {
//        for (int k = 0; k < (j - i + 1) / 2; k++) {
//            int tmp = 0;
//            tmp = arr[i + k];
//            arr[i + k] = arr[j - k];
//            arr[j - k] = tmp;
//        }
//    }
//    // void reverse(int i,int j){
//    //     int* tmp=new int[size];
//    //     for(int n=0;n<size;n++){
//    //         tmp[n]=arr[n];
//    //     }
//    //     for(int k=0;k<j-i+1;k++){
//    //         arr[k+i]=tmp[j-k];
//    //     }
//    // }
//    void print() {
//        for (int i = 0; i < size; i++) {
//            cout << arr[i] << " ";
//        }
//        cout << endl;
//    }
//};
//
//int main() {
//    int N = 0, T = 0;
//    cin >> T >> N;
//    Array a1(N);
//    a1.setArray(N);
//    string str;
//    for (int i = 0; i < T; i++) {
//        cin >> str;
//        if (str == "shift") {
//            int d;
//            cin >> d;
//            a1.shift(d);
//
//        }
//        if (str == "reverse") {
//            int i, j;
//            cin >> i >> j;
//            a1.reverse(i, j);
//        }
//        if (str == "print") {
//            a1.print();
//        }
//    }
//
//    return 0;
//}