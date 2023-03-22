int romanToInt(char * s){
    int sum=0,prev=0;
    for(int i= strlen(s)-1; i>=0; i--){
        int new;
        switch(s[i]){
            case 'I': new=1;break;
            case 'V': new=5;break;
            case 'X': new=10;break;
            case 'L': new=50;break;
            case 'C': new=100;break;
            case 'D': new=500;break;
            case 'M': new=1000;break;
            default:new=0;
        }
        if(new>=prev){
            sum+=new;
        }
        else{
            sum-=new;
        }
        prev = new;
    }
    return sum;
}