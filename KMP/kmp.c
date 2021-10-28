#include<stdio.h>

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

int main(){
    char pattern[] = "ABABCABAA";
    int prefix[9];
    int n = 9;
    prefix_table(pattern, prefix, n);

    int i;
    for ( i = 0; i < n; i++){
        printf("%d\n",prefix[i]);
    }
    

    return 0;
}