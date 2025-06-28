#include<bits/stdc++.h>
using namespace std;
 int main()
 {

      int t;
      cin >> t;

      for(int i = 0; i < t; i++){

           int n;
           int sum = 0;

           cin>> n;

           for(int j  =1; j * j<=n; j++){

            if(n % j  == 0){
                sum+= j;

            if(j * j !=n){
               sum += n / j;
             }
        }

    }
             sum -= n;
            cout<< sum <<'\n';
      }

            return 0;

 }
