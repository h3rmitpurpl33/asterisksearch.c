
    int main(){
    int ch,lowercase_lett, digits, other, uppercase_lett, asterisks;
    lowercase_lett = 0;
    uppercase_lett = 0;
    digits = 0;
    other = 0;
    asterisks = 0;
    printf("enter characters : ");
    while((ch = getchar()) != '\n' && ch != EOF)
    {
        if(asterisks == 2){
            break; //stamataei thn anazhthsh an vrei dyo
        }else if(ch == '*'){
            asterisks++; //aukshsh mexri na exoume 2
        }

        else if(asterisks == 1){
            if(ch>='a' && ch <= 'z'){
                lowercase_lett++;
            }
            else if(ch>='A' && ch <= 'Z'){
                uppercase_lett++;
            }
            else if(ch >='0' && ch <= '9'){
                digits++;
            }
            else{
                other++;
            }
        }
    }

    if (asterisks == 2){
        printf("\n%d letters %d digits and %d other" , lowercase_lett+uppercase_lett,digits,other);
    }
    else{
        printf("\ntwo asterisks not found\n");
    }

    return 0;
}
