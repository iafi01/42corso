int main() {
    char src[50] = "CiaoCiaoCiaoCiao"; 
    printf("\nBefore memcpy(): %s\n", src); 
    memset(src,0,8*sizeof(char));
    printf("After memcpy():  %s", src); 
    return 0; 
}