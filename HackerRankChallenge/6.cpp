#include<iostream>
using namespace std;

void update(int* a,int* b) {
    
    int sum,diff;
    sum = *a + *b;
    diff = abs(*a - *b);
    *a = sum;
    *b = diff;
    
}
int main() {
  
    int a,b;
    cin>>a>>b;
    update(&a,&b);
    cout<<a<<endl<<b;
    
}
