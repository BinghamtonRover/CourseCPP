int main(){
    register int to_register = 2021;
    volatile int var = 0;
    //int var = 0;
    for(int i = 0; i < 100; i++){
        var++;
    }
}