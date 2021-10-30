#include<stdio.h>
#include<string.h>
int main()
{
    char str[30]="gukgguknbkiuggnm";
    int freq[26];
    int maxF=0;
    char ans='a';
    for (int i = 0; i < 26; i++)
    {
        freq[i]=0;
    }
    
    for (int i = 0; i < strlen(str); i++)
    {
      freq[str[i]-'a']++;
    }
    for (int i = 0; i < 26; i++)
    {
        if (freq[i]>maxF)
        {
            maxF=freq[i];
            ans=i+'a';
        }
        
    }
    printf("char %c has maximum frequency that is %d",ans,maxF);
    
    return 0;
}
