#include <iostream>
#include <vector>
using namespace std;
class chislo {
    public:
    int znachenie;  
    vector <int> cifri;
    bool sravn () {
        int sch;
        int D = cifri.size();
        for (int d = 1; d <= D; d++) {
                if (cifri[d] == cifri[d-1]) {
                    sch = sch + 1;
                }
            }
            if (sch == D) {
                return true;
            } else {return false;}
        }
};
int main() 
{
    try {
    long double l,r;
    cin >> l >> r;

    int n = r-l+1;
    vector <chislo> a(n);
    
    for (long double i = l; i <= r; i++) {
        a.push_back(a[i]);
        a[i].znachenie = i;
    }

    int sch_2;
    for (long double i = l; i <= r; i++) {
        while (a[i].znachenie != 0) {
            a[i].cifri.push_back(a[i].znachenie % 10);
            a[i].znachenie = a[i].znachenie/10;
        }
        
        if (a[i].sravn()) {
            sch_2 = sch_2 + 1;
        }
    }
    cout << sch_2 << "\n";
    if ((l<1)||(l>1000000000000000000)||(r>1000000000000000000)||(l>r)||(r<1)) {
        throw 1;
    }
    }
    catch (int h) {
        if (h==1) {
            cout <<"неверный формат входных данных"<< "\n";
            exit(EXIT_FAILURE);
        }
    }
    return 0;
}