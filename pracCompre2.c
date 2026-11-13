#include <stdio.h>
#include <ctype.h>
#include <string.h>


int letter_position (char c);
char mirror (char c);

int main () {
    char line[201] = "";
    scanf("%200[^\n]", line);
    
    int l = strlen(line);
    if (l>0 && line[l-1]=='\n'){
        line[l-1]='\0';
        l--;
    }
    
    
    int S=0;
    int sSmax=0;
    int sST=0;
    for (int i = 0; i<l; i++) {
        S=S+letter_position(line[i]);
        
        if (!(isalpha(line[i])&&line[i]>line[i-1])) {
            sST=0;
        }
        
        if (isalpha(line[i])) {
            if (sST==0) {
                sST++;
            }
            else if (sST>0 && letter_position(line[i])>letter_position(line[i-1])) {
                sST++;
            }
            if (sSmax<sST){
                sSmax=sST;
            }
        }
        
        
        
    }
    
    
    for (int i = 0; i<l; i++) {
        line[i]=mirror(line[i]);
        
    }
    
    printf("%s\n%d\n%d",line,S,sSmax);
    
}

int letter_position (char c) {
    if (islower(c)) {
        return c-'a'+1;
    }
    
    if (isupper(c)) {
        return c-'A'+1;
    }
    
    return 0;
}

char mirror (char c) {
    //int pos = c - 'a' + 1;
    
    if (islower(c)) {
        int pos = c - 'a' + 1;
        return 'a' + 26 - pos;
    }
    
    else if (isupper(c)) {
        int pos = c - 'A' + 1;
        return 'A' + 26 - pos;
    }
    
    else {
        return c;
    }
}

//I didn't even get more than 41/45 without using gemini which is kinda wild, this was genuinely kinda deep
