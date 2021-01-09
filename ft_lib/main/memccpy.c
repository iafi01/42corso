int main() {
    char s1[50] = "Carnevale"; 
    char s2[50] = "evaaaaaaa";
    printf("\nBefore memcpy(): %s\n", s1); 
    memccpy(s1,s2,'a',1*sizeof(char));
    printf("After memcpy():  %s", s1); 
    return 0; 
}