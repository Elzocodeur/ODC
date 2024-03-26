# include <stdio.h>

int main(){
    int a,b,c, min, midle, max;
printf("entrer trois nombres");
scanf("%d %d %d",&a, &b, &c);

if (a<b)
{
min = a;
max = b;
}
else{
    min = b;
    max = a;
}
midle = c;
if (midle<max)
{
    if (midle < min)
    {
        midle = min;
        min = c;
    }
    
}else{
    c = midle;
    midle = max;
    max = c;
}

printf("L'ordre croissant de ces trois nombres est : %d, %d,%d\n",min,midle,max);
printf("L'ordre décroissant de ces trois nombres est : %d ,%d, %d\n",max,midle,min);



return 0;  
}