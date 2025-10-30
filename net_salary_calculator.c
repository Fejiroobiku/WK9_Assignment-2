#include <stdio.h>

// Function to calculate tax based on salary range
void calculateTax(double *gross, double *tax) {
    if (*gross <= 100) {
        *tax = 0.0;
    } else if (*gross <= 300) {
        *tax = *gross * 0.20;
    } else {
        *tax = *gross * 0.28;
    }
}

// Function to calculate medical insurance (5%)
void calculateMedical(double *gross, double *medical) {
    *medical = *gross * 0.05;
}

// Function to calculate maternity leave (0.3%)
void calculateMaternity(double *gross, double *maternity) {
    *maternity = *gross * 0.003;
}

// Function to calculate social security (3%)
void calculateSocialSecurity(double *gross, double *socialSecurity) {
    *socialSecurity = *gross * 0.03;
}

// Function to calculate net salary
void calculateNetSalary(double *gross, double *net) {
    double tax, medical, maternity, socialSecurity;

    calculateTax(gross, &tax);
    calculateMedical(gross, &medical);
    calculateMaternity(gross, &maternity);
    calculateSocialSecurity(gross, &socialSecurity);

    *net = *gross - (tax + medical + maternity + socialSecurity);
}

int main() {
    double grossSalary, netSalary;
    
    printf("Enter gross salary (USD): ");
    scanf("%lf", &grossSalary);
    
    calculateNetSalary(&grossSalary, &netSalary);
    
    printf("Net Salary: $%.2f\n", netSalary);
    return 0;
}
