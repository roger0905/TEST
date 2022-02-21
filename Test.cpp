#include<iostream>
using namespace std;

int Choose_Function();
void One();
void Two();
void Three();
void Four();
void Five();
void Six();
void Seven();
void Eight();

// My Others Program
void Nine();
// 

int main(){
    while(1){
        if(Choose_Function() == 1){
            cout << endl;
            continue;
        }
        else
            break;
    }
}

int Choose_Function(){
    int Number;
    cin >> Number;

    switch (Number){
        case 1 :
            One();
            return 1;
            break;

        case 2 :
            Two();
            return 1;
            break;

        case 3 :
            Three();
            return 1;
            break;

        case 4 :
            Four();
            return 1;
            break;
        
        case 5 :
            Five();
            return 1;
            break;
        
        case 6 :
            Six();
            return 1;
            break;

        case 7 :
            Seven();
            return 1;
            break;

        case 8 :
            Eight();
            return 1;
            break;

        //My Others Program
        case 9 :
            Nine();
            return 1;
            break;
        // 

        default :
            cout << "ERROR";
            return 0;
            break;
    }
}

void One(){
    int Input_n, Plus_reg = 0;

    cin >> Input_n;
    int n_reg = Input_n;

    while(n_reg != 0){
        for (int i = 0; i < n_reg - 1; i++)
            cout << " ";

        cout << "*";

        for (int i = 0; i <= Plus_reg - 2; i++)
            cout << Input_n;

        if(Plus_reg > 1)
            cout << "*";

        cout << "\n";

        Plus_reg = Plus_reg + 2;
        n_reg--;
    }
}

void Two(){
    char Input_String[100] = {}, Small_String_Reg[100] = {}, Turn_String_Reg[100] = {}, Output_String[100] = {};
    cin >> Input_String;

    int Input_String_Move = 0, Total_Char = 0, String_Reg_Move = 0, Output_Reg_Move = 0, Out_Total = 0;

    while(Input_String[Input_String_Move]){
        if(Input_String[Input_String_Move] > 64 && Input_String[Input_String_Move] < 91)
            Small_String_Reg[Input_String_Move] = Input_String[Input_String_Move] + 32;
        else
            Small_String_Reg[Input_String_Move] = Input_String[Input_String_Move];

        Total_Char++;
        Input_String_Move++;
    }

    while(Small_String_Reg[String_Reg_Move]){
        Turn_String_Reg[String_Reg_Move] = Small_String_Reg[Total_Char - 1];
        String_Reg_Move++;
        Total_Char--;
        Out_Total++;
    }

    while(Turn_String_Reg[Output_Reg_Move]){
        if(Input_String[Output_Reg_Move] > 64 && Input_String[Output_Reg_Move] < 91)
            Output_String[Output_Reg_Move] = Turn_String_Reg[Output_Reg_Move] - 32;
        else
            Output_String[Output_Reg_Move] = Turn_String_Reg[Output_Reg_Move];

        Output_Reg_Move++;
    }

    for (int i = 0; i < Out_Total; i++)
        cout << Output_String[i];
    
    cout << endl;
}

void Three(){
    int Input_Number, Input_I, Input_J, Plus_IJ_Number;
    
    cin >> Input_Number >> Input_I >> Input_J;
    int Number_I_reg = Input_Number, Number_J_reg = Input_Number;

    for (int i = 0; i < Input_I; i++)
        Number_I_reg = Number_I_reg / 10;
    Number_I_reg = Number_I_reg % 10;

    for (int j = 0; j < Input_J; j++)
        Number_J_reg = Number_J_reg / 10;
    Number_J_reg = Number_J_reg % 10;

    Plus_IJ_Number = Number_I_reg + Number_J_reg;
    cout << "\n" << Plus_IJ_Number << endl;
}

void Four(){
    char Input_String[100] = {}, Output_String[100] = {};
    cin >> Input_String;

    int Input_Array_Move = 0, String_Array_Move = 0;

    while(Input_String[Input_Array_Move]){
        if( (Input_String[Input_Array_Move] > 47 && Input_String[Input_Array_Move] < 58 ) || Input_String[Input_Array_Move] == 45){
            Output_String[String_Array_Move] = Input_String[Input_Array_Move];
            String_Array_Move++;
        }
        Input_Array_Move++;
    }
    for (int i = 0; i < String_Array_Move; i++)
        cout << Output_String[i];
    
    cout << endl;
}


void Five(){
    char Input_String[100] = {}, Output_String[100] = {};
    cin >> Input_String;

    int Input_String_Move = 0, Output_String_Move = 0;

    while(Input_String[Input_String_Move]){
        if(Input_String[Input_String_Move] > 47 && Input_String[Input_String_Move] < 58){
            for (int i = 0; i < Input_String[Input_String_Move] - 49; i++){
                Output_String[Output_String_Move] = Input_String[Input_String_Move - 1];
                Output_String_Move++;
            }
        }
        else{
            Output_String[Output_String_Move] = Input_String[Input_String_Move];
            Output_String_Move++;
        }
        Input_String_Move++;
    }

    for (int i = 0; i < Output_String_Move; i++)
        cout << Output_String[i];

    cout << endl;
}

void Six(){
    int Total_Number = 0;
    char Student_ID[8];
    for(int i = 0; i < 8; i++)
        cin >> Student_ID[i];

    char Number_Char_Array[16] = {'0', '1', '2', '3', '4', '5', '6', '7', '8', '9', 'A', 'B', 'C', 'D', 'E', 'F'};
    int First_Number_Array[16] = {0, 1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12, 13, 14, 15}, First_Number = 0, Number_7_Reg_Array[7];
    int One_To_Eight_Number_Array[7][10] = { {0, 1, 2, 3, 4, 5, 6, 7, 8, 9},
                                             {0, 1, 2, 3, 4, 5, 6, 7, 8, 9},
                                             {0, 1, 2, 3, 4, 5, 6, 7, 8, 9},
                                             {0, 1, 2, 3, 4, 5, 6, 7, 8, 9},
                                             {0, 1, 2, 3, 4, 5, 6, 7, 8, 9},
                                             {0, 1, 2, 3, 4, 5, 6, 7, 8, 9},
                                             {0, 1, 2, 3, 4, 5, 6, 7, 8, 9}};

    for(int i = 0; i < 16; i++){
        if(Student_ID[0] == Number_Char_Array[i])
            First_Number = First_Number_Array[i];
    }

    for (int i = 1; i < 8; i++)
    {
        for(int j = 0; j < 10; j++){
            if(Student_ID[i] == Number_Char_Array[j]){
                Number_7_Reg_Array[i - 1] = One_To_Eight_Number_Array[i - 1][j];
            }
        }
    }

    Total_Number = (((First_Number * 9) % 10) + (Number_7_Reg_Array[1]) + (((Number_7_Reg_Array[2] * 10) + Number_7_Reg_Array[3]) % 9) + (Number_7_Reg_Array[4] * 100) + (Number_7_Reg_Array[5] * 10) + Number_7_Reg_Array[6]) % 9;
    cout << Total_Number << endl;
}

void Seven(){
    char Input_String[10] = {}, Output_String[2] = {};
    char Output_One_Char[16] = {'0', '1', '2', '3', '4', '5', '6', '7', '8', '9', 'A', 'B', 'C', 'D', 'E', 'F'}, Output_Two_Char[16] = {'0', '1', '2', '3', '4', '5', '6', '7', '8', '9', 'A', 'B', 'C', 'D', 'E', 'F'};
    cin >> Input_String;

    int Input_String_Move = 0, Plus_Number[8] = {8, 4, 2, 1, 8, 4, 2, 1} , One_Total = 0, Two_Total = 0;

    while(Input_String[Input_String_Move]){
        if(Input_String[Input_String_Move] == '1'){
            if(Input_String_Move < 4)
                One_Total = One_Total + Plus_Number[Input_String_Move];
            else
                Two_Total = Two_Total + Plus_Number[Input_String_Move];
        }
        else{
            if(Input_String_Move < 4)
                One_Total = One_Total + 0;
            else
                Two_Total = Two_Total + 0;
        }
        Input_String_Move++;

        if(Input_String_Move > 7)
            break;
    }

    for (int i = 0; i < 16; i++){
        if(One_Total == i)
            Output_String[0] = Output_One_Char[i];
    }

    for (int i = 0; i < 16; i++){
        if(Two_Total == i)
            Output_String[1] = Output_Two_Char[i];
    }

    for (int i = 0; i < 2; i++)
        cout << Output_String[i];

    cout << endl;
}

void Eight(){
    int Set_Array_Ai = 1, Set_Array_Aj = 1, Set_Array_Bi = 1, Set_Array_Bj = 1;

    do{
        cin >> Set_Array_Ai >> Set_Array_Aj;
        cin >> Set_Array_Bi >> Set_Array_Bj;

        if(Set_Array_Ai == Set_Array_Bi && Set_Array_Aj == Set_Array_Bj)
            break;
        else{
            cout << "Error Array\n" << endl;
            continue;
        }
    } while (1);

    cout << endl;
    
    char A_Char_Array[Set_Array_Ai][Set_Array_Aj], B_Char_Array[Set_Array_Bi][Set_Array_Bj];
    for (int i = 0; i < Set_Array_Ai; i++){
        for (int j = 0; j < Set_Array_Aj; j++){
            cin >> A_Char_Array[i][j];
        }
    }
    cout << endl;
    for (int i = 0; i < Set_Array_Bi; i++){
        for (int j = 0; j < Set_Array_Bj; j++){
            cin >> B_Char_Array[i][j];
        }
    }

    cout << endl;

    int Array_Judge_Number = 0;
    for (int i = 0; i < Set_Array_Ai; i++){
        for (int j = 0; j < Set_Array_Bj; j++){
            if(A_Char_Array[i][j] == B_Char_Array[i][j])
                Array_Judge_Number = Array_Judge_Number;
            else
                Array_Judge_Number++;
        }
    }

    if(Array_Judge_Number == 0)
        cout << "True" << endl;
    else
        cout << "False" << endl;
}

// My Others Program
void Nine(){
    
}