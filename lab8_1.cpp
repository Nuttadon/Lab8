#include <iostream>
using namespace std;
int main() {
    int a  =  20,b = 30,c = 4 ;
    double output;

    output= a-(double)b/c;//ทำก่อน=เปลี่ยนก่อน หรือ ถ้าเปลี่ยนส่วนที่ทำก่อนเป็นdoubleทั้งสมการจะกลายเป็นdouble
    cout << "output:" << output << "\n";
    return 0;
}
