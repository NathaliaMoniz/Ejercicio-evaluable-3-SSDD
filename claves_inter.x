const MAX_STRING_LEN = 256;
const MAX_DOUBLE_LEN = 32;

typedef double double_array<MAX_DOUBLE_LEN>;
typedef string char_array<MAX_STRING_LEN>;

struct KeyValue {
    int key;
    char_array value1;
    int N_value2;
    double_array V_value2;
};

program KEY_VALUE_SERVICE {
    version KEY_VALUE_SERVICE_VERSION {
        int d_init(void) = 1;
        int d_set_value(int, char_array, int, double_array) = 2;
        int d_get_value(int) = 3;
        int d_modify_value(int, char_array, int, double_array) = 4;
        int d_delete_key(int) = 5;
        int d_exist(int) = 6;
    } = 1;
} = 99;

