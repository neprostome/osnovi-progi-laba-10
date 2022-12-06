#include <stdio.h>

void RemoveExtraSpacesRecurcive(char *str, int i) {
    if (str[i] == '\0')
        return;
    if (str[i] == ' ' && str[i + 1] == ' ') {
        int j = i;
        while (str[j] != '\0') {
            str[j] = str[j + 1];
            j++;
        }
        RemoveExtraSpacesRecurcive(str, i);
    } else if (str[i] == '[' && str[i + 1] == ' ') {
        int j = i + 1;
        while (str[j] != '\0') {
            str[j] = str[j + 1];
            j++;
        }
        RemoveExtraSpacesRecurcive(str, i);
    } else if (str[i] == ' ' && str[i + 1] == ']') {
        int j = i;
        while (str[j] != '\0') {
            str[j] = str[j + 1];
            j++;
        }
        RemoveExtraSpacesRecurcive(str, i);
    } else if (str[i] == '{' && str[i + 1] == ' ') {
        int j = i + 1;
        while (str[j] != '\0') {
            str[j] = str[j + 1];
            j++;
        }
        RemoveExtraSpacesRecurcive(str, i);
    } else if (str[i] == ' ' && str[i + 1] == '}') {
        int j = i;
        while (str[j] != '\0') {
            str[j] = str[j + 1];
            j++;
        }
        RemoveExtraSpacesRecurcive(str, i);
    } else if (str[i] == '(' && str[i + 1] == ' ') {
        int j = i + 1;
        while (str[j] != '\0') {
            str[j] = str[j + 1];
            j++;
        }
        RemoveExtraSpacesRecurcive(str, i);
    } else if (str[i] == ' ' && str[i + 1] == ')') {
        int j = i;
        while (str[j] != '\0') {
            str[j] = str[j + 1];
            j++;
        }
        RemoveExtraSpacesRecurcive(str, i);
    } else if (str[i] == '(' && str[i + 1] == ' ') {
        int j = i + 1;
        while (str[j] != '\0') {
            str[j] = str[j + 1];
            j++;
        }
        RemoveExtraSpacesRecurcive(str, i);
    } else if (str[i] == ' ' && str[i + 1] == ')') {
        int j = i;
        while (str[j] != '\0') {
            str[j] = str[j + 1];
            j++;
        }
        RemoveExtraSpacesRecurcive(str, i);
    } else if (str[i] == ' ' && str[i + 1] == ';') {
        int j = i;
        while (str[j] != '\0') {
            str[j] = str[j + 1];
            j++;
        }
        RemoveExtraSpacesRecurcive(str, i);
    } else if (str[i] == ';' && str[i + 1] == ' ') {
        int j = i + 1;
        while (str[j] != '\0') {
            str[j] = str[j + 1];
            j++;
        }
        RemoveExtraSpacesRecurcive(str, i);
    } else if (str[i] == ' ' && str[i + 1] == ',') {
        int j = i;
        while (str[j] != '\0') {
            str[j] = str[j + 1];
            j++;
        }
        RemoveExtraSpacesRecurcive(str, i);
    } else if (str[i] == ',' && str[i + 1] == ' ') {
        int j = i + 1;
        while (str[j] != '\0') {
            str[j] = str[j + 1];
            j++;
        }
        RemoveExtraSpacesRecurcive(str, i);
    } else {
        RemoveExtraSpacesRecurcive(str, i + 1);
    }
    RemoveExtraSpacesRecurcive(str, i + 1);
}

int main() {
    int n;
    printf("Enter the number of characters per line\n");
    char s[n];
    printf("Enter the string\n");
    RemoveExtraSpacesRecurcive(s, 0);
    printf("%s", s);
}
