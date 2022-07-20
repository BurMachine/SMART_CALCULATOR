#include <stdio.h>
#include "validation.h"

#define SUCCES 1
#define ERROR 0

int validation(char *IN) {
    int code = 0;
    int left = 0;
    int right = 0;
    int toch = 0;
    int i = 0;
    char input[300];
    delete_spasec(IN, input);
    for (; input[i] != '\n'; i++) {
        if ((input[i] >= 48 && input[i] <= 57) || input[i] == 'x') {
            continue;
        } else if ((input[i] == '+' || input[i] == '-' || input[i] == '/' || input[i] == '*' || input[i] == '^')
        && ((input[i + 1] >= 48 && input[i + 1] <= 57) || input[i + 1] == 'l' || input[i + 1] == 's' || input[i + 1] == 'c' || input[i + 1] == 't' || input[i + 1] == 'a' || input[i + 1] == 'm' || input[i + 1] == '\0' || input[i + 1] == '(')
        && (input[i - 1] == ')' || (input[i - 1] >= 48 && input[i - 1] <= 57) || input[i - 1] == 'x')) {
            toch = 0;
            continue;
        } else if (input[i] == '\0' && i != 0) {
            break;
        } else if (input[i] == '(' && input[i + 1] != ')' && input[i + 1] != '\0') {
            left++;
            continue;
        } else if (input[i] == ')') {
            right++;
            continue;
        }
        else if (input[i] == 't' || input[i] == 'c' || (input[i] == 's' && input[i + 1] == 'i')) {
            code = cos_sin_validation(input, i);
            if (!code) {i += 2; continue;}
            else {break;}
        } else if (input[i] == 's' && input[i + 1] == 'q') {
            code = sqrt_validation(input, i);
            if (!code) {i += 3; continue;}
            else { break;}
        } else if (input[i] == 'l') {
            code = ln_validation(input, i);
            if (!code) {i += 2; continue;}
            else if (code == 3) {code = 0; i += 1; continue;}
            else {break;}
        } else if (input[i] == 'a') {
            if (input[i + 1] == 't' || input[i + 1] == 'c' || input[i + 1] == 's') {
                i++;
                code = cos_sin_validation(input, i);
                if (!code) {i += 2; continue;}
                else {break;}
            }
        } else if (input[i] == 'm') {
            code = mod_validation(input, i);
            if (!code) {i += 2; toch = 0; continue;}
            else {break;}
        } else if ((input[i] == '+' || input[i] == '-') && (input[i - 1] == '(' || i == 0)
        && (input[i + 1] >= 48 && input[i + 1] <= 57)) {
            continue;
        } else if ((input[i] == '.' || input[i] == ',') && (input[i + 1] >= 48 && input[i + 1] <= 57) && (input[i - 1] >= 48 && input[i - 1] <= 57) && toch != 1) {
            toch = 1;
            continue;
        } else if (input[i] == '\0' && i == 0) {
            code = 1;
        }
        else {
            code = 1;
        }
//        if (toch) code = 1;
        if (code) break;
    }
    IN = input;
    if (left != right) code = 1;
    return code;
}


int cos_sin_validation(char *input, int i) {
    int code = 0;
    if (input[i] == 'c' && input[i + 1] == 'o' && input[i + 2] == 's' && input[i + 3] == '(') {
    } else if (input[i] == 's' && input[i + 1] == 'i' && input[i + 2] == 'n' && input[i + 3] == '(') {
    } else if (input[i] == 't' && input[i + 1] == 'a' && input[i + 2] == 'n' && input[i + 3] == '(') {
    } else if (input[i] == 'c' && input[i + 1] == 't' && input[i + 2] == 'g' && input[i + 3] == '(') {
    }
    else {
        code = 1;
    }
    return code;
}

int sqrt_validation(char *input, int i) {
    int code = 0;
    if (!check_for_0(input, i, 4)) {
        if (input[i] == 's' && input[i + 1] == 'q' && input[i + 2] == 'r' && input[i + 3] == 't' && input[i + 4] == '(') {
        } else {
            code = 1;
        }
    }
    return code;
}

int check_for_0(char *input, int i, int len) {
    int code = 0;
    for (; input[i] == '\0' || len == 0; len--) {
        if (input[i] != '\0') code = 1; i++; break;
    }
    return code;
}

int ln_validation(char *input, int i) {
    int code = 0;
    if (!check_for_0(input, i, 3)) {
        if (input[i] == 'l' && input[i + 1] == 'o' && input[i + 2] == 'g' && input[i + 3] == '(') {
        } else if (input[i] == 'l' && input[i + 1] == 'n' && input[i + 2] == '(') {
            code = 3;
        } else {
            code = 1;
        }
    }
    return code;
}

int mod_validation(char *input, int i) {
    int code = 0;
    if (!check_for_0(input, i, 3)) {
        if (input[i] == 'm' && input[i + 1] == 'o' && input[i + 2] == 'd') {
        } else {
            code = 1;
        }
    }
    return code;
}

int *delete_spasec(const char *input, char *out) {
    int j = 0;

    for (int i = 0; i < 256; i++) {
        out[i] = '\0';
    }
    for (int i = 0; input[i] != '\n' && input[i] != '\0'; i++) {
        if (input[i] != ' ' && (input[i] != '\0' || input[i] != '\n')) {
            out[j] = input[i];
            j++;
            continue;
        }
        if (input[i] == '\0' || input[i] == '\n') out[j] = '\0';
    }
    return 0;
}
int plot_validation(long double xMax, long double xMin, long double yMin, long double yMax) {
    int return_value = SUCCESS;
    if (xMin >= xMax || yMin >= yMax)
        return_value = ERROR;
    return return_value;
}
