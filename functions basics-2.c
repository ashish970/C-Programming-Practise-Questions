
/*this type of function called user defined function*/

add(){
    int a,b,c;

    printf("This is the user define function\n\n");
    printf("Enter two number");
    scanf("%d%d",&a,&b);

    c = a+b;
    printf("%d",c);

}

main(){

add();

getch();
}
