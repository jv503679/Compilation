extern int printd(int i);
int main(void){
int i,j;
int _t1;
int _t2;
int _t3;
i=45000;
j=-123;
_t1=i*j;
printd(_t1);
_t1=45000*j;
printd(_t1);
_t1=i*123;
printd(_t1);
_t1=45000*123;
printd(_t1);
_t1=j+0;
_t2=i*(_t1);
printd(_t2);
_t1=i+0;
_t2=(_t1)*j;
printd(_t2);
_t1=i+0;
_t2=j+0;
_t3=(_t1)*(_t2);
printd(_t3);
_t1=i+0;
_t2=(_t1)*123;
printd(_t2);
_t1=j+0;
_t2=45000*(_t1);
printd(_t2);
return 0;
}
