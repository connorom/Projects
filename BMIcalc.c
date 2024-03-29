
#include <stdio.h>
#include <unistd.h>


void calculateMetricBMI();
void calculateImperialBMI();


int main(){
	char choice;
	
	printf("What measurement system? (M for metric, I for imperial)");
	scanf(" %c", &choice);
	
	if(choice == 'M' || choice == 'm') {
		calculateMetricBMI();
	}
	else if (choice == 'I' || 'i') {
		calculateImperialBMI();
	}
	else {
		printf("Invalid, please enter M or I");
		return 1;
	}
	
	return 0;
	
	
}

void calculateMetricBMI() {
    float height, weight, bmi;
	
	
    printf("Enter your height in meters: ");
    scanf("%f", &height);

    printf("Enter your weight in kilograms: ");
    scanf("%f", &weight);

   //calc intermission
    printf("Calculating...");
    fflush(stdout);
    sleep(2);


    bmi = weight / (height * height);

   
    printf("\nYour BMI is: %.2f\n", bmi);

    // Categorize BMI
    if (bmi < 18.5) {
        printf("Underweight\n");
    } else if (bmi >= 18.5 && bmi < 25) {
        printf("Normal weight\n");
    } else if (bmi >= 25 && bmi < 30) {
        printf("Overweight\n");
    } else {
        printf("Obese\n");
    }
}

void calculateImperialBMI() {
    float height, weight, bmi;

    
    printf("Enter your height in inches: ");
    scanf("%f", &height);

    printf("Enter your weight in pounds: ");
    scanf("%f", &weight);

   
    printf("Calculating...");
    fflush(stdout);
    sleep(2);

    
    bmi = (weight / (height * height)) * 703;

    printf("\nYour BMI is: %.3f\n", bmi);

   
    if (bmi < 18.5) {
        printf("Underweight\n");
    } else if (bmi >= 18.5 && bmi < 25) {
        printf("Normal weight\n");
    } else if (bmi >= 25 && bmi < 30) {
        printf("Overweight\n");
    } else {
        printf("Obese\n");
    }
}

