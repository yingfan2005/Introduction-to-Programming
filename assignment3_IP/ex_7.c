#include<stdio.h>
void print_bits(unsigned char bits)
{
    unsigned char m = bits;
    int pot= 128;
    int j;
    for(j=0;j<8;j++)
    {
        if(m/pot>0)
        {
            printf("1");
            m = m%pot;
        }
        else
        {
            printf("0");
        }
        pot = pot/2;
    }
}
void print_bytes(const void* end_byte,int n)
{
    unsigned char* x = (unsigned char*) end_byte;
    int i;
    for(i=0;i<n;i++)
    {
        print_bits(*(x+i));
        printf(" ");
    }

}
int main()
{
    unsigned char ch;
    unsigned short sh;
    unsigned int in;
    float fl;
    double db;
    scanf("%lf",&db);
    ch=db;
    sh=db;
    in=db;
    fl=db;
    print_bytes(&ch,sizeof(ch));
    printf("\n");
    print_bytes(&sh,sizeof(sh));
    printf("\n");
    print_bytes(&in,sizeof(in));
    printf("\n");
    print_bytes(&fl,sizeof(fl));
    printf("\n");
    print_bytes(&db,sizeof(db));
    printf("\n");



    return 0;
}