#include<stdio.h>
void main()
{
cha c;
int is Lower case Vowel, is Upper case Vowel;
printf("Enter an alphabet:");
scanf("%c",&c);
is Lower case Vowel=(c=='a'|| c=='e'||c=='i'||c=='o'||c=='u');
is Upper case Vowel=(c=='A'||c=='E'||c=='I'||c=='O'||c=='U');
if(is Lower case Vowel || is Upper case Vowel)
printf("%C is a vowel.",c);
else
printf("%C is a consonant.",c);
return 0;
}
