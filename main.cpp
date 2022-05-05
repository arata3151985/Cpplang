#include <iostream>
#include <cstdio>
#include <cmath>
#include <bits/stdc++.h>
#include <string>
#include <algorithm>
using namespace std;

int main()
{
    int N, a, b, c, A[a], B[b], C[c], i,AA[N], BB[N], CC[N], DD[N], FF[N], EE[N], GG[N];
    
    cout << "Input Total number N" << endl;
    cin >> N;
    

    cout << "Input A[a]" << endl;
    cin >> a;
    for(i=0 ; i<a ; i++){
        cin >> A[i];
    }
    cout << "Input B[b]" << endl;
    cin >> b;
    for(i=0 ; i<b ; i++){
        cin >> B[i];
    }
    cout << "Input C[c]" << endl;
    cin >> c;
    for(i=0 ; i<c ; i++){
        cin >> C[i];
    }
    
    int cnt=0;
    
    
    // Aの補集合
    for (i=0 ; i<N; i++){
        for(int j=0; j<a;j++){
            if(i == A[j]){
                AA[i] = false;
                break;
            }
            else{
                AA[i] = true;
            }
        }
    }

    // Bの集合
    for (i=0 ; i<N; i++){
        for(int j=0; j<b;j++){
            if(i == B[j]){
                BB[i] = true;
                break;
            }
            else{
                BB[i] = false;
            }
        }
    }
                
    // Cの集合
    for (i=0 ; i<N; i++){
        for(int j=0; j<c;j++){
            if(i == C[j]){
                CC[i] = true;
                break;
            }
            else{
                CC[i] = false;
            }
        }
    }  
  
    // bar_A and C
    for (i=0 ; i<N; i++){
        DD[i] = (AA[i] && CC[i]);
    }
  
    // B and C
    for (i=0 ; i<N; i++){
        EE[i] = (BB[i] && CC[i]);
    }
    int cnt1 = 0; 
    for (i=0 ; i<N; i++){
        FF[i] = (DD[i] && EE[i]);
        if(FF[i]){
            cnt1++;
        }
    }
    
    int cnt2 = 0;
    for (i=0 ; i<N; i++){
        GG[i] = (DD[i] || EE[i]);
        if(GG[i]){
            cnt2++;
        }
    }
    
    cout << cnt2 - cnt1 << endl;
    return 0;
}