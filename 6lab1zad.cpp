#include <iostream>
#include <vector>
using namespace std;

int main() {
    int index, num, index2, num2;
    int c = 2;

    vector<int> v = {7, 3, 1, -5, -2, 5, 2, 0, 10, 9};
//вывод вектора
    for (int i = 0; i < v.size(); i++) {
        cout << v[i] << " ";
    }
//находит индекс второго отрицательного числа и само это число    
    for (int sc = 0; sc < v.size(); sc++){
        while (c > 0){
            if (v[sc] < 0){
                index=sc;
                num=v[sc];
                c--;
                break;
            }else{
                break;
            }
        }
   }
    cout<<endl<<index;
    cout<<endl<<num;
    int len = v.size();
//находит индекс предпоследнего положительного числа и само это число 
    for (int sc1 = 0; sc1 < v.size() - 1; sc1++){
        while (len - 1 > 0){
            if (v[sc1] > 0){
                index2=sc1;
                num2=v[sc1];
                len--;
                break;
            }else{
                break;
            }
        }
    }
    cout<<endl<<index2;
    cout<<endl<<num2<<endl;

    v[index] = num2;
    v[index2] = num;
//вывод вектора   
    for (int i = 0; i < v.size(); i++) {
        cout << v[i] << " ";
    }
    return 0;
}
