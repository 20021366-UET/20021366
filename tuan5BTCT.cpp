bool dsc(const int&a, const int&b){ return a>b;}
bool asc(const int&a, const int&b){ return a<b;}
int* merge(int* firstArr, int lenArr1, int* secondArr, int lenArr2){
    int *last_int=new int [lenArr1+lenArr2];
    bool (*sort_type)(const int&, const int&);
    if(firstArr[0]>=firstArr[lenArr1-1]&&secondArr[0]>=secondArr[lenArr2-1]) sort_type=dsc;
    else                                                                     sort_type=asc;
    int i1=0,i2=0,dem=0;
    while(i1<lenArr1&&i2<lenArr2){
        if(sort_type(firstArr[i1],secondArr[i2])){
            last_int[dem]=firstArr[i1];
            i1++;
        }
        else{
            last_int[dem]=secondArr[i2];
            i2++;
        }
        dem++;
    }
    while(i1<lenArr1){
        last_int[dem]=firstArr[i1];
        dem++;
        i1++;
    }
    while(i2<lenArr2){
        last_int[dem]=secondArr[i2];
        dem++;
        i2++;
    }
   return  last_int;
}
