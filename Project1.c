/*
#include<stdio.h>
#include<string.h>
typedef struct person_information{
    char name[21];
    char phone_number[16];
    char date_of_birth[9];
} my_variable;
void registration(my_variable *ptr_information, int index1)
{
    printf("Name:");
    scanf("%s",ptr_information[index1].name);
    printf("Phone_number:");
    scanf("%s",ptr_information[index1].phone_number);
    printf("Birth:");
    scanf("%s", ptr_information[index1].date_of_birth);

    printf("<<%d>>",index1+1); // it for printing the number inputs
}
void show_all(my_variable *ptr_information1, int index2)
{
    my_variable temp; // this new structure variable it for swapping elements if bubble sort
    for (int i = 0; i < index2; ++i) { // the begining of bubble sort
        for (int j = i + 1; j < index2; ++j) {
            if (strcmp(ptr_information1[i].name, ptr_information1[j].name) > 0) //comparing
            {
                temp = ptr_information1[i]; // swapping
                ptr_information1[i] = ptr_information1[j];
                ptr_information1[j] = temp;
            }
        }//ending of bubble sort
        printf("%s %s %s\n", ptr_information1[i].name, ptr_information1[i].phone_number,ptr_information1[i].date_of_birth);
    }//prints it in alphabetical order
}
void delete(my_variable *ptr_information, int *size, int length)
{
    if (length >= 0) { // length it is just for printing no member if length is less than 0
        int count = 0;
        char name_del[20];
        printf("Name:");
        scanf("%s", name_del);
        for (int i = 0; i < *size; ++i) {
            if (strcmp(ptr_information[i].name, name_del) == 0) { // if it is finds the name in the database it goes for loop
                for (int j = i; j < *size; ++j) {// for loop assigns the index by one for whole array
                    ptr_information[j] = ptr_information[j + 1]; // if we want delete element 1 in index 0, we simply assign to index 0 element of index 1
                    count = 1; //
                }
                break;
            }
        }
        if (count == 1) { // it tells us that we should reduce the size of array because we delete one element
            *size = *size - 1;
        }
    }
    else
    {
        printf("No member\n");// it is only prints in output when no registration  was did in database and it is empty
    }

}
void find_by_birth(my_variable *pst_information, int size) {
    char month[10];
    printf("Birth:");
    scanf("%s",month);
    if (strlen(month) < 2) { // if the size of string month is less than 2 it means that  user entered single character from 1 to 9
        for (int i = 0; i < size; ++i) {
            if (month[0] == pst_information[i].date_of_birth[5]) { //  it is equal with character  in index 5 in element date_of_birth
                printf("%s %s %s\n", pst_information[i].name, pst_information[i].phone_number,// as user input 2 it means we need people who born in february
                       pst_information[i].date_of_birth);// that's why we compare with 5 index as format of date is YYYYMMDD we second M in index 5
            }
        }
    } else {
        for (int i = 0; i < size; ++i) {  // here user inputs a double character like 10, 11 , 12 
            if ((month[0] == pst_information[i].date_of_birth[4]) &&// and we need compare to character in indexes 4 and 5
                (month[1] == pst_information[i].date_of_birth[5])) { // as format tell us YYYYMMDD we need month
                printf("%s %s %s\n", pst_information[i].name, pst_information[i].phone_number,
                       pst_information[i].date_of_birth);
            }
        }
    }
}
int main()
{
    my_variable information[100];
    int instruction, index = 0,  size = -1; // the size used only in delete function in if statement to print no member in user interface
    printf("*****Menu*****\n");
    printf("<1.Registration><2.ShowAll><3.Delete><4.FindByBirth><5.Exit>\n");
    printf("Enter_the_menu_number:");
    scanf("%d", &instruction);
    while (instruction != 5)
    {
        if (instruction == 1)
        {
            registration(information, index); //index goes as index of array
            index++;
            size++;
        }
        if (instruction == 2)
        {
            show_all(information, index); // index goes to function as size in for loop
        }
        if (instruction == 3)
        {
            delete(information, &index, size);
        }
        if (instruction == 4)
        {
            find_by_birth(information, index); // index goes to function as size in for loop
        }
        printf("\n*****Menu*****\n");
        printf("<1.Registration><2.ShowAll><3.Delete><4.FindByBirth><5.Exit>\n");
        printf("Enter_the_menu_number:");
        scanf("%d", &instruction);
    }
}

*/