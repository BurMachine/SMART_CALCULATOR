#ifndef _SRC_VALIDATION_
#define _SRC_VALIDATION_

int validation(char *input);
int plot_validation(long double xMax, long double xMin, long double yMin, long double yMax);

int cos_sin_validation(char *input, int i);
int check_for_0(char *input, int i, int len);
int sqrt_validation(char *input, int i);
int ln_validation(char *input, int i);
int mod_validation(char *input, int i);
char *delete_spasec(const char *input, char *out);
#endif //  _SRC_VALIDATION_