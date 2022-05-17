#include <iostream>

using namespace std;

int main()
{
for(int q = 1; q < 10; q++){
    for(int w = 1; w < 10; w++){
        for(int e = 1; e < 10; e++){
            for(int r = 1; r < 10; r++){
                for(int t = 1; t < 10; t++){
                    for(int y = 1; y < 10; y++){
                        for(int u = 1; u < 10; u++){
                            for(int i = 1; i < 10; i++){
                                for(int o = 1; o < 10; o++){
                                    if ((q+w+e==15) && (r+t+y==15) && (u+i+o==15) && (q+r+u==15) && (t+w+i==15) && (e+y+o==15) && (q+t+o==15) && (u+t+e==15)){
                                        cout << q << ' ' << w << ' ' << e << '\n';
                                        cout << r << ' ' << t << ' ' << y << '\n';
                                        cout << u << ' ' << i << ' ' << o << '\n';
                                        cout << "-----" << '\n';
                                        }
                    }}}}}}}}}
}