//PATTERN

// 1. Square pattern
// #include <iostream>
// using namespace std;


// int main(){
//     for(int row=0;row <4;row++){
//         for(int col =0;col < 4;col++){
//             cout<<"* ";
//         }
//         cout<<endl;
//     }
// }

// 2. Rectangle pattern 
// int main(){
//     int length,width;
//     cout<<"Enter the length:"<<endl;
//     cin>>length;
//     cout<<"Enter the width:"<<endl;
//     cin>>width;

//     for(int row = 0;row<length;row++){
//         for(int col = 0; col<width; col++){
//             cout<<"* ";
//         }
//         cout<<endl;
//     }
// }

// 3. Hollow rectangle
// #include <iostream>
// using namespace std;

// int main() {
//     int length, width;
//     cout << "Enter the length:" << endl;
//     cin >> length;
//     cout << "Enter the width:" << endl;
//     cin >> width;

//     for(int row = 0; row < length; row++) {
//         for(int col = 0; col < width; col++) {
//             if(row == 0 || row == length - 1 || col == 0 || col == width - 1) {
//                 cout << "* ";
//             } else {
//                 cout << "  "; 
//             }
//         }
//         cout << endl;
//     }

//     return 0;
// }

// 4. Hollow square
// #include <iostream>
// using namespace std;

// int main() {
//     int side;
//     cout << "Enter the side:" << endl;
//     cin >> side;

//     for(int row = 0; row < side; row++) {
//         for(int col = 0; col < side; col++) {
//             if(row == 0 || row == side - 1 || col == 0 || col == side - 1) {
//                 cout << "* ";
//             } else {
//                 cout << "  "; 
//             }
//         }
//         cout << endl;
//     }

//     return 0;
// }

// 5. Half pyramid
// #include <iostream>
// using namespace std;

// int main(){
//     int n;
//     cout<<"Enter the n:";
//     cin>>n;

//     for(int row =0; row<n; row++){
//         for (int col = 0; col<row+1; col++){
//             cout<<"*";
//         }
//         cout<<endl;
//     }
// }

// 6. Inverted half pyramid
#include <iostream>
using namespace std;

int main(){
    int n;
    cout<<"Enter the n:";
    cin>>n;

    for(int row =0; row<n; row++){
        for (int col = 0; col<n-row; col++){
            cout<<"*";
        }
        cout<<endl;
    }
}

// 7. Hollow half pyramid

// #include <iostream>
// using namespace std;

// int main(){
//     int n;
//     cout << "Enter the n: ";
//     cin >> n;

//     for(int row = 0; row < n; row++){
//         int totalcolumn = row + 1;
//         for (int col = 0; col < totalcolumn; col++){
//             if (row == 0 || row == 1 || row == n - 1){
//                 cout << "* ";
//             } else { // middle row
//                 if (col == 0 || col == totalcolumn - 1){
//                     cout << "* ";
//                 } else {
//                     // middle column
//                     cout << "  "; 
//                 }
//             }
//         }
//         cout << endl;
//     }

//     return 0;
// }

// 8. Hollow inverted half pyramid

// #include <iostream>
// using namespace std;

// int main() {
//     int n;
//     cout << "Enter the n: ";
//     cin >> n;

//     for (int row = 0; row < n; row++) {
//         for (int col = 0; col < n - row; col++) {
//             // Conditions for stars: top row, left edge, and right edge
//             if (row == 0 || col == 0 || col == n - row - 1) {
//                 cout << "*";
//             } else {
//                 cout << " ";
//             }
//         }
//         cout << endl;
//     }
//     return 0;
// }

// 9. Numeric half pyramid
#include <iostream>
using namespace std;

int main(){
    int n;
    cout << "Enter the n: ";
    cin >> n;

    for(int row= 0; row<n;row++){
        for(int col= 0;col<row+1;col++){
            cout<<(col+1)<<"";
        }
        cout<<endl;
    }
}

