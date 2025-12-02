// Create a function showMenu() that has user entered default arguments day.
// prints a 3-item food menu based on if day==morning elseif day==evening and else if day==night else “invalid string”.

#include <bits/stdc++.h>
using namespace std;

void showMenu() {
    string day;
    cout<<"Enter your day: ";
    cin>>day;

    if(day=="morning") cout<<"poha";
    else if(day=="evening") cout<<"chai";
    else if(day=="night") cout<<"daal baati";
    else cout<<"invalid string";
}
int main(){
    showMenu();
}