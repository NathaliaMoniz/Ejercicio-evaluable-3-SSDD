typedef double double_array<>;

struct KeyValue {
    int key;
    char value1[256];
    int N_value2;
    double V_value2[32];
};

program KEY_VALUE_SERVICE {
    version KEY_VALUE_SERVICE_VERSION {
        int d_init(void) = 1;
        int d_set_value(int,string, int, double_array) = 2;
        struct KeyValue d_get_value(int) = 3;
        int d_modify_value(int, string, int, double_array) = 4;
        int d_delete_key(int) = 5;
        int d_exist(int) = 6;
    } = 1;
} = 99;

