#include <iostream>
#include "unitlib.h"
using namespace std;

int main(){
    double m;
    int n = 7;
    cout << "可选的转换项目如下：" << endl;
    cout << "1）摄氏度转华氏度" << endl;
    cout << "2）华氏度转摄氏度" << endl;
    cout << "3）英尺转米" << endl;
    cout << "4）米转英尺" << endl;
    cout << "5）磅转千克" << endl;
    cout << "6）千克转磅" << endl;
    cout << "0）退出" << endl;
    while (n != 0) {
        cout << "输入数字：";
        cin >> n;
        switch (n){
            case 0: {
                return 0;
                break;
            }
            case 1: {
                cout << "请输入待转换数字：";
                cin >> m;
                cout << "结果为：" << C2F(m) << endl;
                break;
            }
            case 2: {
                cout << "请输入待转换数字：";
                cin >> m;
                cout << "结果为：" << F2C(m) << endl;
                break;
            }
            case 3: {
                cout << "请输入待转换数字：";
                cin >> m;
                cout << "结果为：" << Ft2M(m) << endl;
                break;
            }
            case 4: {
                cout << "请输入待转换数字：";
                cin >> m;
                cout << "结果为：" << M2Ft(m) << endl;
                break;
            }
            case 5: {
                cout << "请输入待转换数字：";
                cin >> m;
                cout << "结果为：" << Lb2Kg(m) << endl;
                break;
            }
            case 6: {
                cout << "请输入待转换数字：";
                cin >> m;
                cout << "结果为：" << Kg2Lb(m) << endl;
                break;
            }
            default: {
                cout << "请重新输入！";
                break;
            }
        }
    }
}