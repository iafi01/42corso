int main() {
    char src[50] = "CiaoCiaoCiaoCiao"; 
    char dest[50] = "Testt"; 
    printf("\nBefore memcpy(): %s\n", dest); 
    memmove(dest,src,8*sizeof(char));
    printf("After memcpy():  %s", dest); 
    return 0; 
}
//dest è s1 e src è s2,lui copia s2 in s1