#include <iostream>
#include <vector>
using namespace std;

int main() {
    
    int n,v_min,v_max;
    cout<<"Входные данные:"<<endl;
    cout<<"n=";
    cin>>n;
    cout<<"v_min=";
    cin>>v_min;
    cout<<"v_max=";
    cin>>v_max;
    cout<<endl;
    
    int index, num, index2, num2;
    int c = 2;
    
    cout<<"Исходный вектор:"<<endl;
    
    vector<int> v(n);
    
    for (auto& it : v)
        cin >> it;
    for(auto& i:v)
    {
        cout<<i;
    }

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
    cout<<endl<<endl<<"Выходные данные: "<<endl<<"n_second_otr="<<index + 1<<" "<<"second_otr="<<num;
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
    cout<<endl<<"n_predp_pol="<<index2 + 1<<" "<<"predp_pol="<<num2<<endl;
    v[index] = num2;
    v[index2] = num;
//вывод вектора   
    cout<<endl<<"Выходной вектор: "<<endl;
    for (int i = 0; i < v.size(); i++) {
        cout << v[i] << " ";
    }
    return 0;
}
