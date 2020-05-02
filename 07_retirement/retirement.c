#include<stdio.h>
#include<stdlib.h>

struct _retire_info{
  int months;
  double contribution;
  double rate_of_return;
};
typedef struct _retire_info retire_info;

double balance_calculator(double balance, retire_info record){
  balance += record.rate_of_return;
  balance += record.contribution;

  return balance;
}

void print_monthly_balance(int months, double balance){
  printf("Age %3d month %2d you have $%.21f\n", months/12,months%12, balance);
}

void retirement (int startAge, double initial, retire_info working, retire_info retired){
  double balance= initial;
  int total_months= startAge - 1;
  for(int i=0;i<working.months; i++){
    total_months += 1;
    print_monthly_balance(total_months, balance);
    balance_calculator(balance,working);
  }

  for(int j=0; j<retired.months; j++){
    total_months += 1;
    print_monthly_balance(total_months, balance);
    balance_calculator(balance,retired);
  }
  return;
}

int main(){
  retire_info working;
  working.months= 489;
  working.contribution = 1000;
  working.rate_of_return = 0.045/12.0;

  retire_info retired;
  retired.months = 384;
  retired.contribution = -4000;
  retired.rate_of_return = 0.01/12.0;

  retirement(327, 21345, working, retired);

  return 0;

}
