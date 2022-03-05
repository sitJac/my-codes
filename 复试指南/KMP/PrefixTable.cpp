#include<bits/stdc++.h>
using namespace std;

void prefix_table(char pattern[], int prefix[], int n){
    prefix[0] = 0;
    int len = 0;
    int i = 1;
    while (i < n)
    {
        if(pattern[i] == pattern[len]){
            len++;
            prefix[i] = len;
            i++;
        }
        else{
            if(len > 0){
                len = prefix[len - 1];
            }
            else{
                prefix[i] = len;
                i++;
            }
        }
    }
}

void moved_prefix_table(int prefix[], int n)
{
    for (int i = n - 1; i >= 0; i--)
    {
        prefix[i] = prefix[i - 1];
    }
    prefix[0] = -1;
}

int main(){
    char pattern[] = "ABABCABAA";
    int prefix[9];
    int n = 9;

    prefix_table(pattern, prefix, n);

    for(int i = 0; i < n; i++)
    {
        cout << pattern[i] << " ";
    }
    cout << endl;

    for (int i = 0; i < n; i++)
    {
        cout << prefix[i] << " ";
    }
    cout << endl;

    moved_prefix_table(prefix, n);
    for (int i = 0; i < n; i++)
    {
        cout << prefix[i] << " ";
    }
    
    
    return 0;
}