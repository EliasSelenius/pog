
// Basics
typedef signed char int8;
typedef signed short int16;
typedef signed int int32;
typedef signed long long int64;
typedef unsigned char uint8;
typedef unsigned short uint16;
typedef unsigned int uint32;
typedef unsigned long long uint64;
typedef float float32;
typedef double float64;
int printf(const char* format, ...);
typedef struct Array { void* data; uint32 length; } Array;

// Structs forward declarations
typedef struct Arena Arena;
typedef struct List List;
typedef struct string string;
typedef struct StringBuilder StringBuilder;
typedef struct StringReader StringReader;
typedef struct SR_Token SR_Token;
typedef struct FILETIME FILETIME;
typedef struct WIN32_FIND_DATAW WIN32_FIND_DATAW;
typedef struct WIN32_FIND_DATAA WIN32_FIND_DATAA;
typedef struct TypeInfo TypeInfo;
typedef struct Struct Struct;
typedef struct StructField StructField;
typedef struct Procedure Procedure;
typedef struct vec2 vec2;
typedef struct ivec2 ivec2;
typedef struct vec3 vec3;
typedef struct ivec3 ivec3;
typedef struct vec4 vec4;
typedef struct ivec4 ivec4;
typedef struct mat2 mat2;
typedef struct mat3 mat3;
typedef struct mat4 mat4;
typedef struct quat quat;
typedef struct Pog_Token Pog_Token;
typedef struct Pog_TokenData Pog_TokenData;
typedef struct Pog_Node Pog_Node;
typedef struct Pog_Parser Pog_Parser;
typedef struct Pog_Unit Pog_Unit;
typedef struct Pog_Error Pog_Error;

// Enums
typedef uint32 Pog_Tokenkind;
typedef uint32 Pog_Nodekind;

// Type aliases
typedef uint32 My_Type;
typedef uint8 bool;
typedef uint8 byte;
typedef struct FILE FILE;
typedef void* HANDLE;

// Structs
struct Arena {
    uint32 top;
};
struct List {
    uint32 stride;
    uint32 capacity;
    uint32 length;
};
struct string {
    char* chars;
    uint32 length;
};
struct StringBuilder {
    char* content;
    uint32 capacity;
    uint32 length;
};
struct StringReader {
    char* current;
    uint32 line;
    uint32 column;
};
struct SR_Token {
    string str;
    uint32 line;
    uint32 column;
};
struct FILETIME {
    uint32 dwLowDateTime;
    uint32 dwHighDateTime;
};
struct TypeInfo {
    string name;
};
struct Struct {
    char* name;
    Array fields;
};
struct StructField {
    char* name;
    uint32 typeid;
    uint32 offset;
};
struct vec2 {
    float32 x;
    float32 y;
};
struct ivec2 {
    int32 x;
    int32 y;
};
struct vec3 {
    float32 x;
    float32 y;
    float32 z;
};
struct ivec3 {
    int32 x;
    int32 y;
    int32 z;
};
struct vec4 {
    float32 x;
    float32 y;
    float32 z;
    float32 w;
};
struct ivec4 {
    int32 x;
    int32 y;
    int32 z;
    int32 w;
};
struct quat {
    float32 x;
    float32 y;
    float32 z;
    float32 w;
};
struct Pog_TokenData {
    string str;
    uint64 integer;
    float64 decimal;
    char character;
};
struct Pog_Parser {
    Pog_Token* tokens;
    uint32 token_index;
    Pog_Unit* unit;
    Arena* arena;
};
struct Pog_Unit {
    Arena* arena;
    Pog_Node** top_level_nodes;
    Pog_Error* errors;
};
struct Procedure {
    string name;
    void* code;
    TypeInfo return_type;
    Array argument_types;
    Array argument_names;
};
struct Pog_Token {
    Pog_Tokenkind kind;
    uint32 row;
    uint32 col;
    Pog_TokenData data;
};
struct mat2 {
    vec2 row1;
    vec2 row2;
};
struct Pog_Error {
    Pog_Token token;
    string message;
};
struct WIN32_FIND_DATAW {
    uint32 dwFileAttributes;
    FILETIME ftCreationTime;
    FILETIME ftLastAccessTime;
    FILETIME ftLastWriteTime;
    uint32 nFileSizeHigh;
    uint32 nFileSizeLow;
    uint32 dwReserved0;
    uint32 dwReserved1;
    uint16 cFileName[260];
    uint16 cAlternateFileName[14];
};
struct WIN32_FIND_DATAA {
    uint32 dwFileAttributes;
    FILETIME ftCreationTime;
    FILETIME ftLastAccessTime;
    FILETIME ftLastWriteTime;
    uint32 nFileSizeHigh;
    uint32 nFileSizeLow;
    uint32 dwReserved0;
    uint32 dwReserved1;
    char cFileName[260];
    char cAlternateFileName[14];
};
struct mat3 {
    vec3 row1;
    vec3 row2;
    vec3 row3;
};
struct mat4 {
    vec4 row1;
    vec4 row2;
    vec4 row3;
    vec4 row4;
};
struct Pog_Node {
    Pog_Nodekind kind;
    uint32 ptr_degree;
    Pog_Token token;
    Pog_Token name;
    Pog_Node* enclosing_scope;
    Pog_Node* node1;
    Pog_Node* node2;
    Pog_Node* node3;
    Pog_Node* node4;
    Pog_Node** sub_nodes;
};

// Runtime type information
static Array structs = (Array) { .length = 29, .data = (Struct[]){
    {
        .name = "Arena",
        .fields = (Array) { .length = 1, .data = (StructField[]){
            {.name = "top", .typeid = 0, .offset = 0},
        }}
    },
    {
        .name = "List",
        .fields = (Array) { .length = 3, .data = (StructField[]){
            {.name = "stride", .typeid = 0, .offset = 0},
            {.name = "capacity", .typeid = 0, .offset = 0},
            {.name = "length", .typeid = 0, .offset = 0},
        }}
    },
    {
        .name = "string",
        .fields = (Array) { .length = 2, .data = (StructField[]){
            {.name = "chars", .typeid = 0, .offset = 0},
            {.name = "length", .typeid = 0, .offset = 0},
        }}
    },
    {
        .name = "StringBuilder",
        .fields = (Array) { .length = 3, .data = (StructField[]){
            {.name = "content", .typeid = 0, .offset = 0},
            {.name = "capacity", .typeid = 0, .offset = 0},
            {.name = "length", .typeid = 0, .offset = 0},
        }}
    },
    {
        .name = "StringReader",
        .fields = (Array) { .length = 3, .data = (StructField[]){
            {.name = "current", .typeid = 0, .offset = 0},
            {.name = "line", .typeid = 0, .offset = 0},
            {.name = "column", .typeid = 0, .offset = 0},
        }}
    },
    {
        .name = "SR_Token",
        .fields = (Array) { .length = 3, .data = (StructField[]){
            {.name = "str", .typeid = 0, .offset = 0},
            {.name = "line", .typeid = 0, .offset = 0},
            {.name = "column", .typeid = 0, .offset = 0},
        }}
    },
    {
        .name = "FILETIME",
        .fields = (Array) { .length = 2, .data = (StructField[]){
            {.name = "dwLowDateTime", .typeid = 0, .offset = 0},
            {.name = "dwHighDateTime", .typeid = 0, .offset = 0},
        }}
    },
    {
        .name = "WIN32_FIND_DATAW",
        .fields = (Array) { .length = 10, .data = (StructField[]){
            {.name = "dwFileAttributes", .typeid = 0, .offset = 0},
            {.name = "ftCreationTime", .typeid = 0, .offset = 0},
            {.name = "ftLastAccessTime", .typeid = 0, .offset = 0},
            {.name = "ftLastWriteTime", .typeid = 0, .offset = 0},
            {.name = "nFileSizeHigh", .typeid = 0, .offset = 0},
            {.name = "nFileSizeLow", .typeid = 0, .offset = 0},
            {.name = "dwReserved0", .typeid = 0, .offset = 0},
            {.name = "dwReserved1", .typeid = 0, .offset = 0},
            {.name = "cFileName", .typeid = 0, .offset = 0},
            {.name = "cAlternateFileName", .typeid = 0, .offset = 0},
        }}
    },
    {
        .name = "WIN32_FIND_DATAA",
        .fields = (Array) { .length = 10, .data = (StructField[]){
            {.name = "dwFileAttributes", .typeid = 0, .offset = 0},
            {.name = "ftCreationTime", .typeid = 0, .offset = 0},
            {.name = "ftLastAccessTime", .typeid = 0, .offset = 0},
            {.name = "ftLastWriteTime", .typeid = 0, .offset = 0},
            {.name = "nFileSizeHigh", .typeid = 0, .offset = 0},
            {.name = "nFileSizeLow", .typeid = 0, .offset = 0},
            {.name = "dwReserved0", .typeid = 0, .offset = 0},
            {.name = "dwReserved1", .typeid = 0, .offset = 0},
            {.name = "cFileName", .typeid = 0, .offset = 0},
            {.name = "cAlternateFileName", .typeid = 0, .offset = 0},
        }}
    },
    {
        .name = "TypeInfo",
        .fields = (Array) { .length = 1, .data = (StructField[]){
            {.name = "name", .typeid = 0, .offset = 0},
        }}
    },
    {
        .name = "Struct",
        .fields = (Array) { .length = 2, .data = (StructField[]){
            {.name = "name", .typeid = 0, .offset = 0},
            {.name = "fields", .typeid = 0, .offset = 0},
        }}
    },
    {
        .name = "StructField",
        .fields = (Array) { .length = 3, .data = (StructField[]){
            {.name = "name", .typeid = 0, .offset = 0},
            {.name = "typeid", .typeid = 0, .offset = 0},
            {.name = "offset", .typeid = 0, .offset = 0},
        }}
    },
    {
        .name = "Procedure",
        .fields = (Array) { .length = 5, .data = (StructField[]){
            {.name = "name", .typeid = 0, .offset = 0},
            {.name = "code", .typeid = 0, .offset = 0},
            {.name = "return_type", .typeid = 0, .offset = 0},
            {.name = "argument_types", .typeid = 0, .offset = 0},
            {.name = "argument_names", .typeid = 0, .offset = 0},
        }}
    },
    {
        .name = "vec2",
        .fields = (Array) { .length = 2, .data = (StructField[]){
            {.name = "x", .typeid = 0, .offset = 0},
            {.name = "y", .typeid = 0, .offset = 0},
        }}
    },
    {
        .name = "ivec2",
        .fields = (Array) { .length = 2, .data = (StructField[]){
            {.name = "x", .typeid = 0, .offset = 0},
            {.name = "y", .typeid = 0, .offset = 0},
        }}
    },
    {
        .name = "vec3",
        .fields = (Array) { .length = 3, .data = (StructField[]){
            {.name = "x", .typeid = 0, .offset = 0},
            {.name = "y", .typeid = 0, .offset = 0},
            {.name = "z", .typeid = 0, .offset = 0},
        }}
    },
    {
        .name = "ivec3",
        .fields = (Array) { .length = 3, .data = (StructField[]){
            {.name = "x", .typeid = 0, .offset = 0},
            {.name = "y", .typeid = 0, .offset = 0},
            {.name = "z", .typeid = 0, .offset = 0},
        }}
    },
    {
        .name = "vec4",
        .fields = (Array) { .length = 4, .data = (StructField[]){
            {.name = "x", .typeid = 0, .offset = 0},
            {.name = "y", .typeid = 0, .offset = 0},
            {.name = "z", .typeid = 0, .offset = 0},
            {.name = "w", .typeid = 0, .offset = 0},
        }}
    },
    {
        .name = "ivec4",
        .fields = (Array) { .length = 4, .data = (StructField[]){
            {.name = "x", .typeid = 0, .offset = 0},
            {.name = "y", .typeid = 0, .offset = 0},
            {.name = "z", .typeid = 0, .offset = 0},
            {.name = "w", .typeid = 0, .offset = 0},
        }}
    },
    {
        .name = "mat2",
        .fields = (Array) { .length = 2, .data = (StructField[]){
            {.name = "row1", .typeid = 0, .offset = 0},
            {.name = "row2", .typeid = 0, .offset = 0},
        }}
    },
    {
        .name = "mat3",
        .fields = (Array) { .length = 3, .data = (StructField[]){
            {.name = "row1", .typeid = 0, .offset = 0},
            {.name = "row2", .typeid = 0, .offset = 0},
            {.name = "row3", .typeid = 0, .offset = 0},
        }}
    },
    {
        .name = "mat4",
        .fields = (Array) { .length = 4, .data = (StructField[]){
            {.name = "row1", .typeid = 0, .offset = 0},
            {.name = "row2", .typeid = 0, .offset = 0},
            {.name = "row3", .typeid = 0, .offset = 0},
            {.name = "row4", .typeid = 0, .offset = 0},
        }}
    },
    {
        .name = "quat",
        .fields = (Array) { .length = 4, .data = (StructField[]){
            {.name = "x", .typeid = 0, .offset = 0},
            {.name = "y", .typeid = 0, .offset = 0},
            {.name = "z", .typeid = 0, .offset = 0},
            {.name = "w", .typeid = 0, .offset = 0},
        }}
    },
    {
        .name = "Pog_Token",
        .fields = (Array) { .length = 4, .data = (StructField[]){
            {.name = "kind", .typeid = 0, .offset = 0},
            {.name = "row", .typeid = 0, .offset = 0},
            {.name = "col", .typeid = 0, .offset = 0},
            {.name = "data", .typeid = 0, .offset = 0},
        }}
    },
    {
        .name = "Pog_TokenData",
        .fields = (Array) { .length = 4, .data = (StructField[]){
            {.name = "str", .typeid = 0, .offset = 0},
            {.name = "integer", .typeid = 0, .offset = 0},
            {.name = "decimal", .typeid = 0, .offset = 0},
            {.name = "character", .typeid = 0, .offset = 0},
        }}
    },
    {
        .name = "Pog_Node",
        .fields = (Array) { .length = 10, .data = (StructField[]){
            {.name = "kind", .typeid = 0, .offset = 0},
            {.name = "ptr_degree", .typeid = 0, .offset = 0},
            {.name = "token", .typeid = 0, .offset = 0},
            {.name = "name", .typeid = 0, .offset = 0},
            {.name = "enclosing_scope", .typeid = 0, .offset = 0},
            {.name = "node1", .typeid = 0, .offset = 0},
            {.name = "node2", .typeid = 0, .offset = 0},
            {.name = "node3", .typeid = 0, .offset = 0},
            {.name = "node4", .typeid = 0, .offset = 0},
            {.name = "sub_nodes", .typeid = 0, .offset = 0},
        }}
    },
    {
        .name = "Pog_Parser",
        .fields = (Array) { .length = 4, .data = (StructField[]){
            {.name = "tokens", .typeid = 0, .offset = 0},
            {.name = "token_index", .typeid = 0, .offset = 0},
            {.name = "unit", .typeid = 0, .offset = 0},
            {.name = "arena", .typeid = 0, .offset = 0},
        }}
    },
    {
        .name = "Pog_Unit",
        .fields = (Array) { .length = 3, .data = (StructField[]){
            {.name = "arena", .typeid = 0, .offset = 0},
            {.name = "top_level_nodes", .typeid = 0, .offset = 0},
            {.name = "errors", .typeid = 0, .offset = 0},
        }}
    },
    {
        .name = "Pog_Error",
        .fields = (Array) { .length = 2, .data = (StructField[]){
            {.name = "token", .typeid = 0, .offset = 0},
            {.name = "message", .typeid = 0, .offset = 0},
        }}
    },
    
}};

// Forward declarations
void __main();
static float32 test();
int32 fopen_s(FILE** stream, char* filename, char* mode);
int32 fclose(FILE* stream);
int32 fseek(FILE* stream, int32 offset, int32 origin);
uint64 ftell(FILE* stream);
void rewind(FILE* stream);
uint64 fread(void* buffer, uint64 elementSize, uint64 elementCount, FILE* stream);
uint64 fwrite(void* ptr, uint64 size, uint64 nmemb, FILE* stream);
void* calloc(uint64 count, uint64 size);
void* malloc(uint64 size);
void free(void* block);
void* realloc(void* buffer, uint64 size);
void* memcpy(void* dst, void* src, uint64 size);
void* memset(void* dst, int32 val, uint64 size);
void* memmove(void* dst, void* src, uint64 size);
int32 memcmp(void* lhs, void* rhs, uint64 count);
uint64 strlen(char* str);
void exit(int32 code);
static FILE* open_file(char* file, char* mode);
static char* fileread_overload1(char* filename);
static char* fileread_overload2(char* filename, char* mode);
static void filewrite_overload1(char* filename, char* content);
static void filewrite_overload2(string filename, char* content);
static Array read_binary_file(char* filename);
static void write_binary_file_overload1(char* filename, void* data, uint64 bytes);
static void write_binary_file_overload2(char* filename, Array buffer);
static Arena* arena_create();
static void* arena_bottom(Arena* arena);
static uint64 align(uint64 value, uint64 align);
static void* arena_alloc(Arena* arena, uint32 size);
static void arena_release(Arena* arena);
static void* list_create_overload1(uint32 stride);
static void* list_create_overload2(uint32 stride, uint32 starting_capacity);
static List* list_head(void* list);
static uint32 list_length(void* list);
static uint32 list_capacity(void* list);
static uint32 list_stride(void* list);
static void list_set_length(void* list, uint32 new_len);
static void list_delete(void* list);
static void list_clear(void* list);
static void list_grow(void** list, uint32 new_capacity);
static void* list_add(void** list, void* data);
static void* list_append(void** list);
static void* list_get(void* list, uint32 index);
static void* list_last_item(void* list);
static int32 index_of(void* list, void* data);
static void list_remove(void* list, void* item);
static void list_unordered_remove(void* list, uint32 index);
static void list_ordered_remove(void* list, uint32 index);
static void* list_insert_overload1(void** list, uint32 index);
static void* list_insert_overload2(void** list, uint32 index, void* data);
static void* list_pop(void* list);
static string make_string_overload1(char* c_str);
static string make_string_overload2(char* c_str, uint32 len);
static uint64 pow_uint64(uint64 x, uint64 y);
static uint64 parse_int_overload1(string str);
static uint64 parse_int_overload2(char* c_str);
static uint64 parse_int_overload3(char* c_str, uint32* length);
static uint64 hex_digit_value(char h);
static uint64 parse_hex(string str);
static float64 parse_float_overload1(char* c_str);
static float64 parse_float_overload2(char* c_str, uint32* length);
static string to_string_overload1(uint32 num);
static string to_string_overload2(uint64 num);
static string to_string_overload3(int32 num);
static string to_string_overload4(int64 num);
static string to_string_overload5(float32 f);
static string to_string_overload6(StringBuilder* sb, float32 f);
static bool string_equals_overload1(char* a, string b);
static bool string_equals_overload2(string a, char* b);
static bool string_equals_overload3(string a, string b);
static bool starts_with(char* text, char* start);
static string substr_until_overload1(char* str, char delim);
static string substr_until_overload2(string str, char delim);
static string substr_to_end(string str, char start);
static char* trim_starting_whitespace(char* c_str);
static string trim_start_overload1(string str, uint32 len);
static string trim_end_overload1(string str, uint32 len);
static string trim_overload1(string str, uint32 len);
static string trim_start_overload2(string str, char c);
static string trim_end_overload2(string str, char c);
static string trim_overload2(string str, char c);
static bool is_whitespace(char c);
static bool is_whitespace_or_null(char c);
static bool is_upper_case_letter(char c);
static bool is_lower_case_letter(char c);
static bool is_letter(char c);
static bool is_digit(char c);
static bool is_hexdigit(char c);
static bool is_alphanumeric(char c);
static bool is_punctuation(char c);
static bool is_whitespace_or_empty(string str);
static string alloc_string_copy_overload1(char* str);
static string alloc_string_copy_overload2(string str);
static uint32 lev(string a, string b);
static string to_string_overload7(StringBuilder sb);
static string to_string_overload8(StringBuilder* sb);
static StringBuilder* alloc_temp_builders(uint32 count);
static StringBuilder* temp_builder();
static char* concat_overload1(char* a, char* b);
static char* concat_overload2(char* a, string b);
static char* concat_overload3(string a, char* b);
static char* concat_overload4(string a, string b);
static char* concat_overload5(char* a, char* b, char* c);
static char* concat_overload6(string a, string b, string c);
static char* concat_overload7(char* a, string b, char* c);
static StringBuilder sb_create();
static void sb_free(StringBuilder sb);
static void sb_grow(StringBuilder* sb, uint32 len);
static void sb_append_overload1(StringBuilder* sb, char* str);
static void sb_append_overload2(StringBuilder* sb, string str);
static void sb_append_overload3(StringBuilder* sb, char c);
static void sb_append_overload4(StringBuilder* sb, float32 f);
static void sb_append_overload5(StringBuilder* sb, vec2 v);
static void sb_insert(StringBuilder* sb, uint32 loc, string str);
static void sb_remove(StringBuilder* sb, uint32 loc, uint32 num_chars);
static void sb_truncate_length(StringBuilder* sb, uint32 new_len);
static void sb_clear(StringBuilder* sb);
int32 FindClose(HANDLE hFindFile);
HANDLE FindFirstFileA(char* lpFileName, WIN32_FIND_DATAA* lpFindFileData);
int32 FindNextFileA(HANDLE hFindFile, WIN32_FIND_DATAA* lpFindFileData);
uint32 GetFullPathNameA(char* lpFileName, uint32 nBufferLength, char* lpBuffer, char** lpFilePart);
bool SetCurrentDirectoryA(char* lpPathName);
uint32 GetCurrentDirectoryA(uint32 nBufferLength, char* lpBuffer);
char* PathCombineA(char* pszDest, char* pszDir, char* pszFile);
uint32 GetLastError();
void* VirtualAlloc(void* lpAddress, uint64 dwSize, uint32 flAllocationType, uint32 flProtect);
int32 VirtualFree(void* lpAddress, uint64 dwSize, uint32 dwFreeType);
static void* vmem_reserve(uint64 size);
static void vmem_release(void* address);
static void vmem_commit(void* address, uint64 size);
static void vmem_decommit(void* address, uint64 size);
float64 sin(float64 t);
float64 asin(float64 t);
float32 sinf(float32 t);
float32 asinf(float32 t);
float64 cos(float64 t);
float64 acos(float64 t);
float32 cosf(float32 t);
float32 acosf(float32 t);
float64 tan(float64 t);
float64 atan(float64 t);
float32 tanf(float32 t);
float32 atanf(float32 t);
float64 sqrt(float64 x);
float32 sqrtf(float32 x);
float32 floorf(float32 x);
float64 pow(float64 b, float64 e);
float32 powf(float32 b, float32 e);
float64 exp(float64 x);
float32 expf(float32 x);
static float32 sq(float32 a);
static int32 min_overload1(int32 a, int32 b);
static ivec2 min_overload2(ivec2 a, ivec2 b);
static ivec3 min_overload3(ivec3 a, ivec3 b);
static ivec4 min_overload4(ivec4 a, ivec4 b);
static int32 max_overload1(int32 a, int32 b);
static ivec2 max_overload2(ivec2 a, ivec2 b);
static ivec3 max_overload3(ivec3 a, ivec3 b);
static ivec4 max_overload4(ivec4 a, ivec4 b);
static uint32 min_overload5(uint32 a, uint32 b);
static uint32 max_overload5(uint32 a, uint32 b);
static float32 min_overload6(float32 a, float32 b);
static vec2 min_overload7(vec2 a, vec2 b);
static vec3 min_overload8(vec3 a, vec3 b);
static vec4 min_overload9(vec4 a, vec4 b);
static float32 max_overload6(float32 a, float32 b);
static vec2 max_overload7(vec2 a, vec2 b);
static vec3 max_overload8(vec3 a, vec3 b);
static vec4 max_overload9(vec4 a, vec4 b);
static int32 clamp_overload1(int32 t, int32 min, int32 max);
static float32 clamp_overload2(float32 t, float32 min, float32 max);
static float32 clamp01(float32 t);
static float32 lerp_overload1(float32 t, float32 a, float32 b);
static float32 smoothstep(float32 edge0, float32 edge1, float32 x);
static float32 map(float32 t, float32 a, float32 b, float32 c, float32 d);
static bool exp_decay_overload1(float32* a, float32 b, float32 decay, float32 dt);
static float32 exp_decay_overload2(float32 a, float32 b, float32 decay, float32 dt);
static vec2 exp_decay_overload3(vec2 a, vec2 b, float32 decay, float32 dt);
static vec3 exp_decay_overload4(vec3 a, vec3 b, float32 decay, float32 dt);
static vec4 exp_decay_overload5(vec4 a, vec4 b, float32 decay, float32 dt);
static bool almost_equals_overload1(float32 a, float32 b, float32 threshold);
static bool almost_equals_overload2(float32 a, float32 b);
static float32 fract_overload1(float32 x);
static float32 round_overload1(float32 x);
static float32 round2multiple_overload1(float32 x, float32 n);
static float32 abs_overload1(float32 x);
static float64 abs_overload2(float64 x);
static bool is_nan_overload1(float32 x);
static bool is_nan_overload2(vec2 v);
static vec2 make_vec2(float32 v);
static vec3 make_vec3(float32 v);
static vec4 make_vec4(float32 v);
static ivec2 make_ivec2(int32 v);
static ivec3 make_ivec3(int32 v);
static ivec4 make_ivec4(int32 v);
static vec2 make_vec_overload1(float32 x, float32 y);
static vec3 make_vec_overload2(float32 x, float32 y, float32 z);
static vec4 make_vec_overload3(float32 x, float32 y, float32 z, float32 w);
static ivec2 make_ivec_overload1(int32 x, int32 y);
static ivec3 make_ivec_overload2(int32 x, int32 y, int32 z);
static ivec4 make_ivec_overload3(int32 x, int32 y, int32 z, int32 w);
static vec3 make_vec_overload4(vec2 xy, float32 z);
static vec3 make_vec_overload5(float32 x, vec2 yz);
static ivec3 make_ivec_overload4(ivec2 xy, int32 z);
static ivec3 make_ivec_overload5(int32 x, ivec2 yz);
static vec4 make_vec_overload6(vec3 xyz, float32 w);
static vec4 make_vec_overload7(float32 x, vec3 yzw);
static ivec4 make_ivec_overload6(ivec3 xyz, int32 w);
static ivec4 make_ivec_overload7(int32 x, ivec3 yzw);
static vec2 make_vec_overload8(ivec2 v);
static vec3 make_vec_overload9(ivec3 v);
static vec4 make_vec_overload10(ivec4 v);
static ivec2 make_ivec_overload8(vec2 v);
static ivec3 make_ivec_overload9(vec3 v);
static ivec4 make_ivec_overload10(vec4 v);
static bool equals_overload1(vec2 a, vec2 b);
static bool equals_overload2(vec3 a, vec3 b);
static bool equals_overload3(vec4 a, vec4 b);
static bool equals_overload4(ivec2 a, ivec2 b);
static bool equals_overload5(ivec3 a, ivec3 b);
static bool equals_overload6(ivec4 a, ivec4 b);
static vec2 floor_overload1(vec2 v);
static vec3 floor_overload2(vec3 v);
static vec4 floor_overload3(vec4 v);
static vec2 fract_overload2(vec2 v);
static vec3 fract_overload3(vec3 v);
static vec4 fract_overload4(vec4 v);
static vec2 round_overload2(vec2 v);
static vec3 round_overload3(vec3 v);
static vec4 round_overload4(vec4 v);
static vec2 round2multiple_overload2(vec2 v, float32 n);
static vec3 round2multiple_overload3(vec3 v, float32 n);
static vec4 round2multiple_overload4(vec4 v, float32 n);
static vec2 sub_overload1(vec2 a, vec2 b);
static vec3 sub_overload2(vec3 a, vec3 b);
static vec4 sub_overload3(vec4 a, vec4 b);
static ivec2 sub_overload4(ivec2 a, ivec2 b);
static ivec3 sub_overload5(ivec3 a, ivec3 b);
static ivec4 sub_overload6(ivec4 a, ivec4 b);
static vec2 add_overload1(vec2 a, vec2 b);
static vec3 add_overload2(vec3 a, vec3 b);
static vec4 add_overload3(vec4 a, vec4 b);
static ivec2 add_overload4(ivec2 a, ivec2 b);
static ivec3 add_overload5(ivec3 a, ivec3 b);
static ivec4 add_overload6(ivec4 a, ivec4 b);
static vec2 mul_overload1(vec2 a, vec2 b);
static vec3 mul_overload2(vec3 a, vec3 b);
static vec4 mul_overload3(vec4 a, vec4 b);
static ivec2 mul_overload4(ivec2 a, ivec2 b);
static ivec3 mul_overload5(ivec3 a, ivec3 b);
static ivec4 mul_overload6(ivec4 a, ivec4 b);
static vec2 mul_overload7(vec2 a, float32 s);
static vec3 mul_overload8(vec3 a, float32 s);
static vec4 mul_overload9(vec4 a, float32 s);
static ivec2 mul_overload10(ivec2 a, int32 s);
static ivec3 mul_overload11(ivec3 a, int32 s);
static ivec4 mul_overload12(ivec4 a, int32 s);
static vec2 mul_overload13(float32 s, vec2 a);
static vec3 mul_overload14(float32 s, vec3 a);
static vec4 mul_overload15(float32 s, vec4 a);
static ivec2 mul_overload16(int32 s, ivec2 a);
static ivec3 mul_overload17(int32 s, ivec3 a);
static ivec4 mul_overload18(int32 s, ivec4 a);
static vec2 div_overload1(vec2 a, float32 s);
static vec3 div_overload2(vec3 a, float32 s);
static vec4 div_overload3(vec4 a, float32 s);
static ivec2 div_overload4(ivec2 a, int32 s);
static ivec3 div_overload5(ivec3 a, int32 s);
static ivec4 div_overload6(ivec4 a, int32 s);
static vec2 neg_overload1(vec2 a);
static vec3 neg_overload2(vec3 a);
static vec4 neg_overload3(vec4 a);
static ivec2 neg_overload4(ivec2 a);
static ivec3 neg_overload5(ivec3 a);
static ivec4 neg_overload6(ivec4 a);
static float32 angle_overload1(vec2 a, vec2 b);
static float32 angle_overload2(vec3 a, vec3 b);
static float32 angle_overload3(vec4 a, vec4 b);
static float32 dot_overload1(vec2 a, vec2 b);
static float32 dot_overload2(vec3 a, vec3 b);
static float32 dot_overload3(vec4 a, vec4 b);
static vec2 reflect_overload1(vec2 a, vec2 normal);
static vec3 reflect_overload2(vec3 a, vec3 normal);
static vec4 reflect_overload3(vec4 a, vec4 normal);
static vec2 normalize_overload1(vec2 a);
static vec3 normalize_overload2(vec3 a);
static vec4 normalize_overload3(vec4 a);
static vec2 normalize_or_overload1(vec2 a, vec2 b);
static vec3 normalize_or_overload2(vec3 a, vec3 b);
static vec4 normalize_or_overload3(vec4 a, vec4 b);
static vec2 noz_overload1(vec2 a);
static vec3 noz_overload2(vec3 a);
static vec4 noz_overload3(vec4 a);
static vec2 lerp_overload2(float32 t, vec2 a, vec2 b);
static vec3 lerp_overload3(float32 t, vec3 a, vec3 b);
static vec4 lerp_overload4(float32 t, vec4 a, vec4 b);
static float32 sqlength_overload1(vec2 a);
static float32 sqlength_overload2(vec3 a);
static float32 sqlength_overload3(vec4 a);
static float32 length_overload1(vec2 a);
static float32 length_overload2(vec3 a);
static float32 length_overload3(vec4 a);
static float32 dist_overload1(vec2 a, vec2 b);
static float32 dist_overload2(vec3 a, vec3 b);
static float32 dist_overload3(vec4 a, vec4 b);
static float32 sqdist_overload1(vec2 a, vec2 b);
static float32 sqdist_overload2(vec3 a, vec3 b);
static float32 sqdist_overload3(vec4 a, vec4 b);
static vec2 xy_overload1(vec3 a);
static vec2 xy_overload2(vec4 a);
static vec2 xz_overload1(vec3 a);
static vec2 xz_overload2(vec4 a);
static vec3 xyz_overload1(vec4 a);
static vec3 cross(vec3 a, vec3 b);
static mat2 mat2_identity();
static vec2 col1_overload1(mat2 m);
static vec2 col2_overload1(mat2 m);
static mat2 transpose_overload1(mat2 m);
static float32 det(mat2 m);
static mat2 mul_overload19(mat2 a, mat2 b);
static vec2 mul_overload20(mat2 m, vec2 v);
static vec2 mul_overload21(vec2 v, mat2 m);
static mat3 mat3_identity();
static mat3 make_mat3(mat4 m);
static vec3 col1_overload2(mat3 m);
static vec3 col2_overload2(mat3 m);
static vec3 col3_overload1(mat3 m);
static mat3 transpose_overload2(mat3 m);
static mat3 mul_overload22(mat3 a, mat3 b);
static vec3 mul_overload23(mat3 m, vec3 v);
static vec3 mul_overload24(vec3 v, mat3 m);
static mat4 mat4_identity();
static mat4 make_mat4_overload1(vec3 pos, vec3 scale);
static mat4 make_mat4_overload2(vec3 pos, float32 scale);
static vec4 col1_overload3(mat4 m);
static vec4 col2_overload3(mat4 m);
static vec4 col3_overload2(mat4 m);
static vec4 col4(mat4 m);
static mat4 transpose_overload3(mat4 m);
static mat4 mul_overload25(mat4 a, mat4 b);
static vec4 mul_overload26(mat4 m, vec4 v);
static vec4 mul_overload27(vec4 v, mat4 m);
static vec3 transform_point(vec3 p, mat4 m);
static mat4 perspective(float32 fovy, float32 aspect, float32 near_depth, float32 far_depth);
static mat4 perspective_off_center(float32 left, float32 right, float32 bottom, float32 top, float32 near_depth, float32 far_depth);
static vec3 xyz_overload2(quat q);
static quat conj(quat q);
static quat normalize_overload4(quat q);
static float32 dot_overload4(quat a, quat b);
static quat lerp_overload5(float32 t, quat a, quat b);
static quat nlerp(float32 t, quat a, quat b);
static quat slerp(float32 t, quat a, quat b);
static quat unit_quat_power(quat q, float32 t);
static quat sub_overload7(quat a, quat b);
static quat add_overload7(quat a, quat b);
static quat mul_overload28(quat a, float32 s);
static quat mul_overload29(quat l, quat r);
static quat axisangle2quat(vec3 axis, float32 angle);
static quat matrix2quat(mat4 m);
static mat4 quat2matrix(quat q);
static char* get_str_overload1(Pog_Tokenkind kind);
static Pog_Token pog_next_token(char* cursor);
static char* get_str_overload2(Pog_Nodekind kind);
static Pog_Token peek(Pog_Parser* pp);
static bool token(Pog_Parser* pp, Pog_Tokenkind kind);
static Pog_Token assert_token(Pog_Parser* pp, Pog_Tokenkind kind);
static void assert_semicolon(Pog_Parser* pp);
static Pog_Token* lex(char* file_buffer);
static Pog_Unit* parse(char* file_buffer);
static Pog_Node* parse_stmt(Pog_Parser* pp);
static uint32 peek_type(Pog_Parser* pp);
static Pog_Node* parse_type(Pog_Parser* pp);
static Pog_Node* parse_expr(Pog_Parser* pp);
static Pog_Node* parse_expr_leaf(Pog_Parser* pp);
static void print_node(uint32 tabs, StringBuilder* sb, Pog_Node* node);
static void print_ast(StringBuilder* sb, Pog_Unit* unit);

// Declarations
static char* message = "Hello, Seamen!\n";
static StringBuilder* temps;
static uint32 rotation = 0;

// Implementations
void __main() {
    char* file_buffer = fileread_overload1("src/main.pog");
    Pog_Unit* unit = parse(file_buffer);
    StringBuilder sb = sb_create();
    print_ast(&sb, unit);
    printf("%.*s", to_string_overload7(sb).length, to_string_overload7(sb).chars);
    sb_free(sb);
}
static float32 test() {
    float32 v = (3.140000 * (2 + 3));
    if (v < 0) {
        void* n = 0;
    }
    // static decl;
    char* c = message;
    while (1) {
        if (*c); else break;
        switch (*c) {
            case 'l':;
            goto done;
            default:;
            c++;
            continue;
        }
        done:;
        c++;
    }
    return v;
}
static FILE* open_file(char* file, char* mode) {
    FILE* res = 0;
    if (fopen_s(&res, file, mode)) {
        printf("%s%s%s", "ERROR: Could not open file \"", file, "\".\n");
        return 0;
    }
    return res;
}
static char* fileread_overload1(char* filename) {
    return fileread_overload2(filename, "r");
}
static char* fileread_overload2(char* filename, char* mode) {
    FILE* file = open_file(filename, mode);
    fseek(file, 0, 2);
    uint64 len = ftell(file);
    rewind(file);
    char* buffer = calloc((len + 1), 1);
    uint64 end = fread(buffer, 1, len, file);
    buffer[end] = (char)0;
    fclose(file);
    return buffer;
}
static void filewrite_overload1(char* filename, char* content) {
    FILE* file = open_file(filename, "w");
    fwrite(content, sizeof(char), strlen(content), file);
    fclose(file);
}
static void filewrite_overload2(string filename, char* content) {
    char* tmp = malloc((filename.length + 1));
    memcpy(tmp, filename.chars, filename.length);
    tmp[filename.length] = 0;
    filewrite_overload1(tmp, content);
    free(tmp);
}
static Array read_binary_file(char* filename) {
    FILE* file = open_file(filename, "rb");
    Array buffer;
    buffer.data = 0;
    buffer.length = 0;
    if (file == 0) return buffer;
    fseek(file, 0, 2);
    uint64 len = ftell(file);
    rewind(file);
    buffer.length = (uint32)len;
    buffer.data = malloc(buffer.length);
    fread(buffer.data, 1, buffer.length, file);
    fclose(file);
    return buffer;
}
static void write_binary_file_overload1(char* filename, void* data, uint64 bytes) {
    Array buffer = (Array) { .length = 0, .data = (uint8[]){0}};
    buffer.data = data;
    buffer.length = bytes;
    write_binary_file_overload2(filename, buffer);
}
static void write_binary_file_overload2(char* filename, Array buffer) {
    FILE* file = open_file(filename, "wb");
    fwrite(buffer.data, sizeof(uint8), buffer.length, file);
    fclose(file);
}
static Arena* arena_create() {
    Arena* arena = vmem_reserve(4294967295);
    uint32 size = sizeof(Arena);
    vmem_commit(arena, (uint64)size);
    arena->top = size;
    return arena;
}
static void* arena_bottom(Arena* arena) {
    return (void*)((uint64)arena + sizeof(Arena));
}
static uint64 align(uint64 value, uint64 align) {
    uint64 res = ((value / align) * align);
    if ((value % align) == 0) return res;
    return (res + align);
}
static void* arena_alloc(Arena* arena, uint32 size) {
    uint64 result = (((uint64)arena) + arena->top);
    result = align(result, 8);
    arena->top += size;
    vmem_commit(arena, (uint64)arena->top);
    return (void*)result;
}
static void arena_release(Arena* arena) {
    vmem_release(arena);
}
static void* list_create_overload1(uint32 stride) {
    return list_create_overload2(stride, 2);
}
static void* list_create_overload2(uint32 stride, uint32 starting_capacity) {
    List* head = malloc((sizeof(List) + (stride * starting_capacity)));
    head->stride = stride;
    head->capacity = starting_capacity;
    head->length = 0;
    return &head[1];
}
static List* list_head(void* list) {
    return &((List*)list)[-1];
}
static uint32 list_length(void* list) {
    return list ? list_head(list)->length : 0;
}
static uint32 list_capacity(void* list) {
    return list_head(list)->capacity;
}
static uint32 list_stride(void* list) {
    return list_head(list)->stride;
}
static void list_set_length(void* list, uint32 new_len) {
    list_head(list)->length = new_len;
}
static void list_delete(void* list) {
    free(list_head(list));
}
static void list_clear(void* list) {
    list_head(list)->length = 0;
}
static void list_grow(void** list, uint32 new_capacity) {
    List* head = list_head(*list);
    head->capacity = new_capacity;
    head = realloc(head, (sizeof(List) + (head->capacity * head->stride)));
    *list = &head[1];
}
static void* list_add(void** list, void* data) {
    uint32 len = list_length(*list);
    uint32 cap = list_capacity(*list);
    uint32 stride = list_stride(*list);
    if (cap == len) list_grow((void**)(list), (cap * 2));
    void* dst = (((byte*)*list) + (len * stride));
    if (data) memcpy(dst, data, stride);
    list_set_length(*list, (len + 1));
    return dst;
}
static void* list_append(void** list) {
    return list_add((void**)(list), 0);
}
static void* list_get(void* list, uint32 index) {
    return (((byte*)list) + (list_stride(list) * index));
}
static void* list_last_item(void* list) {
    return list_get(list, (list_length(list) - 1));
}
static int32 index_of(void* list, void* data) {
    uint32 len = list_length(list);
    for (int32 it = 0; it < len; it++) {
        void* item = list_get(list, it);
        if (memcmp(data, item, list_stride(list)) == 0) return it;
    }
    return -1;
}
static void list_remove(void* list, void* item) {
    int32 i = index_of(list, item);
    if (i != -1) {
        list_unordered_remove(list, (uint32)i);
    }
}
static void list_unordered_remove(void* list, uint32 index) {
    uint32 len = list_length(list);
    memcpy(list_get(list, index), list_get(list, (len - 1)), list_stride(list));
    list_set_length(list, (len - 1));
}
static void list_ordered_remove(void* list, uint32 index) {
    uint32 new_len = (list_length(list) - 1);
    memmove(list_get(list, index), list_get(list, (index + 1)), ((new_len - index) * list_stride(list)));
    list_set_length(list, new_len);
}
static void* list_insert_overload1(void** list, uint32 index) {
    return list_insert_overload2((void**)(list), index, 0);
}
static void* list_insert_overload2(void** list, uint32 index, void* data) {
    uint32 stride = list_stride(*list);
    uint32 count = (list_length(*list) - index);
    list_append((void**)(list));
    void* item = list_get(*list, index);
    memmove(list_get(*list, (index + 1)), item, (count * stride));
    if (data) memcpy(item, data, stride);
    return item;
}
static void* list_pop(void* list) {
    void* res = list_last_item(list);
    list_head(list)->length--;
    return res;
}
static string make_string_overload1(char* c_str) {
    return (string) {c_str, strlen(c_str)};
}
static string make_string_overload2(char* c_str, uint32 len) {
    return (string) {c_str, len};
}
static uint64 pow_uint64(uint64 x, uint64 y) {
    uint64 res = 1;
    for (int32 it = 0; it < y; it++) res *= x;
    return res;
}
static uint64 parse_int_overload1(string str) {
    uint64 res = 0;
    uint64 power = 0;
    for (int32 it = 0; it < str.length; it++) {
        char c = str.chars[((str.length - it) - 1)];
        if (is_digit(c)) {
            res += ((c - '0') * pow_uint64(10, power++));
        }
    }
    return res;
}
static uint64 parse_int_overload2(char* c_str) {
    uint32 len;
    return parse_int_overload3(c_str, &len);
}
static uint64 parse_int_overload3(char* c_str, uint32* length) {
    char* c = c_str;
    while (is_digit(*c)) c++;
    *length = (uint32)(c - c_str);
    string str = (string) {c_str, *length};
    return parse_int_overload1(str);
}
static uint64 hex_digit_value(char h) {
    if ((h >= '0') && (h <= '9')) return (h - '0');
    if ((h >= 'a') && (h <= 'f')) return ((10 + h) - 'a');
    if ((h >= 'A') && (h <= 'F')) return ((10 + h) - 'A');
    return -1;
}
static uint64 parse_hex(string str) {
    str = trim_start_overload2(str, '0');
    str = trim_start_overload2(str, 'x');
    uint64 res = 0;
    uint64 power = 0;
    for (int32 it = 0; it < str.length; it++) {
        char c = str.chars[((str.length - it) - 1)];
        if (is_hexdigit(c)) {
            uint64 v = hex_digit_value(c);
            res += (v * pow_uint64(16, power++));
        }
    }
    return res;
}
static float64 parse_float_overload1(char* c_str) {
    uint32 len;
    return parse_float_overload2(c_str, &len);
}
static float64 parse_float_overload2(char* c_str, uint32* length) {
    char* start = c_str;
    float64 sign = 1;
    if (c_str[0] == '-') {
        sign = -1;
        c_str++;
    }
    uint32 len;
    float64 int_part = (float64)parse_int_overload3(c_str, &len);
    c_str += len;
    if (*c_str != '.') {
        *length = (uint32)(c_str - start);
        return (int_part * sign);
    }
    c_str++;
    float64 frac_part = (float64)parse_int_overload3(c_str, &len);
    float64 denom = (float64)pow_uint64(10, len);
    *length = ((uint32)(c_str - start) + len);
    return ((int_part + (frac_part / denom)) * sign);
}
static string to_string_overload1(uint32 num) {
    return to_string_overload2((uint64)num);
}
static string to_string_overload2(uint64 num) {
    char num_str[21] = (char[21]) {0};
    if (num == 0) return (string)(string) {"0", 1};
    uint32 i = 20;
    while (num != 0) {
        uint8 r = (uint8)(num % 10);
        num /= 10;
        num_str[--i] = ('0' + (char)r);
    }
    string str = (string) {&num_str[i], (20 - i)};
    StringBuilder* sb = temp_builder();
    sb_append_overload2(sb, str);
    return to_string_overload8(sb);
}
static string to_string_overload3(int32 num) {
    return to_string_overload4((int64)num);
}
static string to_string_overload4(int64 num) {
    StringBuilder* sb = temp_builder();
    if (num < 0) {
        sb_append_overload3(sb, '-');
        num = -num;
    }
    sb_append_overload2(sb, to_string_overload5((uint64)num));
    return to_string_overload8(sb);
}
static string to_string_overload5(float32 f) {
    return to_string_overload6(temp_builder(), f);
}
static string to_string_overload6(StringBuilder* sb, float32 f) {
    uint32 bits = *((uint32*)&f);
    if (bits & 2147483648) sb_append_overload1(sb, "-");
    if ((bits == 2139095040) || (bits == 4286578688)) {
        sb_append_overload1(sb, "Infinity");
        return to_string_overload8(sb);
    }
    if (is_nan_overload1(f)) {
        sb_append_overload1(sb, "NaN");
        return to_string_overload8(sb);
    }
    sb_append_overload2(sb, to_string_overload2((uint64)abs_overload1(f)));
    sb_append_overload1(sb, ".");
    string frac = to_string_overload2((uint64)round_overload1((fract_overload1(abs_overload1(f)) * 1000000)));
    for (int32 it = 0; it < (6 - frac.length); it++) sb_append_overload3(sb, '0');
    sb_append_overload2(sb, frac);
    return to_string_overload8(sb);
}
static bool string_equals_overload1(char* a, string b) {
    return string_equals_overload3(make_string_overload1(a), b);
}
static bool string_equals_overload2(string a, char* b) {
    return string_equals_overload3(a, make_string_overload1(b));
}
static bool string_equals_overload3(string a, string b) {
    if (a.length != b.length) return 0;
    for (int32 i = 0; i < a.length; i++) if (a.chars[i] != b.chars[i]) return 0;
    return 1;
}
static bool starts_with(char* text, char* start) {
    int32 i = 0;
    while (start[i]) {
        if (start[i] != text[i]) return 0;
        i++;
    }
    return 1;
}
static string substr_until_overload1(char* str, char delim) {
    string res = (string) {str, 0};
    uint32 i = 0;
    while (str[i] && (str[i] != delim)) i++;
    res.length = i;
    if (str[res.length] == delim) res.length++;
    return res;
}
static string substr_until_overload2(string str, char delim) {
    string res = str;
    for (uint32 it = 0; it < str.length; it++) {
        if (str.chars[it] == delim) {
            res.length = (it + 1);
            break;
        }
    }
    return res;
}
static string substr_to_end(string str, char start) {
    int64 i = (str.length - 1);
    while ((i >= 0) && (str.chars[i] != start)) i--;
    return (string) {&str.chars[i], (str.length - i)};
}
static char* trim_starting_whitespace(char* c_str) {
    while (is_whitespace(*c_str)) c_str++;
    return c_str;
}
static string trim_start_overload1(string str, uint32 len) {
    return (string) {(str.chars + len), (str.length - len)};
}
static string trim_end_overload1(string str, uint32 len) {
    return (string) {str.chars, (str.length - len)};
}
static string trim_overload1(string str, uint32 len) {
    return (string) {(str.chars + len), (str.length - (len * 2))};
}
static string trim_start_overload2(string str, char c) {
    uint32 count = 0;
    while (str.chars[count] == c) count++;
    return trim_start_overload1(str, count);
}
static string trim_end_overload2(string str, char c) {
    uint32 count = 0;
    while (str.chars[((str.length - 1) - count)] == c) count++;
    return trim_end_overload1(str, count);
}
static string trim_overload2(string str, char c) {
    return trim_start_overload2(trim_end_overload2(str, c), c);
}
static bool is_whitespace(char c) {
    return (((c == ' ') || (c == '\n')) || (c == '\t'));
}
static bool is_whitespace_or_null(char c) {
    return (is_whitespace(c) || (c == 0));
}
static bool is_upper_case_letter(char c) {
    return ((c >= 'A') && (c <= 'Z'));
}
static bool is_lower_case_letter(char c) {
    return ((c >= 'a') && (c <= 'z'));
}
static bool is_letter(char c) {
    return (is_lower_case_letter(c) || is_upper_case_letter(c));
}
static bool is_digit(char c) {
    return ((c >= '0') && (c <= '9'));
}
static bool is_hexdigit(char c) {
    return ((is_digit(c) || ((c >= 'a') && (c <= 'f'))) || ((c >= 'A') && (c <= 'F')));
}
static bool is_alphanumeric(char c) {
    return (is_letter(c) || is_digit(c));
}
static bool is_punctuation(char c) {
    return (((((c >= '!') && (c <= '/')) || ((c >= ':') && (c <= '@'))) || ((c >= '[') && (c <= '`'))) || ((c >= '{') && (c <= '~')));
}
static bool is_whitespace_or_empty(string str) {
    for (int32 it = 0; it < str.length; it++) {
        if (!is_whitespace(str.chars[it])) return 0;
    }
    return 1;
}
static string alloc_string_copy_overload1(char* str) {
    return alloc_string_copy_overload2(make_string_overload1(str));
}
static string alloc_string_copy_overload2(string str) {
    string res = (string) {0};
    res.length = str.length;
    res.chars = malloc((str.length + 1));
    for (int32 it = 0; it < str.length; it++) {
        res.chars[it] = str.chars[it];
    }
    res.chars[str.length] = (char)0;
    return res;
}
static string tail(string str) {
    return (string) {(str.chars + 1), (str.length - 1)};
}
static uint32 lev(string a, string b) {
    /* local procedure */;
    if (a.length == 0) return b.length;
    if (b.length == 0) return a.length;
    if (a.chars[0] == b.chars[0]) return lev(tail(a), tail(b));
    uint32 i = lev(tail(a), b);
    i = min_overload5(i, lev(a, tail(b)));
    i = min_overload5(i, lev(tail(a), tail(b)));
    return (i + 1);
}
static string to_string_overload7(StringBuilder sb) {
    return (string) {sb.content, sb.length};
}
static string to_string_overload8(StringBuilder* sb) {
    return (string) {sb->content, sb->length};
}
static StringBuilder* alloc_temp_builders(uint32 count) {
    StringBuilder* temps = malloc((count * sizeof(StringBuilder)));
    for (int32 it = 0; it < count; it++) {
        temps[it] = sb_create();
    }
    return temps;
}
static StringBuilder* temp_builder() {
    /* local constant */;
    // static decl;
    // static decl;
    StringBuilder* sb = &temps[(rotation++ % 8)];
    sb_clear(sb);
    return sb;
}
static char* concat_overload1(char* a, char* b) {
    StringBuilder* sb = temp_builder();
    sb_append_overload1(sb, a);
    sb_append_overload1(sb, b);
    return sb->content;
}
static char* concat_overload2(char* a, string b) {
    StringBuilder* sb = temp_builder();
    sb_append_overload1(sb, a);
    sb_append_overload2(sb, b);
    return sb->content;
}
static char* concat_overload3(string a, char* b) {
    StringBuilder* sb = temp_builder();
    sb_append_overload2(sb, a);
    sb_append_overload1(sb, b);
    return sb->content;
}
static char* concat_overload4(string a, string b) {
    StringBuilder* sb = temp_builder();
    sb_append_overload2(sb, a);
    sb_append_overload2(sb, b);
    return sb->content;
}
static char* concat_overload5(char* a, char* b, char* c) {
    StringBuilder* sb = temp_builder();
    sb_append_overload1(sb, a);
    sb_append_overload1(sb, b);
    sb_append_overload1(sb, c);
    return sb->content;
}
static char* concat_overload6(string a, string b, string c) {
    StringBuilder* sb = temp_builder();
    sb_append_overload2(sb, a);
    sb_append_overload2(sb, b);
    sb_append_overload2(sb, c);
    return sb->content;
}
static char* concat_overload7(char* a, string b, char* c) {
    StringBuilder* sb = temp_builder();
    sb_append_overload1(sb, a);
    sb_append_overload2(sb, b);
    sb_append_overload1(sb, c);
    return sb->content;
}
static StringBuilder sb_create() {
    StringBuilder sb = (StringBuilder) {0};
    sb.length = 0;
    sb.capacity = 16;
    sb.content = malloc(sb.capacity);
    sb.content[0] = (char)0;
    return sb;
}
static void sb_free(StringBuilder sb) {
    free(sb.content);
}
static void sb_grow(StringBuilder* sb, uint32 len) {
    len += sb->length;
    if (sb->capacity <= len) {
        sb->capacity *= 2;
        while (sb->capacity <= len) sb->capacity *= 2;
        sb->content = realloc(sb->content, sb->capacity);
    }
}
static void sb_append_overload1(StringBuilder* sb, char* str) {
    sb_append_overload2(sb, make_string_overload1(str));
}
static void sb_append_overload2(StringBuilder* sb, string str) {
    sb_grow(sb, str.length);
    for (int32 i = 0; i < str.length; i++) sb->content[sb->length++] = str.chars[i];
    sb->content[sb->length] = (char)0;
}
static void sb_append_overload3(StringBuilder* sb, char c) {
    sb_grow(sb, 1);
    sb->content[sb->length++] = c;
    sb->content[sb->length] = (char)0;
}
static void sb_append_overload4(StringBuilder* sb, float32 f) {
    uint32 bits = *((uint32*)&f);
    if (bits & 2147483648) sb_append_overload1(sb, "-");
    if ((bits == 2139095040) || (bits == 4286578688)) {
        sb_append_overload1(sb, "Infinity");
    } else if (is_nan_overload1(f)) {
        sb_append_overload1(sb, "NaN");
    } else {
        sb_append_overload2(sb, to_string_overload2((uint64)abs_overload1(f)));
        sb_append_overload1(sb, ".");
        string frac = to_string_overload2((uint64)round_overload1((fract_overload1(abs_overload1(f)) * 1000000)));
        for (int32 it = 0; it < (6 - frac.length); it++) sb_append_overload3(sb, '0');
        sb_append_overload2(sb, frac);
    }
}
static void sb_append_overload5(StringBuilder* sb, vec2 v) {
    sb_append_overload4(sb, v.x);
    sb_append_overload1(sb, ", ");
    sb_append_overload4(sb, v.y);
}
static void sb_insert(StringBuilder* sb, uint32 loc, string str) {
    sb_grow(sb, str.length);
    int64 i = sb->length;
    while (i >= loc) {
        sb->content[(i + str.length)] = sb->content[i];
        i--;
    }
    sb->length += str.length;
    for (int32 n = 0; n < str.length; n++) {
        sb->content[(loc + n)] = str.chars[n];
    }
}
static void sb_remove(StringBuilder* sb, uint32 loc, uint32 num_chars) {
    if ((loc + num_chars) >= sb->length) {
        sb_truncate_length(sb, loc);
        return;
    }
    uint32 i = loc;
    while ((i + num_chars) <= sb->length) {
        sb->content[i] = sb->content[(i + num_chars)];
        i++;
    }
    sb->length -= num_chars;
}
static void sb_truncate_length(StringBuilder* sb, uint32 new_len) {
    sb->length = new_len;
    sb->content[new_len] = (char)0;
}
static void sb_clear(StringBuilder* sb) {
    sb->length = 0;
    sb->content[0] = (char)0;
}
static void* vmem_reserve(uint64 size) {
    return VirtualAlloc(0, size, 8192, 1);
}
static void vmem_release(void* address) {
    VirtualFree(address, 0, 32768);
}
static void vmem_commit(void* address, uint64 size) {
    VirtualAlloc(address, size, 4096, 4);
}
static void vmem_decommit(void* address, uint64 size) {
    VirtualFree(address, size, 16384);
}
static float32 sq(float32 a) {
    return (a * a);
}
static int32 min_overload1(int32 a, int32 b) {
    return (a < b) ? a : b;
}
static ivec2 min_overload2(ivec2 a, ivec2 b) {
    return (ivec2) {min_overload6(a.x, b.x), min_overload6(a.y, b.y)};
}
static ivec3 min_overload3(ivec3 a, ivec3 b) {
    return (ivec3) {min_overload6(a.x, b.x), min_overload6(a.y, b.y), min_overload6(a.z, b.z)};
}
static ivec4 min_overload4(ivec4 a, ivec4 b) {
    return (ivec4) {min_overload6(a.x, b.x), min_overload6(a.y, b.y), min_overload6(a.z, b.z), min_overload6(a.w, b.w)};
}
static int32 max_overload1(int32 a, int32 b) {
    return (a < b) ? b : a;
}
static ivec2 max_overload2(ivec2 a, ivec2 b) {
    return (ivec2) {max_overload6(a.x, b.x), max_overload6(a.y, b.y)};
}
static ivec3 max_overload3(ivec3 a, ivec3 b) {
    return (ivec3) {max_overload6(a.x, b.x), max_overload6(a.y, b.y), max_overload6(a.z, b.z)};
}
static ivec4 max_overload4(ivec4 a, ivec4 b) {
    return (ivec4) {max_overload6(a.x, b.x), max_overload6(a.y, b.y), max_overload6(a.z, b.z), max_overload6(a.w, b.w)};
}
static uint32 min_overload5(uint32 a, uint32 b) {
    return (a < b) ? a : b;
}
static uint32 max_overload5(uint32 a, uint32 b) {
    return (a < b) ? b : a;
}
static float32 min_overload6(float32 a, float32 b) {
    return (a < b) ? a : b;
}
static vec2 min_overload7(vec2 a, vec2 b) {
    return (vec2) {min_overload6(a.x, b.x), min_overload6(a.y, b.y)};
}
static vec3 min_overload8(vec3 a, vec3 b) {
    return (vec3) {min_overload6(a.x, b.x), min_overload6(a.y, b.y), min_overload6(a.z, b.z)};
}
static vec4 min_overload9(vec4 a, vec4 b) {
    return (vec4) {min_overload6(a.x, b.x), min_overload6(a.y, b.y), min_overload6(a.z, b.z), min_overload6(a.w, b.w)};
}
static float32 max_overload6(float32 a, float32 b) {
    return (a < b) ? b : a;
}
static vec2 max_overload7(vec2 a, vec2 b) {
    return (vec2) {max_overload6(a.x, b.x), max_overload6(a.y, b.y)};
}
static vec3 max_overload8(vec3 a, vec3 b) {
    return (vec3) {max_overload6(a.x, b.x), max_overload6(a.y, b.y), max_overload6(a.z, b.z)};
}
static vec4 max_overload9(vec4 a, vec4 b) {
    return (vec4) {max_overload6(a.x, b.x), max_overload6(a.y, b.y), max_overload6(a.z, b.z), max_overload6(a.w, b.w)};
}
static int32 clamp_overload1(int32 t, int32 min, int32 max) {
    return (t < min) ? min : (t > max) ? max : t;
}
static float32 clamp_overload2(float32 t, float32 min, float32 max) {
    return (t < min) ? min : (t > max) ? max : t;
}
static float32 clamp01(float32 t) {
    return clamp_overload2(t, 0, 1);
}
static float32 lerp_overload1(float32 t, float32 a, float32 b) {
    return (a + ((b - a) * t));
}
static float32 smoothstep(float32 edge0, float32 edge1, float32 x) {
    float32 t = clamp_overload2(((x - edge0) / (edge1 - edge0)), 0, 1);
    return ((t * t) * (3.000000 - (2.000000 * t)));
}
static float32 map(float32 t, float32 a, float32 b, float32 c, float32 d) {
    return lerp_overload1(((t - a) / (b - a)), c, d);
}
static bool exp_decay_overload1(float32* a, float32 b, float32 decay, float32 dt) {
    *a = exp_decay_overload2(*a, b, decay, dt);
    return almost_equals_overload2(*a, b);
}
static float32 exp_decay_overload2(float32 a, float32 b, float32 decay, float32 dt) {
    return (b + ((a - b) * expf((-decay * dt))));
}
static vec2 exp_decay_overload3(vec2 a, vec2 b, float32 decay, float32 dt) {
    return add_overload1(b, mul_overload7(sub_overload1(a, b), expf((-decay * dt))));
}
static vec3 exp_decay_overload4(vec3 a, vec3 b, float32 decay, float32 dt) {
    return add_overload2(b, mul_overload8(sub_overload2(a, b), expf((-decay * dt))));
}
static vec4 exp_decay_overload5(vec4 a, vec4 b, float32 decay, float32 dt) {
    return add_overload3(b, mul_overload9(sub_overload3(a, b), expf((-decay * dt))));
}
static bool almost_equals_overload1(float32 a, float32 b, float32 threshold) {
    return (abs_overload1((a - b)) <= threshold);
}
static bool almost_equals_overload2(float32 a, float32 b) {
    return almost_equals_overload1(a, b, 0.000100);
}
static float32 fract_overload1(float32 x) {
    return (x - floorf(x));
}
static float32 round_overload1(float32 x) {
    return floorf((x + 0.500000));
}
static float32 round2multiple_overload1(float32 x, float32 n) {
    return (floorf(((x / n) + 0.500000)) * n);
}
static float32 abs_overload1(float32 x) {
    return (x < 0) ? -x : x;
}
static float64 abs_overload2(float64 x) {
    return (x < 0) ? -x : x;
}
static bool is_nan_overload1(float32 x) {
    return (x != x);
}
static bool is_nan_overload2(vec2 v) {
    return (is_nan_overload1(v.x) || is_nan_overload1(v.y));
}
static vec2 make_vec2(float32 v) {
    return (vec2) {v, v};
}
static vec3 make_vec3(float32 v) {
    return (vec3) {v, v, v};
}
static vec4 make_vec4(float32 v) {
    return (vec4) {v, v, v, v};
}
static ivec2 make_ivec2(int32 v) {
    return (ivec2) {v, v};
}
static ivec3 make_ivec3(int32 v) {
    return (ivec3) {v, v, v};
}
static ivec4 make_ivec4(int32 v) {
    return (ivec4) {v, v, v, v};
}
static vec2 make_vec_overload1(float32 x, float32 y) {
    return (vec2) {x, y};
}
static vec3 make_vec_overload2(float32 x, float32 y, float32 z) {
    return (vec3) {x, y, z};
}
static vec4 make_vec_overload3(float32 x, float32 y, float32 z, float32 w) {
    return (vec4) {x, y, z, w};
}
static ivec2 make_ivec_overload1(int32 x, int32 y) {
    return (ivec2) {x, y};
}
static ivec3 make_ivec_overload2(int32 x, int32 y, int32 z) {
    return (ivec3) {x, y, z};
}
static ivec4 make_ivec_overload3(int32 x, int32 y, int32 z, int32 w) {
    return (ivec4) {x, y, z, w};
}
static vec3 make_vec_overload4(vec2 xy, float32 z) {
    return (vec3) {xy.x, xy.y, z};
}
static vec3 make_vec_overload5(float32 x, vec2 yz) {
    return (vec3) {x, yz.x, yz.y};
}
static ivec3 make_ivec_overload4(ivec2 xy, int32 z) {
    return (ivec3) {xy.x, xy.y, z};
}
static ivec3 make_ivec_overload5(int32 x, ivec2 yz) {
    return (ivec3) {x, yz.x, yz.y};
}
static vec4 make_vec_overload6(vec3 xyz, float32 w) {
    return (vec4) {xyz.x, xyz.y, xyz.z, w};
}
static vec4 make_vec_overload7(float32 x, vec3 yzw) {
    return (vec4) {x, yzw.x, yzw.y, yzw.z};
}
static ivec4 make_ivec_overload6(ivec3 xyz, int32 w) {
    return (ivec4) {xyz.x, xyz.y, xyz.z, w};
}
static ivec4 make_ivec_overload7(int32 x, ivec3 yzw) {
    return (ivec4) {x, yzw.x, yzw.y, yzw.z};
}
static vec2 make_vec_overload8(ivec2 v) {
    return (vec2) {(float32)v.x, (float32)v.y};
}
static vec3 make_vec_overload9(ivec3 v) {
    return (vec3) {(float32)v.x, (float32)v.y, (float32)v.z};
}
static vec4 make_vec_overload10(ivec4 v) {
    return (vec4) {(float32)v.x, (float32)v.y, (float32)v.z, (float32)v.w};
}
static ivec2 make_ivec_overload8(vec2 v) {
    return (ivec2) {(int32)v.x, (int32)v.y};
}
static ivec3 make_ivec_overload9(vec3 v) {
    return (ivec3) {(int32)v.x, (int32)v.y, (int32)v.z};
}
static ivec4 make_ivec_overload10(vec4 v) {
    return (ivec4) {(int32)v.x, (int32)v.y, (int32)v.z, (int32)v.w};
}
static bool equals_overload1(vec2 a, vec2 b) {
    return ((a.x == b.x) && (a.y == b.y));
}
static bool equals_overload2(vec3 a, vec3 b) {
    return (((a.x == b.x) && (a.y == b.y)) && (a.z == b.z));
}
static bool equals_overload3(vec4 a, vec4 b) {
    return ((((a.x == b.x) && (a.y == b.y)) && (a.z == b.z)) && (a.w == b.w));
}
static bool equals_overload4(ivec2 a, ivec2 b) {
    return ((a.x == b.x) && (a.y == b.y));
}
static bool equals_overload5(ivec3 a, ivec3 b) {
    return (((a.x == b.x) && (a.y == b.y)) && (a.z == b.z));
}
static bool equals_overload6(ivec4 a, ivec4 b) {
    return ((((a.x == b.x) && (a.y == b.y)) && (a.z == b.z)) && (a.w == b.w));
}
static vec2 floor_overload1(vec2 v) {
    return (vec2) {floorf(v.x), floorf(v.y)};
}
static vec3 floor_overload2(vec3 v) {
    return (vec3) {floorf(v.x), floorf(v.y), floorf(v.z)};
}
static vec4 floor_overload3(vec4 v) {
    return (vec4) {floorf(v.x), floorf(v.y), floorf(v.z), floorf(v.w)};
}
static vec2 fract_overload2(vec2 v) {
    return (vec2) {fract_overload1(v.x), fract_overload1(v.y)};
}
static vec3 fract_overload3(vec3 v) {
    return (vec3) {fract_overload1(v.x), fract_overload1(v.y), fract_overload1(v.z)};
}
static vec4 fract_overload4(vec4 v) {
    return (vec4) {fract_overload1(v.x), fract_overload1(v.y), fract_overload1(v.z), fract_overload1(v.w)};
}
static vec2 round_overload2(vec2 v) {
    return (vec2) {round_overload1(v.x), round_overload1(v.y)};
}
static vec3 round_overload3(vec3 v) {
    return (vec3) {round_overload1(v.x), round_overload1(v.y), round_overload1(v.z)};
}
static vec4 round_overload4(vec4 v) {
    return (vec4) {round_overload1(v.x), round_overload1(v.y), round_overload1(v.z), round_overload1(v.w)};
}
static vec2 round2multiple_overload2(vec2 v, float32 n) {
    return (vec2) {round2multiple_overload1(v.x, n), round2multiple_overload1(v.y, n)};
}
static vec3 round2multiple_overload3(vec3 v, float32 n) {
    return (vec3) {round2multiple_overload1(v.x, n), round2multiple_overload1(v.y, n), round2multiple_overload1(v.z, n)};
}
static vec4 round2multiple_overload4(vec4 v, float32 n) {
    return (vec4) {round2multiple_overload1(v.x, n), round2multiple_overload1(v.y, n), round2multiple_overload1(v.z, n), round2multiple_overload1(v.w, n)};
}
static vec2 sub_overload1(vec2 a, vec2 b) {
    return (vec2) {(a.x - b.x), (a.y - b.y)};
}
static vec3 sub_overload2(vec3 a, vec3 b) {
    return (vec3) {(a.x - b.x), (a.y - b.y), (a.z - b.z)};
}
static vec4 sub_overload3(vec4 a, vec4 b) {
    return (vec4) {(a.x - b.x), (a.y - b.y), (a.z - b.z), (a.w - b.w)};
}
static ivec2 sub_overload4(ivec2 a, ivec2 b) {
    return (ivec2) {(a.x - b.x), (a.y - b.y)};
}
static ivec3 sub_overload5(ivec3 a, ivec3 b) {
    return (ivec3) {(a.x - b.x), (a.y - b.y), (a.z - b.z)};
}
static ivec4 sub_overload6(ivec4 a, ivec4 b) {
    return (ivec4) {(a.x - b.x), (a.y - b.y), (a.z - b.z), (a.w - b.w)};
}
static vec2 add_overload1(vec2 a, vec2 b) {
    return (vec2) {(a.x + b.x), (a.y + b.y)};
}
static vec3 add_overload2(vec3 a, vec3 b) {
    return (vec3) {(a.x + b.x), (a.y + b.y), (a.z + b.z)};
}
static vec4 add_overload3(vec4 a, vec4 b) {
    return (vec4) {(a.x + b.x), (a.y + b.y), (a.z + b.z), (a.w + b.w)};
}
static ivec2 add_overload4(ivec2 a, ivec2 b) {
    return (ivec2) {(a.x + b.x), (a.y + b.y)};
}
static ivec3 add_overload5(ivec3 a, ivec3 b) {
    return (ivec3) {(a.x + b.x), (a.y + b.y), (a.z + b.z)};
}
static ivec4 add_overload6(ivec4 a, ivec4 b) {
    return (ivec4) {(a.x + b.x), (a.y + b.y), (a.z + b.z), (a.w + b.w)};
}
static vec2 mul_overload1(vec2 a, vec2 b) {
    return (vec2) {(a.x * b.x), (a.y * b.y)};
}
static vec3 mul_overload2(vec3 a, vec3 b) {
    return (vec3) {(a.x * b.x), (a.y * b.y), (a.z * b.z)};
}
static vec4 mul_overload3(vec4 a, vec4 b) {
    return (vec4) {(a.x * b.x), (a.y * b.y), (a.z * b.z), (a.w * b.w)};
}
static ivec2 mul_overload4(ivec2 a, ivec2 b) {
    return (ivec2) {(a.x * b.x), (a.y * b.y)};
}
static ivec3 mul_overload5(ivec3 a, ivec3 b) {
    return (ivec3) {(a.x * b.x), (a.y * b.y), (a.z * b.z)};
}
static ivec4 mul_overload6(ivec4 a, ivec4 b) {
    return (ivec4) {(a.x * b.x), (a.y * b.y), (a.z * b.z), (a.w * b.w)};
}
static vec2 mul_overload7(vec2 a, float32 s) {
    return (vec2) {(a.x * s), (a.y * s)};
}
static vec3 mul_overload8(vec3 a, float32 s) {
    return (vec3) {(a.x * s), (a.y * s), (a.z * s)};
}
static vec4 mul_overload9(vec4 a, float32 s) {
    return (vec4) {(a.x * s), (a.y * s), (a.z * s), (a.w * s)};
}
static ivec2 mul_overload10(ivec2 a, int32 s) {
    return (ivec2) {(a.x * s), (a.y * s)};
}
static ivec3 mul_overload11(ivec3 a, int32 s) {
    return (ivec3) {(a.x * s), (a.y * s), (a.z * s)};
}
static ivec4 mul_overload12(ivec4 a, int32 s) {
    return (ivec4) {(a.x * s), (a.y * s), (a.z * s), (a.w * s)};
}
static vec2 mul_overload13(float32 s, vec2 a) {
    return mul_overload7(a, s);
}
static vec3 mul_overload14(float32 s, vec3 a) {
    return mul_overload8(a, s);
}
static vec4 mul_overload15(float32 s, vec4 a) {
    return mul_overload9(a, s);
}
static ivec2 mul_overload16(int32 s, ivec2 a) {
    return mul_overload10(a, s);
}
static ivec3 mul_overload17(int32 s, ivec3 a) {
    return mul_overload11(a, s);
}
static ivec4 mul_overload18(int32 s, ivec4 a) {
    return mul_overload12(a, s);
}
static vec2 div_overload1(vec2 a, float32 s) {
    return (vec2) {(a.x / s), (a.y / s)};
}
static vec3 div_overload2(vec3 a, float32 s) {
    return (vec3) {(a.x / s), (a.y / s), (a.z / s)};
}
static vec4 div_overload3(vec4 a, float32 s) {
    return (vec4) {(a.x / s), (a.y / s), (a.z / s), (a.w / s)};
}
static ivec2 div_overload4(ivec2 a, int32 s) {
    return (ivec2) {(a.x / s), (a.y / s)};
}
static ivec3 div_overload5(ivec3 a, int32 s) {
    return (ivec3) {(a.x / s), (a.y / s), (a.z / s)};
}
static ivec4 div_overload6(ivec4 a, int32 s) {
    return (ivec4) {(a.x / s), (a.y / s), (a.z / s), (a.w / s)};
}
static vec2 neg_overload1(vec2 a) {
    return (vec2) {-a.x, -a.y};
}
static vec3 neg_overload2(vec3 a) {
    return (vec3) {-a.x, -a.y, -a.z};
}
static vec4 neg_overload3(vec4 a) {
    return (vec4) {-a.x, -a.y, -a.z, -a.w};
}
static ivec2 neg_overload4(ivec2 a) {
    return (ivec2) {-a.x, -a.y};
}
static ivec3 neg_overload5(ivec3 a) {
    return (ivec3) {-a.x, -a.y, -a.z};
}
static ivec4 neg_overload6(ivec4 a) {
    return (ivec4) {-a.x, -a.y, -a.z, -a.w};
}
static float32 angle_overload1(vec2 a, vec2 b) {
    return acosf((dot_overload1(a, b) / (length_overload1(a) * length_overload1(b))));
}
static float32 angle_overload2(vec3 a, vec3 b) {
    return acosf((dot_overload2(a, b) / (length_overload2(a) * length_overload2(b))));
}
static float32 angle_overload3(vec4 a, vec4 b) {
    return acosf((dot_overload3(a, b) / (length_overload3(a) * length_overload3(b))));
}
static float32 dot_overload1(vec2 a, vec2 b) {
    return ((a.x * b.x) + (a.y * b.y));
}
static float32 dot_overload2(vec3 a, vec3 b) {
    return (((a.x * b.x) + (a.y * b.y)) + (a.z * b.z));
}
static float32 dot_overload3(vec4 a, vec4 b) {
    return ((((a.x * b.x) + (a.y * b.y)) + (a.z * b.z)) + (a.w * b.w));
}
static vec2 reflect_overload1(vec2 a, vec2 normal) {
    return add_overload1(a, mul_overload7(normal, (dot_overload1(a, normal) * -2.000000)));
}
static vec3 reflect_overload2(vec3 a, vec3 normal) {
    return add_overload2(a, mul_overload8(normal, (dot_overload2(a, normal) * -2.000000)));
}
static vec4 reflect_overload3(vec4 a, vec4 normal) {
    return add_overload3(a, mul_overload9(normal, (dot_overload3(a, normal) * -2.000000)));
}
static vec2 normalize_overload1(vec2 a) {
    return div_overload1(a, length_overload1(a));
}
static vec3 normalize_overload2(vec3 a) {
    return div_overload2(a, length_overload2(a));
}
static vec4 normalize_overload3(vec4 a) {
    return div_overload3(a, length_overload3(a));
}
static vec2 normalize_or_overload1(vec2 a, vec2 b) {
    return equals_overload1(a, (vec2)(vec2) {0, 0}) ? b : div_overload1(a, length_overload1(a));
}
static vec3 normalize_or_overload2(vec3 a, vec3 b) {
    return equals_overload2(a, (vec3)(vec3) {0, 0, 0}) ? b : div_overload2(a, length_overload2(a));
}
static vec4 normalize_or_overload3(vec4 a, vec4 b) {
    return equals_overload3(a, (vec4)(vec4) {0, 0, 0, 0}) ? b : div_overload3(a, length_overload3(a));
}
static vec2 noz_overload1(vec2 a) {
    return normalize_or_overload1(a, (vec2)(vec2) {0, 0});
}
static vec3 noz_overload2(vec3 a) {
    return normalize_or_overload2(a, (vec3)(vec3) {0, 0, 0});
}
static vec4 noz_overload3(vec4 a) {
    return normalize_or_overload3(a, (vec4)(vec4) {0, 0, 0, 0});
}
static vec2 lerp_overload2(float32 t, vec2 a, vec2 b) {
    return add_overload1(a, mul_overload7(sub_overload1(b, a), t));
}
static vec3 lerp_overload3(float32 t, vec3 a, vec3 b) {
    return add_overload2(a, mul_overload8(sub_overload2(b, a), t));
}
static vec4 lerp_overload4(float32 t, vec4 a, vec4 b) {
    return add_overload3(a, mul_overload9(sub_overload3(b, a), t));
}
static float32 sqlength_overload1(vec2 a) {
    return dot_overload1(a, a);
}
static float32 sqlength_overload2(vec3 a) {
    return dot_overload2(a, a);
}
static float32 sqlength_overload3(vec4 a) {
    return dot_overload3(a, a);
}
static float32 length_overload1(vec2 a) {
    return sqrtf(dot_overload1(a, a));
}
static float32 length_overload2(vec3 a) {
    return sqrtf(dot_overload2(a, a));
}
static float32 length_overload3(vec4 a) {
    return sqrtf(dot_overload3(a, a));
}
static float32 dist_overload1(vec2 a, vec2 b) {
    return length_overload1(sub_overload1(a, b));
}
static float32 dist_overload2(vec3 a, vec3 b) {
    return length_overload2(sub_overload2(a, b));
}
static float32 dist_overload3(vec4 a, vec4 b) {
    return length_overload3(sub_overload3(a, b));
}
static float32 sqdist_overload1(vec2 a, vec2 b) {
    return sqlength_overload1(sub_overload1(a, b));
}
static float32 sqdist_overload2(vec3 a, vec3 b) {
    return sqlength_overload2(sub_overload2(a, b));
}
static float32 sqdist_overload3(vec4 a, vec4 b) {
    return sqlength_overload3(sub_overload3(a, b));
}
static vec2 xy_overload1(vec3 a) {
    return (vec2) {a.x, a.y};
}
static vec2 xy_overload2(vec4 a) {
    return (vec2) {a.x, a.y};
}
static vec2 xz_overload1(vec3 a) {
    return (vec2) {a.x, a.z};
}
static vec2 xz_overload2(vec4 a) {
    return (vec2) {a.x, a.z};
}
static vec3 xyz_overload1(vec4 a) {
    return (vec3) {a.x, a.y, a.z};
}
static vec3 cross(vec3 a, vec3 b) {
    return (vec3) {((a.y * b.z) - (a.z * b.y)), ((a.z * b.x) - (a.x * b.z)), ((a.x * b.y) - (a.y * b.x))};
}
static mat2 mat2_identity() {
    return (mat2) {1, 0, 0, 1};
}
static vec2 col1_overload1(mat2 m) {
    return (vec2) {m.row1.x, m.row2.x};
}
static vec2 col2_overload1(mat2 m) {
    return (vec2) {m.row1.y, m.row2.y};
}
static mat2 transpose_overload1(mat2 m) {
    return (mat2) {col1_overload1(m), col2_overload1(m)};
}
static float32 det(mat2 m) {
    return ((m.row1.x * m.row2.y) - (m.row1.y * m.row2.x));
}
static mat2 mul_overload19(mat2 a, mat2 b) {
    mat2 res = (mat2) {0};
    res.row1.x = dot_overload1(a.row1, col1_overload1(b));
    res.row1.y = dot_overload1(a.row1, col2_overload1(b));
    res.row2.x = dot_overload1(a.row2, col1_overload1(b));
    res.row2.y = dot_overload1(a.row2, col2_overload1(b));
    return res;
}
static vec2 mul_overload20(mat2 m, vec2 v) {
    return (vec2) {dot_overload1(m.row1, v), dot_overload1(m.row2, v)};
}
static vec2 mul_overload21(vec2 v, mat2 m) {
    return (vec2) {dot_overload1(v, col1_overload1(m)), dot_overload1(v, col2_overload1(m))};
}
static mat3 mat3_identity() {
    return (mat3) {1, 0, 0, 0, 1, 0, 0, 0, 1};
}
static mat3 make_mat3(mat4 m) {
    return (mat3) {xyz_overload1(m.row1), xyz_overload1(m.row2), xyz_overload1(m.row3)};
}
static vec3 col1_overload2(mat3 m) {
    return (vec3) {m.row1.x, m.row2.x, m.row3.x};
}
static vec3 col2_overload2(mat3 m) {
    return (vec3) {m.row1.y, m.row2.y, m.row3.y};
}
static vec3 col3_overload1(mat3 m) {
    return (vec3) {m.row1.z, m.row2.z, m.row3.z};
}
static mat3 transpose_overload2(mat3 m) {
    return (mat3) {col1_overload2(m), col2_overload2(m), col3_overload1(m)};
}
static mat3 mul_overload22(mat3 a, mat3 b) {
    mat3 res = (mat3) {0};
    res.row1.x = dot_overload2(a.row1, col1_overload2(b));
    res.row1.y = dot_overload2(a.row1, col2_overload2(b));
    res.row1.z = dot_overload2(a.row1, col3_overload1(b));
    res.row2.x = dot_overload2(a.row2, col1_overload2(b));
    res.row2.y = dot_overload2(a.row2, col2_overload2(b));
    res.row2.z = dot_overload2(a.row2, col3_overload1(b));
    res.row3.x = dot_overload2(a.row3, col1_overload2(b));
    res.row3.y = dot_overload2(a.row3, col2_overload2(b));
    res.row3.z = dot_overload2(a.row3, col3_overload1(b));
    return res;
}
static vec3 mul_overload23(mat3 m, vec3 v) {
    return (vec3) {dot_overload2(m.row1, v), dot_overload2(m.row2, v), dot_overload2(m.row3, v)};
}
static vec3 mul_overload24(vec3 v, mat3 m) {
    return (vec3) {dot_overload2(v, col1_overload2(m)), dot_overload2(v, col2_overload2(m)), dot_overload2(v, col3_overload1(m))};
}
static mat4 mat4_identity() {
    return (mat4) {1, 0, 0, 0, 0, 1, 0, 0, 0, 0, 1, 0, 0, 0, 0, 1};
}
static mat4 make_mat4_overload1(vec3 pos, vec3 scale) {
    return (mat4) {scale.x, 0, 0, 0, 0, scale.y, 0, 0, 0, 0, scale.z, 0, pos.x, pos.y, pos.z, 1};
}
static mat4 make_mat4_overload2(vec3 pos, float32 scale) {
    return make_mat4_overload1(pos, make_vec3(scale));
}
static vec4 col1_overload3(mat4 m) {
    return (vec4) {m.row1.x, m.row2.x, m.row3.x, m.row4.x};
}
static vec4 col2_overload3(mat4 m) {
    return (vec4) {m.row1.y, m.row2.y, m.row3.y, m.row4.y};
}
static vec4 col3_overload2(mat4 m) {
    return (vec4) {m.row1.z, m.row2.z, m.row3.z, m.row4.z};
}
static vec4 col4(mat4 m) {
    return (vec4) {m.row1.w, m.row2.w, m.row3.w, m.row4.w};
}
static mat4 transpose_overload3(mat4 m) {
    return (mat4) {col1_overload3(m), col2_overload3(m), col3_overload2(m), col4(m)};
}
static mat4 mul_overload25(mat4 a, mat4 b) {
    mat4 res;
    res.row1.x = dot_overload3(a.row1, col1_overload3(b));
    res.row1.y = dot_overload3(a.row1, col2_overload3(b));
    res.row1.z = dot_overload3(a.row1, col3_overload2(b));
    res.row1.w = dot_overload3(a.row1, col4(b));
    res.row2.x = dot_overload3(a.row2, col1_overload3(b));
    res.row2.y = dot_overload3(a.row2, col2_overload3(b));
    res.row2.z = dot_overload3(a.row2, col3_overload2(b));
    res.row2.w = dot_overload3(a.row2, col4(b));
    res.row3.x = dot_overload3(a.row3, col1_overload3(b));
    res.row3.y = dot_overload3(a.row3, col2_overload3(b));
    res.row3.z = dot_overload3(a.row3, col3_overload2(b));
    res.row3.w = dot_overload3(a.row3, col4(b));
    res.row4.x = dot_overload3(a.row4, col1_overload3(b));
    res.row4.y = dot_overload3(a.row4, col2_overload3(b));
    res.row4.z = dot_overload3(a.row4, col3_overload2(b));
    res.row4.w = dot_overload3(a.row4, col4(b));
    return res;
}
static vec4 mul_overload26(mat4 m, vec4 v) {
    return (vec4) {dot_overload3(m.row1, v), dot_overload3(m.row2, v), dot_overload3(m.row3, v), dot_overload3(m.row4, v)};
}
static vec4 mul_overload27(vec4 v, mat4 m) {
    return (vec4) {dot_overload3(v, col1_overload3(m)), dot_overload3(v, col2_overload3(m)), dot_overload3(v, col3_overload2(m)), dot_overload3(v, col4(m))};
}
static vec3 transform_point(vec3 p, mat4 m) {
    return xyz_overload1(mul_overload27(make_vec_overload6(p, 1.000000), m));
}
static mat4 perspective(float32 fovy, float32 aspect, float32 near_depth, float32 far_depth) {
    float32 maxY = (near_depth * tanf((0.500000 * fovy)));
    float32 minY = -maxY;
    float32 minX = (minY * aspect);
    float32 maxX = (maxY * aspect);
    return perspective_off_center(minX, maxX, minY, maxY, near_depth, far_depth);
}
static mat4 perspective_off_center(float32 left, float32 right, float32 bottom, float32 top, float32 near_depth, float32 far_depth) {
    float32 x = ((2.000000 * near_depth) / (right - left));
    float32 y = ((2.000000 * near_depth) / (top - bottom));
    float32 a = ((right + left) / (right - left));
    float32 b = ((top + bottom) / (top - bottom));
    float32 c = (-(far_depth + near_depth) / (far_depth - near_depth));
    float32 d = (-((2.000000 * far_depth) * near_depth) / (far_depth - near_depth));
    return (mat4) {{x, 0, 0, 0}, {0, y, 0, 0}, {a, b, c, -1}, {0, 0, d, 0}};
}
static vec3 xyz_overload2(quat q) {
    return (vec3) {q.x, q.y, q.z};
}
static quat conj(quat q) {
    return (quat) {-q.x, -q.y, -q.z, q.w};
}
static quat normalize_overload4(quat q) {
    float32 l = sqrtf(((((q.x * q.x) + (q.y * q.y)) + (q.z * q.z)) + (q.w * q.w)));
    return (quat) {(q.x / l), (q.y / l), (q.z / l), (q.w / l)};
}
static float32 dot_overload4(quat a, quat b) {
    return (float32) {((((a.x * b.x) + (a.y * b.y)) + (a.z * b.z)) + (a.w * b.w))};
}
static quat lerp_overload5(float32 t, quat a, quat b) {
    return add_overload7(a, mul_overload28(sub_overload7(b, a), t));
}
static quat nlerp(float32 t, quat a, quat b) {
    return normalize_overload4(lerp_overload5(t, a, b));
}
static quat slerp(float32 t, quat a, quat b) {
    float32 d = dot_overload4(a, b);
    if (d < 0.000000) {
        b = mul_overload28(b, -1);
        d = -d;
    }
    if (d > 0.999500) return nlerp(t, a, b);
    return normalize_overload4(mul_overload29(a, unit_quat_power(mul_overload29(conj(a), b), t)));
}
static quat unit_quat_power(quat q, float32 t) {
    quat Q;
    float32 a = (acosf(q.w) * t);
    Q.w = cosf(a);
    float32 s = sinf(a);
    float32 len = sqrtf(((sq(q.x) + sq(q.y)) + sq(q.z)));
    Q.x = ((s * q.x) / len);
    Q.y = ((s * q.y) / len);
    Q.z = ((s * q.z) / len);
    return Q;
}
static quat sub_overload7(quat a, quat b) {
    return (quat) {(a.x - b.x), (a.y - b.y), (a.z - b.z), (a.w - b.w)};
}
static quat add_overload7(quat a, quat b) {
    return (quat) {(a.x + b.x), (a.y + b.y), (a.z + b.z), (a.w + b.w)};
}
static quat mul_overload28(quat a, float32 s) {
    return (quat) {(a.x * s), (a.y * s), (a.z * s), (a.w * s)};
}
static quat mul_overload29(quat l, quat r) {
    float32 a = l.w;
    float32 b = l.x;
    float32 c = l.y;
    float32 d = l.z;
    float32 e = r.w;
    float32 f = r.x;
    float32 g = r.y;
    float32 h = r.z;
    return (quat) {((((b * e) + (a * f)) + (c * h)) - (d * g)), ((((a * g) - (b * h)) + (c * e)) + (d * f)), ((((a * h) + (b * g)) - (c * f)) + (d * e)), ((((a * e) - (b * f)) - (c * g)) - (d * h))};
}
static quat axisangle2quat(vec3 axis, float32 angle) {
    float32 ha = (angle / 2.000000);
    float32 s = sinf(ha);
    quat res;
    res.x = (axis.x * s);
    res.y = (axis.y * s);
    res.z = (axis.z * s);
    res.w = cosf(ha);
    return res;
}
static quat matrix2quat(mat4 m) {
    float32 trace = ((m.row1.x + m.row2.y) + m.row3.z);
    if (trace > 0) {
        float32 s = (0.500000 / sqrtf((trace + 1.000000)));
        return (quat) {((m.row3.y - m.row2.z) * s), ((m.row1.z - m.row3.x) * s), ((m.row2.x - m.row1.y) * s), (0.250000 / s)};
    }
    if ((m.row1.x > m.row2.y) && (m.row1.x > m.row3.z)) {
        float32 s = (2 * sqrtf((((1 + m.row1.x) - m.row2.y) - m.row3.z)));
        return (quat) {(0.250000 * s), ((m.row1.y + m.row2.x) / s), ((m.row1.z + m.row3.x) / s), ((m.row3.y - m.row2.z) / s)};
    }
    if (m.row2.y > m.row3.z) {
        float32 s = (2 * sqrtf((((1 + m.row2.y) - m.row1.x) - m.row3.z)));
        return (quat) {((m.row1.y + m.row2.x) / s), (0.250000 * s), ((m.row2.z + m.row3.y) / s), ((m.row1.z - m.row3.x) / s)};
    }
    float32 s = (2 * sqrtf((((1 + m.row3.z) - m.row1.x) - m.row2.y)));
    return (quat) {((m.row1.z + m.row3.x) / s), ((m.row2.z + m.row3.y) / s), (0.250000 * s), ((m.row2.x - m.row1.y) / s)};
}
static mat4 quat2matrix(quat q) {
    float32 xx = (q.x * q.x);
    float32 xy = (q.x * q.y);
    float32 xz = (q.x * q.z);
    float32 xw = (q.x * q.w);
    float32 yy = (q.y * q.y);
    float32 yz = (q.y * q.z);
    float32 yw = (q.y * q.w);
    float32 zz = (q.z * q.z);
    float32 zw = (q.z * q.w);
    return (mat4) {(1.000000 - ((yy + zz) * 2.000000)), ((xy - zw) * 2.000000), ((xz + yw) * 2.000000), 0, ((xy + zw) * 2.000000), (1.000000 - ((xx + zz) * 2.000000)), ((yz - xw) * 2.000000), 0, ((xz - yw) * 2.000000), ((yz + xw) * 2.000000), (1.000000 - ((xx + yy) * 2.000000)), 0, 0, 0, 0, 1};
}
static char* get_str_overload1(Pog_Tokenkind kind) {
    switch (kind) {
        case 0:;
        return "EOF";
        case 1:;
        return "ERROR";
        case 2:;
        return "Whitespace";
        case 3:;
        return "NewLine";
        case 4:;
        return "Word";
        case 5:;
        return "Keyword_Struct";
        case 6:;
        return "Keyword_Enum";
        case 7:;
        return "Keyword_With";
        case 8:;
        return "Keyword_Namespace";
        case 9:;
        return "Keyword_Alloc";
        case 10:;
        return "Keyword_Sizeof";
        case 11:;
        return "Keyword_Let";
        case 12:;
        return "Keyword_Include";
        case 13:;
        return "Keyword_If";
        case 14:;
        return "Keyword_Else";
        case 15:;
        return "Keyword_While";
        case 16:;
        return "Keyword_For";
        case 17:;
        return "Keyword_Switch";
        case 18:;
        return "Keyword_Case";
        case 19:;
        return "Keyword_Default";
        case 20:;
        return "Keyword_Goto";
        case 21:;
        return "Keyword_True";
        case 22:;
        return "Keyword_False";
        case 23:;
        return "Keyword_And";
        case 24:;
        return "Keyword_Or";
        case 25:;
        return "Keyword_Null";
        case 26:;
        return "Keyword_Continue";
        case 27:;
        return "Keyword_Break";
        case 28:;
        return "Keyword_Return";
        case 29:;
        return "Keyword_Type";
        case 30:;
        return "Keyword_As";
        case 31:;
        return "Keyword_Const";
        case 32:;
        return "Keyword_Static";
        case 33:;
        return "Integer";
        case 34:;
        return "Decimal";
        case 35:;
        return "String";
        case 36:;
        return "Char";
        case 37:;
        return "Comment";
        case 38:;
        return "MultiComment";
        case 39:;
        return "Comma";
        case 40:;
        return "Period";
        case 41:;
        return "Dotdot";
        case 42:;
        return "Semicolon";
        case 43:;
        return "Colon";
        case 44:;
        return "QuestionMark";
        case 45:;
        return "ExclamationMark";
        case 46:;
        return "At";
        case 47:;
        return "Tilde";
        case 48:;
        return "Ampersand";
        case 49:;
        return "Pipe";
        case 50:;
        return "Caret";
        case 51:;
        return "LeftShift";
        case 52:;
        return "RightShift";
        case 53:;
        return "OpenCurl";
        case 54:;
        return "CloseCurl";
        case 55:;
        return "OpenParen";
        case 56:;
        return "CloseParen";
        case 57:;
        return "OpenSquare";
        case 58:;
        return "CloseSquare";
        case 59:;
        return "LessThan";
        case 60:;
        return "GreaterThan";
        case 61:;
        return "LessThanOrEqual";
        case 62:;
        return "GreaterThanOrEqual";
        case 63:;
        return "Equals";
        case 64:;
        return "NotEquals";
        case 65:;
        return "Assign";
        case 66:;
        return "Plus";
        case 67:;
        return "Minus";
        case 68:;
        return "Mul";
        case 69:;
        return "Div";
        case 70:;
        return "Mod";
        case 71:;
        return "PlusPlus";
        case 72:;
        return "MinusMinus";
        case 73:;
        return "PlusAssign";
        case 74:;
        return "MinusAssign";
        case 75:;
        return "MulAssign";
        case 76:;
        return "DivAssign";
        case 77:;
        return "ModAssign";
        case 78:;
        return "BitAndAssign";
        case 79:;
        return "BitOrAssign";
        case 80:;
        return "BitXorAssign";
    }
}
static Pog_Token choose(Pog_Token tok, char cur, char exp, Pog_Tokenkind true_case, Pog_Tokenkind false_case) {
    if (cur == exp) {
        tok.kind = true_case;
        tok.data.str.length = 2;
    } else {
        tok.kind = false_case;
    }
    return tok;
}
static Pog_Token cond(Pog_Token tok, char cur, char exp, Pog_Tokenkind if_equals) {
    if (cur == exp) {
        tok.kind = if_equals;
        tok.data.str.length = 2;
    }
    return tok;
}
static Pog_Token pog_next_token(char* cursor) {
    Pog_Token token = (Pog_Token) {0};
    token.kind = 1;
    token.data.str.chars = cursor;
    token.data.str.length = 1;
    token.data.character = *cursor;
    /* local procedure */;
    /* local procedure */;
    if (*cursor == 0) {
        token.kind = 0;
        return token;
    }
    char next = *(cursor + 1);
    switch (*cursor) {
        case '\n':;
        {
            token.kind = 3;
            return token;
        }
        case ' ':;
        {
            token.kind = 2;
            while (*(++cursor) == ' ');
            token.data.str.length = (uint32)(cursor - token.data.str.chars);
            return token;
        }
        case '"':;
        {
            token.kind = 35;
            cursor++;
            while (!((*cursor == '"') && (*(cursor - 1) != '\\'))) {
                cursor++;
            }
            cursor++;
            token.data.str.length = (uint32)(cursor - token.data.str.chars);
            return token;
        }
        case '\'':;
        {
            token.kind = 36;
            cursor++;
            char ch = *cursor;
            if (ch == '\\') {
                cursor++;
                switch (*cursor) {
                    case 'n':;
                    ch = '\n';
                    break;
                    case 't':;
                    ch = '\t';
                    break;
                    case '\\':;
                    ch = '\\';
                    break;
                    case '\'':;
                    ch = '\'';
                    break;
                }
            }
            cursor++;
            if (*cursor == '\'') {
                cursor++;
            } else {
            }
            token.data.character = ch;
            token.data.str.length = (uint32)(cursor - token.data.str.chars);
            return token;
        }
        case '/':;
        {
            switch (next) {
                case '/':;
                {
                    token.kind = 37;
                    while ((*cursor != '\n') && (*cursor != 0)) cursor++;
                    token.data.str.length = (uint32)(cursor - token.data.str.chars);
                    return token;
                }
                case '*':;
                {
                    token.kind = 38;
                    return token;
                }
                case '=':;
                {
                    token.kind = 76;
                    token.data.str.length = 2;
                    return token;
                }
            }
            token.kind = 69;
            return token;
        }
        case '=':;
        return choose(token, next, '=', 63, 65);
        case '!':;
        return choose(token, next, '=', 64, 45);
        case '*':;
        return choose(token, next, '=', 75, 68);
        case '%':;
        return choose(token, next, '=', 77, 70);
        case '.':;
        return choose(token, next, '.', 41, 40);
        case '&':;
        return choose(token, next, '=', 78, 48);
        case '|':;
        return choose(token, next, '=', 79, 49);
        case '^':;
        return choose(token, next, '=', 80, 50);
        case '<':;
        return choose(cond(token, next, '=', 61), next, '<', 51, 59);
        case '>':;
        return choose(cond(token, next, '=', 62), next, '>', 52, 60);
        case '+':;
        return choose(cond(token, next, '=', 73), next, '+', 71, 66);
        case '-':;
        return choose(cond(token, next, '=', 74), next, '-', 72, 67);
        case ',':;
        {
            token.kind = 39;
            return token;
        }
        case ';':;
        {
            token.kind = 42;
            return token;
        }
        case ':':;
        {
            token.kind = 43;
            return token;
        }
        case '?':;
        {
            token.kind = 44;
            return token;
        }
        case '@':;
        {
            token.kind = 46;
            return token;
        }
        case '~':;
        {
            token.kind = 47;
            return token;
        }
        case '{':;
        {
            token.kind = 53;
            return token;
        }
        case '}':;
        {
            token.kind = 54;
            return token;
        }
        case '(':;
        {
            token.kind = 55;
            return token;
        }
        case ')':;
        {
            token.kind = 56;
            return token;
        }
        case '[':;
        {
            token.kind = 57;
            return token;
        }
        case ']':;
        {
            token.kind = 58;
            return token;
        }
    }
    if (is_letter(*cursor) || (*cursor == '_')) {
        token.kind = 4;
        while (is_alphanumeric(*cursor) || (*cursor == '_')) cursor++;
        token.data.str.length = (uint32)(cursor - token.data.str.chars);
        if (string_equals_overload2(token.data.str, "enum")) token.kind = 6;
        if (string_equals_overload2(token.data.str, "struct")) token.kind = 5;
        if (string_equals_overload2(token.data.str, "let")) token.kind = 11;
        if (string_equals_overload2(token.data.str, "alloc")) token.kind = 9;
        if (string_equals_overload2(token.data.str, "if")) token.kind = 13;
        if (string_equals_overload2(token.data.str, "include")) token.kind = 12;
        if (string_equals_overload2(token.data.str, "while")) token.kind = 15;
        if (string_equals_overload2(token.data.str, "else")) token.kind = 14;
        if (string_equals_overload2(token.data.str, "false")) token.kind = 22;
        if (string_equals_overload2(token.data.str, "true")) token.kind = 21;
        if (string_equals_overload2(token.data.str, "or")) token.kind = 24;
        if (string_equals_overload2(token.data.str, "and")) token.kind = 23;
        if (string_equals_overload2(token.data.str, "continue")) token.kind = 26;
        if (string_equals_overload2(token.data.str, "null")) token.kind = 25;
        if (string_equals_overload2(token.data.str, "return")) token.kind = 28;
        if (string_equals_overload2(token.data.str, "break")) token.kind = 27;
        if (string_equals_overload2(token.data.str, "as")) token.kind = 30;
        if (string_equals_overload2(token.data.str, "type")) token.kind = 29;
        if (string_equals_overload2(token.data.str, "for")) token.kind = 16;
        if (string_equals_overload2(token.data.str, "const")) token.kind = 31;
        if (string_equals_overload2(token.data.str, "default")) token.kind = 19;
        if (string_equals_overload2(token.data.str, "switch")) token.kind = 17;
        if (string_equals_overload2(token.data.str, "goto")) token.kind = 20;
        if (string_equals_overload2(token.data.str, "case")) token.kind = 18;
        if (string_equals_overload2(token.data.str, "namespace")) token.kind = 8;
        if (string_equals_overload2(token.data.str, "with")) token.kind = 7;
        if (string_equals_overload2(token.data.str, "static")) token.kind = 32;
        if (string_equals_overload2(token.data.str, "sizeof")) token.kind = 10;
        return token;
    }
    if ((*cursor == '0') && (next == 'x')) {
        cursor += 2;
        token.kind = 33;
        while (is_hexdigit(*cursor) || (*cursor == '_')) cursor++;
        token.data.str.length = (uint32)(cursor - token.data.str.chars);
        token.data.integer = parse_hex(token.data.str);
        return token;
    }
    if (is_digit(*cursor)) {
        token.kind = 33;
        while (is_digit(*cursor) || (*cursor == '_')) cursor++;
        token.data.str.length = (uint32)(cursor - token.data.str.chars);
        uint64 int_part = parse_int_overload1(token.data.str);
        token.data.integer = int_part;
        if (*cursor == '.') {
            token.kind = 34;
            cursor++;
            string s = (string) {cursor, 0};
            while (is_digit(*cursor) || (*cursor == '_')) cursor++;
            s.length = (uint32)(cursor - s.chars);
            uint64 num_digits = 0;
            for (int32 it = 0; it < s.length; it++) if (is_digit(s.chars[it])) num_digits++;
            float64 denom = (float64)pow_uint64(10, num_digits);
            float64 frac_part = (float64)parse_int_overload1(s);
            token.data.decimal = ((float64)int_part + (frac_part / denom));
        }
        token.data.str.length = (uint32)(cursor - token.data.str.chars);
        return token;
    }
    return token;
}
static char* get_str_overload2(Pog_Nodekind kind) {
    switch (kind) {
        case 0:;
        return "ERROR";
        case 1:;
        return "Expr_Plus";
        case 2:;
        return "Expr_Minus";
        case 3:;
        return "Expr_Mul";
        case 4:;
        return "Expr_Div";
        case 5:;
        return "Expr_Mod";
        case 6:;
        return "Expr_Less";
        case 7:;
        return "Expr_Greater";
        case 8:;
        return "Expr_LessEquals";
        case 9:;
        return "Expr_GreaterEquals";
        case 10:;
        return "Expr_Equals";
        case 11:;
        return "Expr_NotEquals";
        case 12:;
        return "Expr_And";
        case 13:;
        return "Expr_Or";
        case 14:;
        return "Expr_Bit_And";
        case 15:;
        return "Expr_Bit_Or";
        case 16:;
        return "Expr_Bit_Xor";
        case 17:;
        return "Expr_Bit_Lshift";
        case 18:;
        return "Expr_Bit_Rshift";
        case 19:;
        return "Expr_Unary_PreIncrement";
        case 20:;
        return "Expr_Unary_PostIncrement";
        case 21:;
        return "Expr_Unary_PreDecrement";
        case 22:;
        return "Expr_Unary_PostDecrement";
        case 23:;
        return "Expr_Unary_Not";
        case 24:;
        return "Expr_Unary_BitwiseNot";
        case 25:;
        return "Expr_AddressOf";
        case 26:;
        return "Expr_ValueOf";
        case 27:;
        return "Expr_Unary_Negate";
        case 28:;
        return "Expr_Integer";
        case 29:;
        return "Expr_Decimal";
        case 30:;
        return "Expr_Char";
        case 31:;
        return "Expr_String";
        case 32:;
        return "Expr_True";
        case 33:;
        return "Expr_False";
        case 34:;
        return "Expr_Null";
        case 35:;
        return "Expr_Variable";
        case 36:;
        return "Expr_Alloc";
        case 37:;
        return "Expr_Ternary";
        case 38:;
        return "Expr_ProcCall";
        case 39:;
        return "Expr_Deref";
        case 40:;
        return "Expr_Indexing";
        case 41:;
        return "Expr_Cast";
        case 42:;
        return "Expr_Sizeof";
        case 43:;
        return "Expr_Parenthesized";
        case 44:;
        return "Expr_Compound";
        case 45:;
        return "Stmt_Declaration";
        case 46:;
        return "Stmt_Constant";
        case 47:;
        return "Stmt_Typedef";
        case 48:;
        return "Stmt_Procedure";
        case 49:;
        return "Stmt_Argument";
        case 50:;
        return "Stmt_Struct";
        case 51:;
        return "Stmt_Enum";
        case 52:;
        return "Stmt_EnumEntry";
        case 53:;
        return "Stmt_Assignment";
        case 54:;
        return "Stmt_Scope";
        case 55:;
        return "Stmt_If";
        case 56:;
        return "Stmt_While";
        case 57:;
        return "Stmt_For";
        case 58:;
        return "Stmt_Switch";
        case 59:;
        return "Stmt_Continue";
        case 60:;
        return "Stmt_Break";
        case 61:;
        return "Stmt_Return";
        case 62:;
        return "Stmt_Goto";
        case 63:;
        return "Stmt_Label";
        case 64:;
        return "Stmt_Case";
        case 65:;
        return "Stmt_Default";
        case 66:;
        return "Stmt_Include";
        case 67:;
        return "Type_MustInfer";
        case 68:;
        return "Type_Basic";
        case 69:;
        return "Type_Procedure";
        case 70:;
        return "Type_Array";
        case 71:;
        return "Type_Fixed_Array";
        case 72:;
        return "Type_Dynamic_Array";
    }
}
static Pog_Token peek(Pog_Parser* pp) {
    return pp->tokens[pp->token_index];
}
static bool token(Pog_Parser* pp, Pog_Tokenkind kind) {
    if (pp->tokens[pp->token_index].kind != kind) return 0;
    pp->token_index++;
    return 1;
}
static Pog_Token assert_token(Pog_Parser* pp, Pog_Tokenkind kind) {
    Pog_Token tok = peek(pp);
    if (!token(pp, kind)) {
    }
    return tok;
}
static void assert_semicolon(Pog_Parser* pp) {
    assert_token(pp, 42);
}
static Pog_Token* lex(char* file_buffer) {
    Pog_Token* tokens = list_create_overload1(sizeof(Pog_Token));
    char* cursor = file_buffer;
    uint32 row = 0;
    uint32 col = 0;
    lex_loop:;
    {
        Pog_Token tok = pog_next_token(cursor);
        tok.row = row;
        tok.col = col;
        col += tok.data.str.length;
        switch (tok.kind) {
            default:;
            list_add(&tokens, &tok);
            break;
            case 0:;
            break;
            case 1:;
            printf("%s%s%s%c%s%.*s%s", "ERROR: ", get_str_overload1(tok.kind), " (", tok.data.character, ") (\"", tok.data.str.length, tok.data.str.chars, "\")\n");
            break;
            case 2:;
            break;
            case 3:;
            row++;
            col = 0;
            break;
            case 37:;
            break;
            case 38:;
            break;
        }
        cursor += tok.data.str.length;
        if (tok.kind != 0) goto lex_loop;
    }
    printf("%s", "\n\n\n");
    for (int32 it = 0; it < list_length(tokens); it++) {
        Pog_Token token = tokens[it];
        printf("%d%s%s%s%c%s%.*s%s%llu%s%Lf%s", it, " ", get_str_overload1(token.kind), " (", token.data.character, ") (\"", token.data.str.length, token.data.str.chars, "\") int=", token.data.integer, " decimal=", token.data.decimal, "\n");
    }
    return tokens;
}
static Pog_Unit* parse(char* file_buffer) {
    Pog_Parser pp = (Pog_Parser) {0};
    pp.tokens = lex(file_buffer);
    pp.arena = arena_create();
    pp.unit = arena_alloc(pp.arena, sizeof(Pog_Unit));
    pp.unit->arena = pp.arena;
    pp.unit->top_level_nodes = list_create_overload1(sizeof(Pog_Node*));
    pp.unit->errors = list_create_overload1(sizeof(Pog_Error));
    uint32 len = list_length(pp.tokens);
    while (pp.token_index < len) {
        Pog_Node* node = parse_stmt(&pp);
        list_add(&pp.unit->top_level_nodes, &node);
    }
    list_delete(pp.tokens);
    return pp.unit;
}
static Pog_Node* parse_stmt(Pog_Parser* pp) {
    Pog_Node* node = arena_alloc(pp->arena, sizeof(Pog_Node));
    *node = (Pog_Node) {0};
    node->kind = 0;
    node->token = peek(pp);
    pp->token_index++;
    switch (node->token.kind) {
        case 53:;
        {
            node->kind = 54;
            node->sub_nodes = list_create_overload1(sizeof(Pog_Node*));
            while (!token(pp, 54)) {
                Pog_Node* sub = parse_stmt(pp);
                list_add(&node->sub_nodes, &sub);
            }
        }
        break;
        case 15:;
        {
            node->kind = 56;
            node->node1 = parse_expr(pp);
            if (!token(pp, 42)) node->node2 = parse_stmt(pp);
        }
        break;
        case 13:;
        {
            node->kind = 55;
            node->node1 = parse_expr(pp);
            if (!token(pp, 42)) node->node2 = parse_stmt(pp);
            if (token(pp, 14)) node->node3 = parse_stmt(pp);
        }
        break;
        case 16:;
        {
            node->kind = 57;
        }
        break;
        case 17:;
        {
            node->kind = 58;
            node->node1 = parse_expr(pp);
            node->node2 = parse_stmt(pp);
        }
        break;
        case 18:;
        {
            node->kind = 64;
            node->node1 = parse_expr(pp);
            assert_token(pp, 43);
        }
        break;
        case 19:;
        {
            node->kind = 65;
            assert_token(pp, 43);
        }
        break;
        case 26:;
        {
            node->kind = 59;
            assert_semicolon(pp);
        }
        break;
        case 27:;
        {
            node->kind = 60;
            assert_semicolon(pp);
        }
        break;
        case 28:;
        {
            node->kind = 61;
            node->node1 = parse_expr(pp);
            assert_semicolon(pp);
        }
        break;
        case 20:;
        {
            node->kind = 62;
            node->name = assert_token(pp, 4);
            assert_semicolon(pp);
        }
        break;
        case 5:;
        {
            node->kind = 50;
            node->name = assert_token(pp, 4);
            assert_token(pp, 53);
            while (!token(pp, 54)) {
                assert_semicolon(pp);
            }
        }
        break;
        case 6:;
        {
            node->kind = 51;
        }
        break;
        case 29:;
        {
            node->kind = 47;
            node->name = assert_token(pp, 4);
            assert_token(pp, 65);
            node->node1 = parse_type(pp);
            assert_semicolon(pp);
        }
        break;
        case 31:;
        {
            node->kind = 46;
            node->name = assert_token(pp, 4);
            assert_token(pp, 65);
            node->node1 = parse_expr(pp);
            assert_semicolon(pp);
        }
        break;
        case 32:;
        {
            node->kind = 45;
            node->node1 = parse_type(pp);
            node->name = assert_token(pp, 4);
            if (token(pp, 65)) node->node2 = parse_expr(pp);
            assert_semicolon(pp);
        }
        break;
        case 12:;
        {
            node->kind = 66;
            node->name = assert_token(pp, 35);
            assert_semicolon(pp);
        }
        break;
        case 0:;
        break;
    }
    if ((node->token.kind == 4) && token(pp, 43)) {
        node->kind = 63;
        return node;
    }
    pp->token_index--;
    uint32 post_type = peek_type(pp);
    if (post_type && (pp->tokens[post_type].kind == 4)) {
        node->node1 = parse_type(pp);
        node->name = assert_token(pp, 4);
        if (token(pp, 55)) {
            node->kind = 48;
            node->sub_nodes = list_create_overload1(sizeof(Pog_Node*));
            if (token(pp, 56));
            if (token(pp, 30)) {
                pp->token_index++;
            }
            if (!token(pp, 42)) node->node2 = parse_stmt(pp);
        } else {
            node->kind = 45;
            if (token(pp, 65)) node->node2 = parse_expr(pp);
            assert_semicolon(pp);
        }
    } else {
        pp->token_index++;
    }
    return node;
}
static uint32 peek_type(Pog_Parser* pp) {
    Pog_Parser fake = (Pog_Parser) {0};
    fake.tokens = pp->tokens;
    fake.token_index = pp->token_index;
    fake.arena = arena_create();
    uint32 res = 0;
    Pog_Node* fake_type_node = parse_type(&fake);
    if (fake_type_node->kind != 0) {
        res = fake.token_index;
    }
    arena_release(fake.arena);
    return res;
}
static Pog_Node* parse_type(Pog_Parser* pp) {
    Pog_Node* node = arena_alloc(pp->arena, sizeof(Pog_Node));
    *node = (Pog_Node) {0};
    node->kind = 0;
    node->token = peek(pp);
    pp->token_index++;
    if (node->token.kind == 11) {
        node->kind = 67;
        return node;
    }
    if (node->token.kind != 4) return node;
    node->kind = 68;
    while (token(pp, 68)) node->ptr_degree++;
    while (1) {
        if (token(pp, 57)) {
            Pog_Node* array_node = arena_alloc(pp->arena, sizeof(Pog_Node));
            *array_node = (Pog_Node) {0};
            array_node->kind = 0;
            array_node->token = peek(pp);
            array_node->node1 = node;
            if (token(pp, 41)) {
                array_node->kind = 72;
                assert_token(pp, 58);
            } else if (token(pp, 58)) {
                array_node->kind = 70;
            } else {
                array_node->kind = 71;
                array_node->node2 = parse_expr(pp);
                assert_token(pp, 58);
            }
            node = array_node;
        } else if (token(pp, 55)) {
            Pog_Node* proc_node = arena_alloc(pp->arena, sizeof(Pog_Node));
            *proc_node = (Pog_Node) {0};
            proc_node->kind = 69;
            proc_node->token = peek(pp);
            proc_node->node1 = node;
            proc_node->sub_nodes = list_create_overload1(sizeof(Pog_Node*));
            if (!token(pp, 56)) {
                arg_loop:;
                {
                    Pog_Node* arg = parse_type(pp);
                    if (peek(pp).kind == 4) arg->name = assert_token(pp, 4);
                    list_add(&proc_node->sub_nodes, &arg);
                    if (token(pp, 39)) goto arg_loop;
                }
                assert_token(pp, 56);
            }
            node = proc_node;
        } else {
            break;
        }
        while (token(pp, 68)) node->ptr_degree++;
    }
    return node;
}
static Pog_Node* parse_expr(Pog_Parser* pp) {
    return parse_expr_leaf(pp);
}
static Pog_Node* parse_expr_leaf(Pog_Parser* pp) {
    Pog_Node* node = arena_alloc(pp->arena, sizeof(Pog_Node));
    *node = (Pog_Node) {0};
    node->kind = 0;
    node->token = peek(pp);
    pp->token_index++;
    switch (node->token.kind) {
        case 4:;
        {
            node->kind = 35;
        }
        break;
        case 9:;
        {
        }
        break;
        case 10:;
        {
        }
        break;
        case 55:;
        {
            node->kind = 43;
            node->node1 = parse_expr(pp);
            assert_token(pp, 56);
        }
        break;
        case 40:;
        {
        }
        break;
        case 53:;
        {
        }
        break;
        case 33:;
        {
            node->kind = 28;
        }
        break;
        case 34:;
        {
            node->kind = 29;
        }
        break;
        case 35:;
        {
            node->kind = 31;
        }
        break;
        case 36:;
        {
            node->kind = 30;
        }
        break;
        case 21:;
        {
            node->kind = 32;
        }
        break;
        case 22:;
        {
            node->kind = 33;
        }
        break;
        case 25:;
        {
            node->kind = 34;
        }
        break;
    }
    return node;
}
static void print_node(uint32 tabs, StringBuilder* sb, Pog_Node* node) {
    for (int32 it = 0; it < tabs; it++) sb_append_overload1(sb, "    ");
    sb_append_overload1(sb, get_str_overload2(node->kind));
    sb_append_overload1(sb, ":");
    sb_append_overload2(sb, to_string_overload1((node->token.row + 1)));
    sb_append_overload1(sb, ":");
    sb_append_overload2(sb, to_string_overload1((node->token.col + 1)));
    sb_append_overload1(sb, " ");
    if (node->name.kind != 0) sb_append_overload2(sb, node->name.data.str); else sb_append_overload2(sb, node->token.data.str);
    sb_append_overload1(sb, " ");
    sb_append_overload1(sb, concat_overload7("(", to_string_overload2(node->token.data.integer), ") "));
    sb_append_overload1(sb, concat_overload7("(", to_string_overload5((float32)node->token.data.decimal), ")"));
    sb_append_overload1(sb, "\n");
    if (node->node1) print_node((tabs + 1), sb, node->node1);
    if (node->node2) print_node((tabs + 1), sb, node->node2);
    if (node->node3) print_node((tabs + 1), sb, node->node3);
    if (node->node4) print_node((tabs + 1), sb, node->node4);
    for (int32 it = 0; it < list_length(node->sub_nodes); it++) {
        print_node((tabs + 1), sb, node->sub_nodes[it]);
    }
}
static void print_ast(StringBuilder* sb, Pog_Unit* unit) {
    for (int32 it = 0; it < list_length(unit->top_level_nodes); it++) {
        Pog_Node* node = unit->top_level_nodes[it];
        print_node(0, sb, node);
    }
}
static void __static_init() {
    temps = alloc_temp_builders(8);
}
int main(int argc, char** argv) {
    __static_init();
    __main();
    return 0;
}