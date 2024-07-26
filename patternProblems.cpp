#include <iostream>
using namespace std;

int main()
{
    cout << "Pattern problems";
    cout << endl;

    for(int i=1;i<=4;i++){
        for(int j=1;j<=i;j++){
            cout<<"*";
        }
        cout<<endl;
    }

    for(int i=1;i<=4;i++){
        for(int j=4;j>=i;j--){
            cout<<"*";
        }
        cout<<endl;
    }

     for(int i=1;i<=5;i++){
        for(int j=1;j<=i;j++){
            cout<<j;
        }
        cout<<endl;
    }

    for(int i=1;i<=4;i++){
        for(int j=4;j>=i;j--){
            cout<<j;
        }
        cout<<endl;
    }

    int n = 5;

    for (int i = 1; i <= n * 2; i++)
    {
        int col = i > n ? 2 * n - i : i; 
        for (int j = 1; j <= col; j++)
        {
            cout << "*";
        }
        cout << endl;
    }

    for(int i=n ;i>0;i--){
        for(int j=1;j<=n;j++){
            if(j>=i){
                cout<<"*";
            } else {
                cout<<" ";
            }
        }
        cout<<endl;
    }

    for(int i=0; i<n; i++){
    //space
        for(int j=0;j< n - i - 1;j++){
            cout<<" ";
        }
        
        for(int j=0; j < 2*i+1 ; j++){
            cout<<"*";
        }
    //space
        for(int j=0;j< n - i - 1;j++){
            cout<<" ";
        }
        cout<<endl;

    }


    for(int i=0;i<n;i++){
        //space
        for(int j=0; j< i;j++){
            cout<<" ";
        }
        //star
        for(int j=0; j < n * 2 - (2*i + 1); j++){
            cout<<"*";
        }
        
        //space
        for(int j=0;j< i;j++){
            cout<<" ";
        }
        cout<<endl;
    }

    int start = 1;

    for(int i=0;i<n;i++){
        if(i % 2 == 0) {
            start = 1;
        } else {
            start = 0;
        }
        for(int j=0;j<=i;j++){
            cout<<start;
            start  = 1 - start;
        }
        cout<<endl;
    }

    int space = 2*(n-1);

    for(int i=1;i<=n;i++){
        //num
        for(int j=1;j<=i;j++){
            cout<<j;
        }
        //space
        for(int j=0;j<space;j++){
            cout<<" ";
        }

        //num
        for(int j=i;j>=1;j--){
            cout<<j;
        }
        cout<<endl;
        space = space - 2;
    }

    int num=1;
    for(int i=1;i<n;i++){
        for(int j=1;j<=i;j++){
            cout<<num;
            num = num + 1;
        }
        cout<<endl;
    }

    for(int i=0;i<n;i++){
        for(char j = 'A'; j < 'A' + i;j++){
            cout<<j;
        }
        cout<<endl;
    }

    for(int i=0;i<n;i++){
        for(char j='A';j< 'A' + (n-i-1);j++){
            cout<<j;
        }
        cout<<endl;
    }

    for(int i=0;i<n;i++){
        char ch = 'A' + i;
        for(char j = 0; j <= i ; j++ ){
            cout<<ch;
        }
        cout<<endl;
    }
    
    return 0;
}