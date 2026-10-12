#include <iostream>
using namespace std;

int main(){
    //Ratio of Item Prices #9  
    //Read item prices from the user and calculate the ratio. Format the output clearly and handle valid numeric input.  

    float itemprice1, itemprice2, ratio;

    cout << "Enter your first item price: ";
    cin >> itemprice1;
    cout << "Enter your second item price: ";
    cin >> itemprice2;

    ratio = itemprice1/itemprice2;
    cout << "Ratio is " << ratio;                                                                                           
    
    return 0;
}

/*#include <iostream>
#include <numeric>
using namespace std;

int main() {
    int a, b;

    cin >> a >> b;

    int gcd = std::gcd(a, b);

    cout << a / gcd << " : " << b / gcd;

    return 0;
}*/