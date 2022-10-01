#include <iostream>

using namespace std;

int tilesways(int x){
    if (x==0)
    {
        return 0;
    }
    if (x==1)
    {
        return 1;
    }
    
    return tilesways(x-1) + tilesways(x-2);

}
int main (){
    cout<<tilesways(4)<<endl;


    return 0;
}