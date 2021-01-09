int main () {
   const char str[] = "http://www.tutorialspoint.com";
   const char ch = 'm';
   char *res;

   res = memchr(str, ch, strlen(str));

   printf("String after %c is - |%s|\n", ch, res);

   return(0);
}