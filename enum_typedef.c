#include <stdio.h>



typedef enum{
    USER_ROLE,
    ADMIN_ROLE
}SERVER_ROLE;



int main(void)
{
    SERVER_ROLE my_role = ADMIN_ROLE;

    if(my_role = ADMIN_ROLE){
        printf("Welcone");
    }
    else
        printf("USER ROLE ERROR");
        return 0;

}