#include <stdio.h>
#include <string.h>

int main()
{
    char word1[100],word2[100];
    printf("Enter word1: ");
    scanf("%s",word1);
    printf("Enter word2: ");
    scanf("%s",word2);

    printf("Before swapping: word1 = %s, word2 = %s\n",word1,word2);

   char temp[100];
   strcpy(temp,word1);
   strcpy(word1,word2);
   strcpy(word2,temp);

   printf("After swapping: word1 = %s, word2 = %s\n",word1,word2);
}