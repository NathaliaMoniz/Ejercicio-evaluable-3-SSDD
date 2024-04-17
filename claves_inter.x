const MAX_STRING_LEN = 256;
const MAX_DOUBLE_LEN = 32;

typedef double double_array<MAX_DOUBLE_LEN>;

struct KeyValue {
    int key;
    string value1<MAX_STRING_LEN>;
    int N_value2;
    double_array V_value2;
};


program KEY_VALUE_SERVICE {
    version KEY_VALUE_SERVICE_VERSION {
        int d_init(void) = 1;
        int d_set_value(struct KeyValue) = 2;
        struct KeyValue d_get_value(int key) = 3;
        int d_modify_value(struct KeyValue) = 4;
        int d_delete_key(int key) = 5;
        int d_exist(int key) = 6;
    } = 1;
} = 99;
