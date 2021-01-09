int main () {
   const char str[] = "http://z";
   const char str2[] = "http://g";
   int ret;
//printf("%d\n",memcmp(str,str2,12));
   ret = memcmp(str,str2,12);
    if(ret == 0)
        printf("Equal");
    else if(ret > 0)
        printf("str > str2");
    else if(ret < 0)
        printf("str2 > str");


   return(0);
}