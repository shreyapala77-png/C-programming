#include<stdio.h>
int main()
{
char Color_code;
scanf("%c",&Color_code);
if(Color_code == 'v' | | Color_code == 'V'){
printf("Violet");
}
else if(Color_code == 'i' | | Color_code == 'I'){
printf("Indigo");
}
else if(Color_code == 'b' | | Color_code == 'B'){
printf("Blue") ;
}
else if(Color_code == 'g' | | Color_code == 'G'){
printf("Green"};
}
else if(Color_code == 'y' | | Color_code == 'Y'){
printf("Yellow");
}
else if(Color_code == 'o' | | Color_code == '0'){
printf("Orange");
}
else if(Color_code == 'r' | | Color_code == 'R'){
printf("Red");
}
else{
printf("-1");
}
return 0;
}

