size_t mb_generic_pull ( int (*char_func)(ucs2_t *, const unsigned char *), void *cd _U_, char **inbuf, size_t *inbytesleft,char **outbuf, size_t *outbytesleft);
size_t mb_generic_push( int (*char_func)(unsigned char *, ucs2_t), void *cd _U_, char **inbuf, size_t *inbytesleft, char **outbuf, size_t *outbytesleft);
