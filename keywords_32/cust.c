#include<stdio.h>
#include<string.h>

// enum: gives readable names to integer constants(0,1,2)
enum Role{ADMIN, EDITOR, VIEWER };

// typedef + struct: bundles separate variables and gives the type a clean nickname
typedef struct {
    int id;
    char username[20];
    enum Role role;
} User;

// union: all members share the EXACT SAME menory block (size = largest member)
union RawData {
    int num;
    char letter;
};

int main()
{
    User u1;
    u1.id= 101;
    strcpy(u1.username,"Ernest");
    u1.role = ADMIN;

    union RawData data;
    data.num = 65; //ASCII for 'A'

    // sizeof: retutns exact byte size in RAM
    printf("User: %s(Role ID: %d)\n", u1.username, u1.role);
    printf("Size of User struct: %zu bytes\n",sizeof(User));
    printf("Size of RawData union: %zu bytes\n",sizeof(union RawData));
    printf("Union as int: %d | Union as char: %c\n", data.num,data.letter);

    return 0;
}
