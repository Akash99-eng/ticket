/*code of discount from total amount..
5 friends want to go any where and buy tickets
the discount offer is the % of age of that friend whoese are youngest discount from total amount */
#include <iostream>
using namespace std;

int main() {
    int ages[5],location=0;
    int i;

    for (int i = 0; i < 5; ++i) {
        cin >> ages[i];
    }
    //your code goes here
    for(i=1;i<5;i++)
    if(ages[i]<ages[location])
    location=i;
    {
    float x=50*ages[location ]/100.0;
        cout<<50-x;
    }
    
    
    return 0;
}
