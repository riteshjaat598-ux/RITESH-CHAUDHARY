#include <stdio.h>

enum Status {
    CODE_SUCCESS = 200,   
    CODE_WARNING,         
    CODE_ERROR = 500,      
    CODE_FATAL             
};

int main() {
    enum Status s1 = CODE_SUCCESS;
    enum Status s2 = CODE_WARNING;
    enum Status s3 = CODE_ERROR;
    enum Status s4 = CODE_FATAL;

    printf("CODE_SUCCESS = %d\n", s1);
    printf("CODE_WARNING = %d\n", s2);
    printf("CODE_ERROR   = %d\n", s3);
    printf("CODE_FATAL   = %d\n", s4);

    return 0;
}
