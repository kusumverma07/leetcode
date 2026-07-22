int firstUniqChar(char* s) {
    for(int i=0;i<strlen(s);i++){
        int count=1;
        for(int j=0;j<strlen(s);j++){
            if(i!=j && s[i]==s[j]){
                count=0;
                break;
            }
        
        }
        if(count==1)
            return i;
    }
    return -1;
    
}