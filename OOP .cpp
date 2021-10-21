#include <stdio.h>
#include <iostream>

using namespace std;

// here structure has its own functions 
class rectangle {
    public:
    int length;
    int breath;

    void initialize(int l, int b){
        length = l;
        breath = b;
    };
    int area(){
        return length*breath;
    };
    int parameter(){
        return 2*(length + breath);
    };
};

// main function will only call out other fuctions
int main(){
    rectangle r;
    
    int len,bre;
    printf("\nEnter length: ");
    scanf("%d",&len);
    printf("\nEnter breath: ");
    scanf("%d",&bre);
    
    r.initialize(len, bre);
    int area01 = r.area();
    int para01 = r.parameter();
    printf("\nArea: %d\nParameter: %d",area01,para01);

    return 0;
}
