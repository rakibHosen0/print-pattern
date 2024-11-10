#include<bits/stdc++.h>
using namespace std;

/*
*****
*****
*****
*****
*****
*/
void printPattern1(int n){
    for(int i =1;i<=n;i++){
        for(int j= 1;j<=n;j++){
            cout<<"*";
        }
        cout<<"\n";
    }
}
/*
*
**
***
****
*****
*/
void printPattern2(int n){
    for(int i =1;i<=n;i++){
        for(int j= 1;j<=i;j++){
            cout<<"*";
        }
        cout<<"\n";
    }
}
/*
1
12
123
1234
12345
*/
void printPattern3(int n){
    for(int i =1;i<=n;i++){
        for(int j= 1;j<=i;j++){
            cout<<j;
        }
        cout<<"\n";
    }
}
/*
1
2 2
3 3 3
4 4 4 4
*/
void printPattern4(int n){
    for(int i =1;i<=n;i++){
        for(int j= 1;j<=i;j++){
            cout<<i<<" ";
        }
        cout<<"\n";
    }
}
/*
* * * * *
* * * *
* * *
* *
*
*/
void printPattern5(int n){
    for(int i =n;i>0;i--){
        for(int j= 1;j<=i;j++){
            cout<<"* ";
        }
        cout<<"\n";
    }
}
/*
* * * * *
* * * *
* * *
* *
*
*/
void printPattern6(int n){
    for(int i =n;i>0;i--){
        for(int j= 1;j<=i;j++){
            cout<<"* ";
        }
        cout<<"\n";
    }
}
void printPattern6i(int n){
    for(int i=1;i<=n;i++){
        for(int j= 1;j<=n - i + 1;j++){
            cout<<"* ";
        }
        cout<<"\n";
    }
}
/*
1 2 3 4 5
1 2 3 4
1 2 3
1 2
1
*/
void printPattern7(int n){
    for(int i=1;i<=n;i++){
        for(int j= 1;j<=n - i + 1;j++){
            cout<<j<<" ";
        }
        cout<<"\n";
    }
}
/*
    *
   ***
  *****
 *******
*********
*/
void printPattern8(int n){
    for(int i=1;i<=n;i++){
            //for space
        for(int j= 1;j<=n - i;j++){
            cout<<" ";
        }
        //for stars
        for(int j= 1;j<=2*i-1;j++){
            cout<<"*";
        }//for space
        for(int j= 1;j<=n - i;j++){
            cout<<" ";
        }
        cout<<"\n";
    }
}
/*
 *******
  *****
   ***
    *
*/
void printPattern9(int n){
    for(int i=1;i<=n;i++){
            //for space
        for(int j= 1;j<=i;j++){
            cout<<" ";
        }
        //for stars
        for(int j=1;j<=2*n-(2*i+1);j++){
            cout<<"*";
        }//for space
        for(int j= 1;j<=i;j++){
            cout<<" ";
        }
        cout<<"\n";
    }
}
/*
    *
   ***
  *****
 *******
*********
 *******
  *****
   ***
    *
*/
void printPattern10(int n){
    printPattern8(n);
    printPattern9(n);
}

/*
1        1
12      21
123    321
1234  4321
1234554321
*/
void printPattern11(int n){
    int space = 2*(n-1);
    for(int i=0;i<n;i++){
        for(int j = 1;j<=i;j++){
            cout<<j;
        }
        for(int j = 1;j<=space;j++){
            cout<<" ";
        }
        for(int j = i;j>0;j--){
            cout<<j;
        }
        cout<<endl;
        space -=2;
    }
}
/*
1
2 3
4 5 6
7 8 9 10
*/
void printPattern12(int n){
    int num = 1;
    for(int i=0;i<n;i++){
        for(int j = 0;j<i;j++){
            cout<<num<<" ";
            num++;
        }
        cout<<endl;
    }
}
/*
A
A B
A B C
A B C D
*/
void printPattern13(int n){
    int num = 65;
    for(int i=0;i<n;i++){
        for(char ch ='A';ch<='A'+i;ch++){
            cout<<ch<<" ";
        }
        cout<<endl;
    }
}
/*
A B C D E F
A B C D E
A B C D
A B C
A B
A
*/
void printPattern14(int n){
    int num = 65;
    for(int i=n;i>=0;i--){
        for(char ch ='A';ch<='A'+i;ch++){
            cout<<ch<<" ";
        }
        cout<<endl;
    }
}
/*
A B C D E F
A B C D E
A B C D
A B C
A B
A
*/
void printPattern15(int n){
    int num = 65;
    for(int i=n;i>=0;i--){
        for(char ch ='A';ch<='A'+i;ch++){
            cout<<ch<<" ";
        }
        cout<<endl;
    }
}

int main(){
    int n;
    cin>>n;
    printPattern14(n);
return 0;
}
