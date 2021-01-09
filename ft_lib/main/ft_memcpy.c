int main() {
    char src[50] = "CiaoCiaoCiaoCiao"; 
    char dest[50] = "Bellaa";
    printf("\nBefore memcpy(): %s\n", dest); 
    memcpy(dest,src,strlen(src)+1);
    printf("After memcpy():  %s", dest); 
    return 0; 
}