
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
typedef struct Win32_Security_Attributes Win32_Security_Attributes;
typedef struct TypeInfo TypeInfo;
typedef struct StructField StructField;
typedef struct EnumEntry EnumEntry;
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
typedef struct Pog_Codebase Pog_Codebase;
typedef struct Pog_Binary_Op Pog_Binary_Op;
typedef struct COFF_File_Header COFF_File_Header;

// Enums
typedef uint32 Typekind;
typedef uint32 Pog_Tokenkind;
typedef uint32 Pog_Nodekind;
typedef uint32 Image_File_Machine;

// Type aliases
typedef uint32 My_Type;
typedef uint8 bool;
typedef int32 bool32;
typedef uint8 byte;
typedef struct FILE FILE;
typedef void* HANDLE;

// Structs
struct Arena { // deps = 0
    uint32 top;
};
struct List { // deps = 0
    uint32 stride;
    uint32 capacity;
    uint32 length;
};
struct string { // deps = 0
    char* chars;
    uint32 length;
};
struct StringBuilder { // deps = 0
    char* content;
    uint32 capacity;
    uint32 length;
};
struct StringReader { // deps = 0
    char* current;
    uint32 line;
    uint32 column;
};
struct FILETIME { // deps = 0
    uint32 dwLowDateTime;
    uint32 dwHighDateTime;
};
struct Win32_Security_Attributes { // deps = 0
    uint32 nLength;
    void* lpSecurityDescriptor;
    bool32 bInheritHandle;
};
struct TypeInfo { // deps = 0
    char* name;
    TypeInfo* inner_type;
    uint64 bytesize;
    uint32 alignment;
    Typekind kind;
    uint32 num_ptr;
    Array fields;
    Array entries;
};
struct StructField { // deps = 0
    TypeInfo* type_info;
    char* name;
    uint32 offset;
};
struct EnumEntry { // deps = 0
    char* name;
    int64 value;
};
struct vec2 { // deps = 0
    float32 x;
    float32 y;
};
struct ivec2 { // deps = 0
    int32 x;
    int32 y;
};
struct vec3 { // deps = 0
    float32 x;
    float32 y;
    float32 z;
};
struct ivec3 { // deps = 0
    int32 x;
    int32 y;
    int32 z;
};
struct vec4 { // deps = 0
    float32 x;
    float32 y;
    float32 z;
    float32 w;
};
struct ivec4 { // deps = 0
    int32 x;
    int32 y;
    int32 z;
    int32 w;
};
struct quat { // deps = 0
    float32 x;
    float32 y;
    float32 z;
    float32 w;
};
struct Pog_Parser { // deps = 0
    Pog_Token* tokens;
    uint32 token_index;
    Pog_Unit* unit;
    Arena* arena;
};
struct Pog_Unit { // deps = 0
    Arena* arena;
    Pog_Node** top_level_nodes;
    Pog_Error* errors;
};
struct Pog_Codebase { // deps = 0
    Pog_Unit** units;
    Pog_Node** types;
    Pog_Node** procs;
};
struct Pog_Binary_Op { // deps = 0
    Pog_Tokenkind token_kind;
    Pog_Nodekind node_kind;
};
struct COFF_File_Header { // deps = 0
    uint16 Machine;
    uint16 NumberOfSections;
    uint32 TimeDateStamp;
    uint32 PointerToSymbolTable;
    uint32 NumberOfSymbols;
    uint16 SizeOfOptionalHeader;
    uint16 Characteristics;
};
struct SR_Token { // deps = 1
    string str;
    uint32 line;
    uint32 column;
};
struct Pog_TokenData { // deps = 1
    string str;
    uint64 integer;
    float64 decimal;
    char character;
};
struct Procedure { // deps = 2
    string name;
    void* code;
    TypeInfo return_type;
    Array argument_types;
    Array argument_names;
};
struct mat2 { // deps = 2
    vec2 row1;
    vec2 row2;
};
struct Pog_Token { // deps = 2
    Pog_Tokenkind kind;
    uint32 row;
    uint32 col;
    Pog_TokenData data;
};
struct WIN32_FIND_DATAW { // deps = 3
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
struct WIN32_FIND_DATAA { // deps = 3
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
struct mat3 { // deps = 3
    vec3 row1;
    vec3 row2;
    vec3 row3;
};
struct mat4 { // deps = 4
    vec4 row1;
    vec4 row2;
    vec4 row3;
    vec4 row4;
};
struct Pog_Error { // deps = 4
    Pog_Token token;
    string message;
};
struct Pog_Node { // deps = 6
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
static TypeInfo rtti_types[] = {
    {
        .name = "int8",
        .inner_type = 0,
        .bytesize = 1,
        .alignment = 1,
        .kind = 7,
        .num_ptr = 0,
        
    },
    {
        .name = "int16",
        .inner_type = 0,
        .bytesize = 2,
        .alignment = 2,
        .kind = 8,
        .num_ptr = 0,
        
    },
    {
        .name = "int32",
        .inner_type = 0,
        .bytesize = 4,
        .alignment = 4,
        .kind = 9,
        .num_ptr = 0,
        
    },
    {
        .name = "int64",
        .inner_type = 0,
        .bytesize = 8,
        .alignment = 8,
        .kind = 10,
        .num_ptr = 0,
        
    },
    {
        .name = "uint8",
        .inner_type = 0,
        .bytesize = 1,
        .alignment = 1,
        .kind = 3,
        .num_ptr = 0,
        
    },
    {
        .name = "uint16",
        .inner_type = 0,
        .bytesize = 2,
        .alignment = 2,
        .kind = 4,
        .num_ptr = 0,
        
    },
    {
        .name = "uint32",
        .inner_type = 0,
        .bytesize = 4,
        .alignment = 4,
        .kind = 5,
        .num_ptr = 0,
        
    },
    {
        .name = "uint64",
        .inner_type = 0,
        .bytesize = 8,
        .alignment = 8,
        .kind = 6,
        .num_ptr = 0,
        
    },
    {
        .name = "float32",
        .inner_type = 0,
        .bytesize = 4,
        .alignment = 4,
        .kind = 11,
        .num_ptr = 0,
        
    },
    {
        .name = "float64",
        .inner_type = 0,
        .bytesize = 8,
        .alignment = 8,
        .kind = 12,
        .num_ptr = 0,
        
    },
    {
        .name = "Arena",
        .inner_type = 0,
        .bytesize = 4,
        .alignment = 4,
        .kind = 16,
        .num_ptr = 0,
        .fields = (Array) { .length = 1, .data = (StructField[]){
            {.type_info = (rtti_types+6), .name = "top", .offset = 0},
        }},
    },
    {
        .name = "List",
        .inner_type = 0,
        .bytesize = 12,
        .alignment = 4,
        .kind = 16,
        .num_ptr = 0,
        .fields = (Array) { .length = 3, .data = (StructField[]){
            {.type_info = (rtti_types+6), .name = "stride", .offset = 0},
            {.type_info = (rtti_types+6), .name = "capacity", .offset = 4},
            {.type_info = (rtti_types+6), .name = "length", .offset = 8},
        }},
    },
    {
        .name = "string",
        .inner_type = 0,
        .bytesize = 12,
        .alignment = 8,
        .kind = 16,
        .num_ptr = 0,
        .fields = (Array) { .length = 2, .data = (StructField[]){
            {.type_info = (rtti_types+0), .name = "chars", .offset = 0},
            {.type_info = (rtti_types+6), .name = "length", .offset = 8},
        }},
    },
    {
        .name = "StringBuilder",
        .inner_type = 0,
        .bytesize = 16,
        .alignment = 8,
        .kind = 16,
        .num_ptr = 0,
        .fields = (Array) { .length = 3, .data = (StructField[]){
            {.type_info = (rtti_types+0), .name = "content", .offset = 0},
            {.type_info = (rtti_types+6), .name = "capacity", .offset = 8},
            {.type_info = (rtti_types+6), .name = "length", .offset = 12},
        }},
    },
    {
        .name = "StringReader",
        .inner_type = 0,
        .bytesize = 16,
        .alignment = 8,
        .kind = 16,
        .num_ptr = 0,
        .fields = (Array) { .length = 3, .data = (StructField[]){
            {.type_info = (rtti_types+0), .name = "current", .offset = 0},
            {.type_info = (rtti_types+6), .name = "line", .offset = 8},
            {.type_info = (rtti_types+6), .name = "column", .offset = 12},
        }},
    },
    {
        .name = "SR_Token",
        .inner_type = 0,
        .bytesize = 24,
        .alignment = 8,
        .kind = 16,
        .num_ptr = 0,
        .fields = (Array) { .length = 3, .data = (StructField[]){
            {.type_info = (rtti_types+0), .name = "str", .offset = 0},
            {.type_info = (rtti_types+6), .name = "line", .offset = 16},
            {.type_info = (rtti_types+6), .name = "column", .offset = 20},
        }},
    },
    {
        .name = "FILETIME",
        .inner_type = 0,
        .bytesize = 8,
        .alignment = 4,
        .kind = 16,
        .num_ptr = 0,
        .fields = (Array) { .length = 2, .data = (StructField[]){
            {.type_info = (rtti_types+6), .name = "dwLowDateTime", .offset = 0},
            {.type_info = (rtti_types+6), .name = "dwHighDateTime", .offset = 4},
        }},
    },
    {
        .name = "WIN32_FIND_DATAW",
        .inner_type = 0,
        .bytesize = 44,
        .alignment = 4,
        .kind = 16,
        .num_ptr = 0,
        .fields = (Array) { .length = 10, .data = (StructField[]){
            {.type_info = (rtti_types+6), .name = "dwFileAttributes", .offset = 0},
            {.type_info = (rtti_types+16), .name = "ftCreationTime", .offset = 4},
            {.type_info = (rtti_types+16), .name = "ftLastAccessTime", .offset = 12},
            {.type_info = (rtti_types+16), .name = "ftLastWriteTime", .offset = 20},
            {.type_info = (rtti_types+6), .name = "nFileSizeHigh", .offset = 28},
            {.type_info = (rtti_types+6), .name = "nFileSizeLow", .offset = 32},
            {.type_info = (rtti_types+6), .name = "dwReserved0", .offset = 36},
            {.type_info = (rtti_types+6), .name = "dwReserved1", .offset = 40},
            {.type_info = (rtti_types+0), .name = "cFileName", .offset = 44},
            {.type_info = (rtti_types+0), .name = "cAlternateFileName", .offset = 44},
        }},
    },
    {
        .name = "WIN32_FIND_DATAA",
        .inner_type = 0,
        .bytesize = 44,
        .alignment = 4,
        .kind = 16,
        .num_ptr = 0,
        .fields = (Array) { .length = 10, .data = (StructField[]){
            {.type_info = (rtti_types+6), .name = "dwFileAttributes", .offset = 0},
            {.type_info = (rtti_types+16), .name = "ftCreationTime", .offset = 4},
            {.type_info = (rtti_types+16), .name = "ftLastAccessTime", .offset = 12},
            {.type_info = (rtti_types+16), .name = "ftLastWriteTime", .offset = 20},
            {.type_info = (rtti_types+6), .name = "nFileSizeHigh", .offset = 28},
            {.type_info = (rtti_types+6), .name = "nFileSizeLow", .offset = 32},
            {.type_info = (rtti_types+6), .name = "dwReserved0", .offset = 36},
            {.type_info = (rtti_types+6), .name = "dwReserved1", .offset = 40},
            {.type_info = (rtti_types+0), .name = "cFileName", .offset = 44},
            {.type_info = (rtti_types+0), .name = "cAlternateFileName", .offset = 44},
        }},
    },
    {
        .name = "Win32_Security_Attributes",
        .inner_type = 0,
        .bytesize = 20,
        .alignment = 8,
        .kind = 16,
        .num_ptr = 0,
        .fields = (Array) { .length = 3, .data = (StructField[]){
            {.type_info = (rtti_types+6), .name = "nLength", .offset = 0},
            {.type_info = (rtti_types+0), .name = "lpSecurityDescriptor", .offset = 8},
            {.type_info = (rtti_types+49), .name = "bInheritHandle", .offset = 16},
        }},
    },
    {
        .name = "TypeInfo",
        .inner_type = 0,
        .bytesize = 68,
        .alignment = 8,
        .kind = 16,
        .num_ptr = 0,
        .fields = (Array) { .length = 8, .data = (StructField[]){
            {.type_info = (rtti_types+0), .name = "name", .offset = 0},
            {.type_info = (rtti_types+0), .name = "inner_type", .offset = 8},
            {.type_info = (rtti_types+7), .name = "bytesize", .offset = 16},
            {.type_info = (rtti_types+6), .name = "alignment", .offset = 24},
            {.type_info = (rtti_types+43), .name = "kind", .offset = 28},
            {.type_info = (rtti_types+6), .name = "num_ptr", .offset = 32},
            {.type_info = (rtti_types+0), .name = "fields", .offset = 40},
            {.type_info = (rtti_types+0), .name = "entries", .offset = 56},
        }},
    },
    {
        .name = "StructField",
        .inner_type = 0,
        .bytesize = 20,
        .alignment = 8,
        .kind = 16,
        .num_ptr = 0,
        .fields = (Array) { .length = 3, .data = (StructField[]){
            {.type_info = (rtti_types+0), .name = "type_info", .offset = 0},
            {.type_info = (rtti_types+0), .name = "name", .offset = 8},
            {.type_info = (rtti_types+6), .name = "offset", .offset = 16},
        }},
    },
    {
        .name = "EnumEntry",
        .inner_type = 0,
        .bytesize = 16,
        .alignment = 8,
        .kind = 16,
        .num_ptr = 0,
        .fields = (Array) { .length = 2, .data = (StructField[]){
            {.type_info = (rtti_types+0), .name = "name", .offset = 0},
            {.type_info = (rtti_types+3), .name = "value", .offset = 8},
        }},
    },
    {
        .name = "Procedure",
        .inner_type = 0,
        .bytesize = 124,
        .alignment = 8,
        .kind = 16,
        .num_ptr = 0,
        .fields = (Array) { .length = 5, .data = (StructField[]){
            {.type_info = (rtti_types+0), .name = "name", .offset = 0},
            {.type_info = (rtti_types+0), .name = "code", .offset = 16},
            {.type_info = (rtti_types+20), .name = "return_type", .offset = 24},
            {.type_info = (rtti_types+0), .name = "argument_types", .offset = 96},
            {.type_info = (rtti_types+0), .name = "argument_names", .offset = 112},
        }},
    },
    {
        .name = "vec2",
        .inner_type = 0,
        .bytesize = 8,
        .alignment = 4,
        .kind = 16,
        .num_ptr = 0,
        .fields = (Array) { .length = 2, .data = (StructField[]){
            {.type_info = (rtti_types+8), .name = "x", .offset = 0},
            {.type_info = (rtti_types+8), .name = "y", .offset = 4},
        }},
    },
    {
        .name = "ivec2",
        .inner_type = 0,
        .bytesize = 8,
        .alignment = 4,
        .kind = 16,
        .num_ptr = 0,
        .fields = (Array) { .length = 2, .data = (StructField[]){
            {.type_info = (rtti_types+2), .name = "x", .offset = 0},
            {.type_info = (rtti_types+2), .name = "y", .offset = 4},
        }},
    },
    {
        .name = "vec3",
        .inner_type = 0,
        .bytesize = 12,
        .alignment = 4,
        .kind = 16,
        .num_ptr = 0,
        .fields = (Array) { .length = 3, .data = (StructField[]){
            {.type_info = (rtti_types+8), .name = "x", .offset = 0},
            {.type_info = (rtti_types+8), .name = "y", .offset = 4},
            {.type_info = (rtti_types+8), .name = "z", .offset = 8},
        }},
    },
    {
        .name = "ivec3",
        .inner_type = 0,
        .bytesize = 12,
        .alignment = 4,
        .kind = 16,
        .num_ptr = 0,
        .fields = (Array) { .length = 3, .data = (StructField[]){
            {.type_info = (rtti_types+2), .name = "x", .offset = 0},
            {.type_info = (rtti_types+2), .name = "y", .offset = 4},
            {.type_info = (rtti_types+2), .name = "z", .offset = 8},
        }},
    },
    {
        .name = "vec4",
        .inner_type = 0,
        .bytesize = 16,
        .alignment = 4,
        .kind = 16,
        .num_ptr = 0,
        .fields = (Array) { .length = 4, .data = (StructField[]){
            {.type_info = (rtti_types+8), .name = "x", .offset = 0},
            {.type_info = (rtti_types+8), .name = "y", .offset = 4},
            {.type_info = (rtti_types+8), .name = "z", .offset = 8},
            {.type_info = (rtti_types+8), .name = "w", .offset = 12},
        }},
    },
    {
        .name = "ivec4",
        .inner_type = 0,
        .bytesize = 16,
        .alignment = 4,
        .kind = 16,
        .num_ptr = 0,
        .fields = (Array) { .length = 4, .data = (StructField[]){
            {.type_info = (rtti_types+2), .name = "x", .offset = 0},
            {.type_info = (rtti_types+2), .name = "y", .offset = 4},
            {.type_info = (rtti_types+2), .name = "z", .offset = 8},
            {.type_info = (rtti_types+2), .name = "w", .offset = 12},
        }},
    },
    {
        .name = "mat2",
        .inner_type = 0,
        .bytesize = 16,
        .alignment = 4,
        .kind = 16,
        .num_ptr = 0,
        .fields = (Array) { .length = 2, .data = (StructField[]){
            {.type_info = (rtti_types+24), .name = "row1", .offset = 0},
            {.type_info = (rtti_types+24), .name = "row2", .offset = 8},
        }},
    },
    {
        .name = "mat3",
        .inner_type = 0,
        .bytesize = 36,
        .alignment = 4,
        .kind = 16,
        .num_ptr = 0,
        .fields = (Array) { .length = 3, .data = (StructField[]){
            {.type_info = (rtti_types+26), .name = "row1", .offset = 0},
            {.type_info = (rtti_types+26), .name = "row2", .offset = 12},
            {.type_info = (rtti_types+26), .name = "row3", .offset = 24},
        }},
    },
    {
        .name = "mat4",
        .inner_type = 0,
        .bytesize = 64,
        .alignment = 4,
        .kind = 16,
        .num_ptr = 0,
        .fields = (Array) { .length = 4, .data = (StructField[]){
            {.type_info = (rtti_types+28), .name = "row1", .offset = 0},
            {.type_info = (rtti_types+28), .name = "row2", .offset = 16},
            {.type_info = (rtti_types+28), .name = "row3", .offset = 32},
            {.type_info = (rtti_types+28), .name = "row4", .offset = 48},
        }},
    },
    {
        .name = "quat",
        .inner_type = 0,
        .bytesize = 16,
        .alignment = 4,
        .kind = 16,
        .num_ptr = 0,
        .fields = (Array) { .length = 4, .data = (StructField[]){
            {.type_info = (rtti_types+8), .name = "x", .offset = 0},
            {.type_info = (rtti_types+8), .name = "y", .offset = 4},
            {.type_info = (rtti_types+8), .name = "z", .offset = 8},
            {.type_info = (rtti_types+8), .name = "w", .offset = 12},
        }},
    },
    {
        .name = "Pog_Token",
        .inner_type = 0,
        .bytesize = 49,
        .alignment = 8,
        .kind = 16,
        .num_ptr = 0,
        .fields = (Array) { .length = 4, .data = (StructField[]){
            {.type_info = (rtti_types+44), .name = "kind", .offset = 0},
            {.type_info = (rtti_types+6), .name = "row", .offset = 4},
            {.type_info = (rtti_types+6), .name = "col", .offset = 8},
            {.type_info = (rtti_types+35), .name = "data", .offset = 16},
        }},
    },
    {
        .name = "Pog_TokenData",
        .inner_type = 0,
        .bytesize = 33,
        .alignment = 8,
        .kind = 16,
        .num_ptr = 0,
        .fields = (Array) { .length = 4, .data = (StructField[]){
            {.type_info = (rtti_types+0), .name = "str", .offset = 0},
            {.type_info = (rtti_types+7), .name = "integer", .offset = 16},
            {.type_info = (rtti_types+9), .name = "decimal", .offset = 24},
            {.type_info = (rtti_types+0), .name = "character", .offset = 32},
        }},
    },
    {
        .name = "Pog_Node",
        .inner_type = 0,
        .bytesize = 168,
        .alignment = 8,
        .kind = 16,
        .num_ptr = 0,
        .fields = (Array) { .length = 10, .data = (StructField[]){
            {.type_info = (rtti_types+45), .name = "kind", .offset = 0},
            {.type_info = (rtti_types+6), .name = "ptr_degree", .offset = 4},
            {.type_info = (rtti_types+34), .name = "token", .offset = 8},
            {.type_info = (rtti_types+34), .name = "name", .offset = 64},
            {.type_info = (rtti_types+0), .name = "enclosing_scope", .offset = 120},
            {.type_info = (rtti_types+0), .name = "node1", .offset = 128},
            {.type_info = (rtti_types+0), .name = "node2", .offset = 136},
            {.type_info = (rtti_types+0), .name = "node3", .offset = 144},
            {.type_info = (rtti_types+0), .name = "node4", .offset = 152},
            {.type_info = (rtti_types+0), .name = "sub_nodes", .offset = 160},
        }},
    },
    {
        .name = "Pog_Parser",
        .inner_type = 0,
        .bytesize = 32,
        .alignment = 8,
        .kind = 16,
        .num_ptr = 0,
        .fields = (Array) { .length = 4, .data = (StructField[]){
            {.type_info = (rtti_types+0), .name = "tokens", .offset = 0},
            {.type_info = (rtti_types+6), .name = "token_index", .offset = 8},
            {.type_info = (rtti_types+0), .name = "unit", .offset = 16},
            {.type_info = (rtti_types+0), .name = "arena", .offset = 24},
        }},
    },
    {
        .name = "Pog_Unit",
        .inner_type = 0,
        .bytesize = 24,
        .alignment = 8,
        .kind = 16,
        .num_ptr = 0,
        .fields = (Array) { .length = 3, .data = (StructField[]){
            {.type_info = (rtti_types+0), .name = "arena", .offset = 0},
            {.type_info = (rtti_types+0), .name = "top_level_nodes", .offset = 8},
            {.type_info = (rtti_types+0), .name = "errors", .offset = 16},
        }},
    },
    {
        .name = "Pog_Error",
        .inner_type = 0,
        .bytesize = 72,
        .alignment = 8,
        .kind = 16,
        .num_ptr = 0,
        .fields = (Array) { .length = 2, .data = (StructField[]){
            {.type_info = (rtti_types+34), .name = "token", .offset = 0},
            {.type_info = (rtti_types+0), .name = "message", .offset = 56},
        }},
    },
    {
        .name = "Pog_Codebase",
        .inner_type = 0,
        .bytesize = 24,
        .alignment = 8,
        .kind = 16,
        .num_ptr = 0,
        .fields = (Array) { .length = 3, .data = (StructField[]){
            {.type_info = (rtti_types+0), .name = "units", .offset = 0},
            {.type_info = (rtti_types+0), .name = "types", .offset = 8},
            {.type_info = (rtti_types+0), .name = "procs", .offset = 16},
        }},
    },
    {
        .name = "Pog_Binary_Op",
        .inner_type = 0,
        .bytesize = 8,
        .alignment = 4,
        .kind = 16,
        .num_ptr = 0,
        .fields = (Array) { .length = 2, .data = (StructField[]){
            {.type_info = (rtti_types+44), .name = "token_kind", .offset = 0},
            {.type_info = (rtti_types+45), .name = "node_kind", .offset = 4},
        }},
    },
    {
        .name = "COFF_File_Header",
        .inner_type = 0,
        .bytesize = 20,
        .alignment = 4,
        .kind = 16,
        .num_ptr = 0,
        .fields = (Array) { .length = 7, .data = (StructField[]){
            {.type_info = (rtti_types+5), .name = "Machine", .offset = 0},
            {.type_info = (rtti_types+5), .name = "NumberOfSections", .offset = 2},
            {.type_info = (rtti_types+6), .name = "TimeDateStamp", .offset = 4},
            {.type_info = (rtti_types+6), .name = "PointerToSymbolTable", .offset = 8},
            {.type_info = (rtti_types+6), .name = "NumberOfSymbols", .offset = 12},
            {.type_info = (rtti_types+5), .name = "SizeOfOptionalHeader", .offset = 16},
            {.type_info = (rtti_types+5), .name = "Characteristics", .offset = 18},
        }},
    },
    {
        .name = "Typekind",
        .inner_type = 0,
        .bytesize = 4,
        .alignment = 4,
        .kind = 17,
        .num_ptr = 0,
        .entries = (Array) { .length = 17, .data = (EnumEntry[]){
            {.name = "i8", .value = 0},
            {.name = "i16", .value = 1},
            {.name = "i32", .value = 2},
            {.name = "i64", .value = 3},
            {.name = "u8", .value = 4},
            {.name = "u16", .value = 5},
            {.name = "u32", .value = 6},
            {.name = "u64", .value = 7},
            {.name = "f32", .value = 8},
            {.name = "f64", .value = 9},
            {.name = "void", .value = 10},
            {.name = "char", .value = 11},
            {.name = "Typedef", .value = 12},
            {.name = "Struct", .value = 13},
            {.name = "Array", .value = 14},
            {.name = "Enum", .value = 15},
            {.name = "Procedure", .value = 16},
        }},
    },
    {
        .name = "Pog_Tokenkind",
        .inner_type = 0,
        .bytesize = 4,
        .alignment = 4,
        .kind = 17,
        .num_ptr = 0,
        .entries = (Array) { .length = 82, .data = (EnumEntry[]){
            {.name = "EOF", .value = 0},
            {.name = "ERROR", .value = 1},
            {.name = "Whitespace", .value = 2},
            {.name = "NewLine", .value = 3},
            {.name = "Word", .value = 4},
            {.name = "Keyword_Struct", .value = 5},
            {.name = "Keyword_Enum", .value = 6},
            {.name = "Keyword_With", .value = 7},
            {.name = "Keyword_Namespace", .value = 8},
            {.name = "Keyword_Alloc", .value = 9},
            {.name = "Keyword_Sizeof", .value = 10},
            {.name = "Keyword_Let", .value = 11},
            {.name = "Keyword_Include", .value = 12},
            {.name = "Keyword_If", .value = 13},
            {.name = "Keyword_Else", .value = 14},
            {.name = "Keyword_While", .value = 15},
            {.name = "Keyword_For", .value = 16},
            {.name = "Keyword_Switch", .value = 17},
            {.name = "Keyword_Case", .value = 18},
            {.name = "Keyword_Default", .value = 19},
            {.name = "Keyword_Goto", .value = 20},
            {.name = "Keyword_True", .value = 21},
            {.name = "Keyword_False", .value = 22},
            {.name = "Keyword_And", .value = 23},
            {.name = "Keyword_Or", .value = 24},
            {.name = "Keyword_Null", .value = 25},
            {.name = "Keyword_Continue", .value = 26},
            {.name = "Keyword_Break", .value = 27},
            {.name = "Keyword_Return", .value = 28},
            {.name = "Keyword_Type", .value = 29},
            {.name = "Keyword_As", .value = 30},
            {.name = "Keyword_Const", .value = 31},
            {.name = "Keyword_Static", .value = 32},
            {.name = "Integer", .value = 33},
            {.name = "Decimal", .value = 34},
            {.name = "String", .value = 35},
            {.name = "Char", .value = 36},
            {.name = "Comment", .value = 37},
            {.name = "Multi_Comment_Start", .value = 38},
            {.name = "Multi_Comment_End", .value = 39},
            {.name = "Comma", .value = 40},
            {.name = "Period", .value = 41},
            {.name = "Dotdot", .value = 42},
            {.name = "Semicolon", .value = 43},
            {.name = "Colon", .value = 44},
            {.name = "QuestionMark", .value = 45},
            {.name = "ExclamationMark", .value = 46},
            {.name = "At", .value = 47},
            {.name = "Tilde", .value = 48},
            {.name = "Ampersand", .value = 49},
            {.name = "Pipe", .value = 50},
            {.name = "Caret", .value = 51},
            {.name = "LeftShift", .value = 52},
            {.name = "RightShift", .value = 53},
            {.name = "OpenCurl", .value = 54},
            {.name = "CloseCurl", .value = 55},
            {.name = "OpenParen", .value = 56},
            {.name = "CloseParen", .value = 57},
            {.name = "OpenSquare", .value = 58},
            {.name = "CloseSquare", .value = 59},
            {.name = "LessThan", .value = 60},
            {.name = "GreaterThan", .value = 61},
            {.name = "LessThanOrEqual", .value = 62},
            {.name = "GreaterThanOrEqual", .value = 63},
            {.name = "Equals", .value = 64},
            {.name = "NotEquals", .value = 65},
            {.name = "Assign", .value = 66},
            {.name = "Plus", .value = 67},
            {.name = "Minus", .value = 68},
            {.name = "Mul", .value = 69},
            {.name = "Div", .value = 70},
            {.name = "Mod", .value = 71},
            {.name = "PlusPlus", .value = 72},
            {.name = "MinusMinus", .value = 73},
            {.name = "PlusAssign", .value = 74},
            {.name = "MinusAssign", .value = 75},
            {.name = "MulAssign", .value = 76},
            {.name = "DivAssign", .value = 77},
            {.name = "ModAssign", .value = 78},
            {.name = "BitAndAssign", .value = 79},
            {.name = "BitOrAssign", .value = 80},
            {.name = "BitXorAssign", .value = 81},
        }},
    },
    {
        .name = "Pog_Nodekind",
        .inner_type = 0,
        .bytesize = 4,
        .alignment = 4,
        .kind = 17,
        .num_ptr = 0,
        .entries = (Array) { .length = 74, .data = (EnumEntry[]){
            {.name = "ERROR", .value = 0},
            {.name = "Expr_Plus", .value = 1},
            {.name = "Expr_Minus", .value = 2},
            {.name = "Expr_Mul", .value = 3},
            {.name = "Expr_Div", .value = 4},
            {.name = "Expr_Mod", .value = 5},
            {.name = "Expr_Range", .value = 6},
            {.name = "Expr_Less", .value = 7},
            {.name = "Expr_Greater", .value = 8},
            {.name = "Expr_LessEquals", .value = 9},
            {.name = "Expr_GreaterEquals", .value = 10},
            {.name = "Expr_Equals", .value = 11},
            {.name = "Expr_NotEquals", .value = 12},
            {.name = "Expr_And", .value = 13},
            {.name = "Expr_Or", .value = 14},
            {.name = "Expr_Bit_And", .value = 15},
            {.name = "Expr_Bit_Or", .value = 16},
            {.name = "Expr_Bit_Xor", .value = 17},
            {.name = "Expr_Bit_Lshift", .value = 18},
            {.name = "Expr_Bit_Rshift", .value = 19},
            {.name = "Expr_PreIncrement", .value = 20},
            {.name = "Expr_PostIncrement", .value = 21},
            {.name = "Expr_PreDecrement", .value = 22},
            {.name = "Expr_PostDecrement", .value = 23},
            {.name = "Expr_Not", .value = 24},
            {.name = "Expr_Bit_Not", .value = 25},
            {.name = "Expr_AddressOf", .value = 26},
            {.name = "Expr_ValueOf", .value = 27},
            {.name = "Expr_Negate", .value = 28},
            {.name = "Expr_Integer", .value = 29},
            {.name = "Expr_Decimal", .value = 30},
            {.name = "Expr_Char", .value = 31},
            {.name = "Expr_String", .value = 32},
            {.name = "Expr_True", .value = 33},
            {.name = "Expr_False", .value = 34},
            {.name = "Expr_Null", .value = 35},
            {.name = "Expr_Variable", .value = 36},
            {.name = "Expr_Alloc", .value = 37},
            {.name = "Expr_Ternary", .value = 38},
            {.name = "Expr_ProcCall", .value = 39},
            {.name = "Expr_Deref", .value = 40},
            {.name = "Expr_Indexing", .value = 41},
            {.name = "Expr_Cast", .value = 42},
            {.name = "Expr_Sizeof", .value = 43},
            {.name = "Expr_Parenthesized", .value = 44},
            {.name = "Expr_Compound", .value = 45},
            {.name = "Stmt_Declaration", .value = 46},
            {.name = "Stmt_Constant", .value = 47},
            {.name = "Stmt_Typedef", .value = 48},
            {.name = "Stmt_Procedure", .value = 49},
            {.name = "Stmt_Argument", .value = 50},
            {.name = "Stmt_Struct", .value = 51},
            {.name = "Stmt_Enum", .value = 52},
            {.name = "Stmt_EnumEntry", .value = 53},
            {.name = "Stmt_Assignment", .value = 54},
            {.name = "Stmt_Scope", .value = 55},
            {.name = "Stmt_If", .value = 56},
            {.name = "Stmt_While", .value = 57},
            {.name = "Stmt_For", .value = 58},
            {.name = "Stmt_Switch", .value = 59},
            {.name = "Stmt_Continue", .value = 60},
            {.name = "Stmt_Break", .value = 61},
            {.name = "Stmt_Return", .value = 62},
            {.name = "Stmt_Goto", .value = 63},
            {.name = "Stmt_Label", .value = 64},
            {.name = "Stmt_Case", .value = 65},
            {.name = "Stmt_Default", .value = 66},
            {.name = "Stmt_Include", .value = 67},
            {.name = "Type_MustInfer", .value = 68},
            {.name = "Type_Basic", .value = 69},
            {.name = "Type_Procedure", .value = 70},
            {.name = "Type_Array", .value = 71},
            {.name = "Type_Fixed_Array", .value = 72},
            {.name = "Type_Dynamic_Array", .value = 73},
        }},
    },
    {
        .name = "Image_File_Machine",
        .inner_type = 0,
        .bytesize = 4,
        .alignment = 4,
        .kind = 17,
        .num_ptr = 0,
        .entries = (Array) { .length = 35, .data = (EnumEntry[]){
            {.name = "UNKNOWN", .value = 0},
            {.name = "ALPHA", .value = 388},
            {.name = "ALPHA64", .value = 644},
            {.name = "AM33", .value = 467},
            {.name = "AMD64", .value = 34404},
            {.name = "ARM", .value = 448},
            {.name = "ARM64", .value = 43620},
            {.name = "ARM64EC", .value = 42561},
            {.name = "ARM64X", .value = 42574},
            {.name = "ARMNT", .value = 452},
            {.name = "AXP64", .value = 644},
            {.name = "EBC", .value = 3772},
            {.name = "I386", .value = 332},
            {.name = "IA64", .value = 512},
            {.name = "LOONGARCH32", .value = 25138},
            {.name = "LOONGARCH64", .value = 25188},
            {.name = "M32R", .value = 36929},
            {.name = "MIPS16", .value = 614},
            {.name = "MIPSFPU", .value = 870},
            {.name = "MIPSFPU16", .value = 1126},
            {.name = "POWERPC", .value = 496},
            {.name = "POWERPCFP", .value = 497},
            {.name = "R3000BE", .value = 352},
            {.name = "R3000", .value = 354},
            {.name = "R4000", .value = 358},
            {.name = "R10000", .value = 360},
            {.name = "RISCV32", .value = 20530},
            {.name = "RISCV64", .value = 20580},
            {.name = "RISCV128", .value = 20776},
            {.name = "SH3", .value = 418},
            {.name = "SH3DSP", .value = 419},
            {.name = "SH4", .value = 422},
            {.name = "SH5", .value = 424},
            {.name = "THUMB", .value = 450},
            {.name = "WCEMIPSV2", .value = 361},
        }},
    },
    {
        .name = "My_Type",
        .inner_type = 0,
        .bytesize = 4,
        .alignment = 4,
        .kind = 18,
        .num_ptr = 0,
        
    },
    {
        .name = "bool",
        .inner_type = 0,
        .bytesize = 1,
        .alignment = 1,
        .kind = 18,
        .num_ptr = 0,
        
    },
    {
        .name = "bool32",
        .inner_type = 0,
        .bytesize = 4,
        .alignment = 4,
        .kind = 18,
        .num_ptr = 0,
        
    },
    {
        .name = "byte",
        .inner_type = 0,
        .bytesize = 1,
        .alignment = 1,
        .kind = 18,
        .num_ptr = 0,
        
    },
    {
        .name = "FILE",
        .inner_type = 0,
        .bytesize = 0,
        .alignment = 1,
        .kind = 18,
        .num_ptr = 0,
        
    },
    {
        .name = "HANDLE",
        .inner_type = 0,
        .bytesize = 8,
        .alignment = 8,
        .kind = 18,
        .num_ptr = 0,
        
    },
    
};

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
void qsort(void* ptr, uint64 count, uint64 size, int32 (*comp)(void*, void*));
static void assert(bool test);
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
static Array as_span(void* list);
static void list_grow(void** list, uint32 new_capacity);
static void* list_add(void** list, void* data);
static void* list_append(void** list);
static void* list_get_overload1(void* list, int32 index);
static void* list_get_overload2(void* list, uint32 index);
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
static bool string_equals_overload1(char* a, char* b);
static bool string_equals_overload2(char* a, string b);
static bool string_equals_overload3(string a, char* b);
static bool string_equals_overload4(string a, string b);
static bool starts_with_overload1(string text, string start);
static bool starts_with_overload2(char* text, char* start);
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
static char to_upper(char c);
static char to_lower(char c);
static string alloc_string_copy_overload1(char* str);
static string alloc_string_copy_overload2(string str);
static uint32 lev(string a, string b);
static uint32 lev_(string a, string b);
static string to_string_overload7(StringBuilder sb);
static string to_string_overload8(StringBuilder* sb);
static StringBuilder* alloc_temp_builders(uint32 count);
static StringBuilder* temp_builder();
static char* temp_cstr(string str);
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
static void ensure_size(StringBuilder* sb, uint32 size);
static void sb_append_overload1(StringBuilder* sb, char* str);
static void sb_append_overload2(StringBuilder* sb, string str);
static void sb_append_overload3(StringBuilder* sb, char c);
static void sb_append_overload4(StringBuilder* sb, float32 f);
static void sb_append_overload5(StringBuilder* sb, vec2 v);
static void sb_insert(StringBuilder* sb, uint32 loc, string str);
static void sb_remove(StringBuilder* sb, uint32 loc, uint32 num_chars);
static void sb_truncate_length(StringBuilder* sb, uint32 new_len);
static void sb_clear(StringBuilder* sb);
bool32 CloseHandle(HANDLE hObject);
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
HANDLE CreateThread(Win32_Security_Attributes* lpThreadAttributes, uint64 dwStackSize, uint32 (*lpStartAddress)(void*), void* lpParameter, uint32 dwCreationFlags, uint32* lpThreadId);
uint32 SuspendThread(HANDLE hThread);
uint32 ResumeThread(HANDLE hThread);
HANDLE GetCurrentThread();
static void* vmem_reserve(uint64 size);
static void vmem_release(void* address);
static void vmem_commit(void* address, uint64 size);
static void vmem_decommit(void* address, uint64 size);
static void print_type_info(TypeInfo* ti, void* ptr);
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
static int32 sq_overload1(int32 a);
static float32 sq_overload2(float32 a);
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
static float32 min_axis(vec3 v);
static float32 max_axis(vec3 v);
static int32 sign_overload1(float32 v);
static ivec2 sign_overload2(vec2 v);
static ivec3 sign_overload3(vec3 v);
static ivec4 sign_overload4(vec4 v);
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
static int32 abs_overload3(int32 x);
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
static vec4 make_vec_overload8(vec2 xy, vec2 zw);
static vec4 make_vec_overload9(vec2 xy, float32 z, float32 w);
static vec4 make_vec_overload10(float32 x, float32 y, vec2 zw);
static vec4 make_vec_overload11(float32 x, vec2 yz, float32 w);
static vec2 make_vec_overload12(ivec2 v);
static vec3 make_vec_overload13(ivec3 v);
static vec4 make_vec_overload14(ivec4 v);
static ivec2 make_ivec_overload8(vec2 v);
static ivec3 make_ivec_overload9(vec3 v);
static ivec4 make_ivec_overload10(vec4 v);
static bool equals_overload1(vec2 a, vec2 b);
static bool equals_overload2(vec3 a, vec3 b);
static bool equals_overload3(vec4 a, vec4 b);
static bool equals_overload4(ivec2 a, ivec2 b);
static bool equals_overload5(ivec3 a, ivec3 b);
static bool equals_overload6(ivec4 a, ivec4 b);
static float32 floor_overload1(float32 x);
static vec2 floor_overload2(vec2 v);
static vec3 floor_overload3(vec3 v);
static vec4 floor_overload4(vec4 v);
static vec2 fract_overload2(vec2 v);
static vec3 fract_overload3(vec3 v);
static vec4 fract_overload4(vec4 v);
static vec2 round_overload2(vec2 v);
static vec3 round_overload3(vec3 v);
static vec4 round_overload4(vec4 v);
static vec2 round2multiple_overload2(vec2 v, float32 n);
static vec3 round2multiple_overload3(vec3 v, float32 n);
static vec4 round2multiple_overload4(vec4 v, float32 n);
static vec2 abs_overload4(vec2 v);
static vec3 abs_overload5(vec3 v);
static vec4 abs_overload6(vec4 v);
static ivec2 abs_overload7(ivec2 v);
static ivec3 abs_overload8(ivec3 v);
static ivec4 abs_overload9(ivec4 v);
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
static vec2 div_overload7(vec2 a, vec2 b);
static vec3 div_overload8(vec3 a, vec3 b);
static vec4 div_overload9(vec4 a, vec4 b);
static ivec2 div_overload10(ivec2 a, ivec2 b);
static ivec3 div_overload11(ivec3 a, ivec3 b);
static ivec4 div_overload12(ivec4 a, ivec4 b);
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
static ivec2 xy_overload3(ivec3 a);
static ivec2 xy_overload4(ivec4 a);
static ivec2 xz_overload3(ivec3 a);
static ivec2 xz_overload4(ivec4 a);
static vec3 xyz_overload1(vec4 a);
static vec3 cross(vec3 a, vec3 b);
static vec3 move_overload1(vec3 current, vec3 target, float32 step_dist);
static vec2 move_overload2(vec2 current, vec2 target, float32 step_dist);
static float32 move_overload3(float32 current, float32 target, float32 step_dist);
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
static mat4 mat4_translate_overload1(vec3 v);
static mat4 mat4_translate_overload2(float32 x, float32 y, float32 z);
static mat4 mat4_scale_overload1(vec3 v);
static mat4 mat4_scale_overload2(float32 s);
static mat4 mat4_scale_overload3(float32 x, float32 y, float32 z);
static mat4 mat4_rotate(quat q);
static mat4 make_mat4_overload1(float32 s);
static mat4 make_mat4_overload2(vec3 pos, vec3 scale);
static mat4 make_mat4_overload3(vec3 pos, float32 scale);
static mat4 make_mat4_overload4(vec3 position, vec3 scale, quat rotation);
static mat4 make_mat4_inverse(vec3 position, vec3 scale, quat rotation);
static mat4 rotate_overload1(mat4 m, quat q, vec3 p);
static vec4 col1_overload3(mat4 m);
static vec4 col2_overload3(mat4 m);
static vec4 col3_overload2(mat4 m);
static vec4 col4(mat4 m);
static mat4 transpose_overload3(mat4 m);
static mat4 mul_overload25(mat4 a, mat4 b);
static vec4 mul_overload26(mat4 m, vec4 v);
static vec4 mul_overload27(vec4 v, mat4 m);
static vec3 transform_point(vec3 p, mat4 m);
static vec3 transform_dir(vec3 p, mat4 m);
static mat4 perspective(float32 fovy, float32 aspect, float32 near_depth, float32 far_depth);
static mat4 perspective_off_center(float32 left, float32 right, float32 bottom, float32 top, float32 near_depth, float32 far_depth);
static vec3 xyz_overload2(quat q);
static quat conj(quat q);
static quat normalize_overload4(quat q);
static vec3 rotate_overload2(quat q, vec3 v);
static float32 dot_overload4(quat a, quat b);
static quat lerp_overload5(float32 t, quat a, quat b);
static quat nlerp(float32 t, quat a, quat b);
static quat slerp(float32 t, quat a, quat b);
static quat unit_quat_power(quat q, float32 t);
static quat sub_overload7(quat a, quat b);
static quat add_overload7(quat a, quat b);
static quat mul_overload28(quat a, float32 s);
static quat mul_overload29(quat l, quat r);
static quat axis_angle(vec3 axis, float32 angle);
static quat axisangle2quat(vec3 axis, float32 angle);
static quat matrix2quat(mat4 m);
static mat4 quat2matrix(quat q);
static char* get_str_overload1(Pog_Tokenkind kind);
static Pog_Token pog_next_token(char* cursor);
static Pog_Token* lex(char* file_buffer);
static void print_tokens(Pog_Token* tokens);
static char* get_str_overload2(Pog_Nodekind kind);
static Pog_Codebase make_codebase();
static void foreach_node(Pog_Unit* unit, bool (*top_down)(Pog_Node*, void*), void (*bottom_up)(Pog_Node*, void*), void* user_ptr);
static void add_unit(Pog_Codebase* cb, Pog_Unit* unit);
static Pog_Token peek_overload1(Pog_Parser* pp);
static Pog_Token peek_overload2(Pog_Parser* pp, int32 offset);
static bool token_overload1(Pog_Parser* pp, Pog_Tokenkind kind);
static bool token_until(Pog_Parser* pp, Pog_Tokenkind kind);
static bool token_overload2(Pog_Parser* pp, Array kinds);
static Pog_Token assert_token(Pog_Parser* pp, Pog_Tokenkind kind);
static void assert_semicolon(Pog_Parser* pp);
static Pog_Unit* parse(char* file_buffer);
static void delete_unit(Pog_Unit* unit);
static Pog_Node* new_node(Pog_Parser* pp, Pog_Nodekind kind);
static Pog_Node* parse_stmt(Pog_Parser* pp);
static uint32 peek_type(Pog_Parser* pp);
static Pog_Node* parse_type(Pog_Parser* pp);
static Pog_Node* parse_expr(Pog_Parser* pp);
static Pog_Node* parse_expr_binary(Pog_Parser* pp);
static Pog_Nodekind test_op_group(Pog_Parser* pp, uint32 op_index);
static Pog_Node* parse_expr_bin(Pog_Parser* pp, uint32 op_index);
static Pog_Node* parse_expr_unary(Pog_Parser* pp);
static Pog_Node* parse_expr_leaf(Pog_Parser* pp);
static void print_node(uint32 tabs, StringBuilder* sb, Pog_Node* node);
static void print_ast(StringBuilder* sb, Pog_Unit* unit);
static void read_exe(char* filename);

// Declarations
static Array pog_all_ops = (Array) { .length = 6, .data = (Array[]){(Array) { .length = 2, .data = (Pog_Binary_Op[]){(Pog_Binary_Op) {23, 13}, (Pog_Binary_Op) {24, 14}}}, (Array) { .length = 6, .data = (Pog_Binary_Op[]){(Pog_Binary_Op) {60, 7}, (Pog_Binary_Op) {61, 8}, (Pog_Binary_Op) {62, 9}, (Pog_Binary_Op) {63, 10}, (Pog_Binary_Op) {64, 11}, (Pog_Binary_Op) {65, 12}}}, (Array) { .length = 1, .data = (Pog_Binary_Op[]){(Pog_Binary_Op) {42, 6}}}, (Array) { .length = 5, .data = (Pog_Binary_Op[]){(Pog_Binary_Op) {49, 15}, (Pog_Binary_Op) {50, 16}, (Pog_Binary_Op) {51, 17}, (Pog_Binary_Op) {52, 18}, (Pog_Binary_Op) {53, 19}}}, (Array) { .length = 2, .data = (Pog_Binary_Op[]){(Pog_Binary_Op) {67, 1}, (Pog_Binary_Op) {68, 2}}}, (Array) { .length = 3, .data = (Pog_Binary_Op[]){(Pog_Binary_Op) {69, 3}, (Pog_Binary_Op) {70, 4}, (Pog_Binary_Op) {71, 5}}}}};
static char* message = "Hello, Seamen!\n";
static StringBuilder* temps;
static uint32 rotation = 0;

// Implementations
void __main() {
    read_exe("output.exe");
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
void qsort(void* ptr, uint64 count, uint64 size, int32 (*comp)(void*, void*));
static void assert(bool test) {
    if (test) return;
    printf("%s", "Assertion Failed.\n");
    exit(1);
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
    return (void*)&head[1];
}
static List* list_head(void* list) {
    return &((List*)list)[-1];
}
static uint32 list_length(void* list) {
    return list ? list_head((void*)(list))->length : 0;
}
static uint32 list_capacity(void* list) {
    return list_head((void*)(list))->capacity;
}
static uint32 list_stride(void* list) {
    return list_head((void*)(list))->stride;
}
static void list_set_length(void* list, uint32 new_len) {
    list_head((void*)(list))->length = new_len;
}
static void list_delete(void* list) {
    free(list_head((void*)(list)));
}
static void list_clear(void* list) {
    list_head((void*)(list))->length = 0;
}
static Array as_span(void* list) {
    Array span;
    span.data = (void*)list;
    span.length = list_length((void*)(list));
    return span;
}
static void list_grow(void** list, uint32 new_capacity) {
    List* head = list_head((void*)(*list));
    head->capacity = new_capacity;
    head = realloc(head, (sizeof(List) + (head->capacity * head->stride)));
    *list = (void*)&head[1];
}
static void* list_add(void** list, void* data) {
    uint32 len = list_length((void*)(*list));
    uint32 cap = list_capacity((void*)(*list));
    uint32 stride = list_stride((void*)(*list));
    if (cap == len) list_grow((void**)(list), (cap * 2));
    void* dst = (((byte*)*list) + (len * stride));
    if (data) memcpy(dst, data, stride);
    list_set_length((void*)(*list), (len + 1));
    return dst;
}
static void* list_append(void** list) {
    return list_add((void**)(list), 0);
}
static void* list_get_overload1(void* list, int32 index) {
    return (((byte*)list) + (((int32)list_stride((void*)(list))) * index));
}
static void* list_get_overload2(void* list, uint32 index) {
    return (((byte*)list) + (list_stride((void*)(list)) * index));
}
static void* list_last_item(void* list) {
    return list_get_overload2((void*)(list), (list_length((void*)(list)) - 1));
}
static int32 index_of(void* list, void* data) {
    uint32 len = list_length((void*)(list));
    for (int32 it = 0; it < len; it++) {
        void* item = list_get_overload1((void*)(list), it);
        if (memcmp(data, item, list_stride((void*)(list))) == 0) return it;
    }
    return -1;
}
static void list_remove(void* list, void* item) {
    int32 i = index_of((void*)(list), item);
    if (i != -1) {
        list_unordered_remove((void*)(list), (uint32)i);
    }
}
static void list_unordered_remove(void* list, uint32 index) {
    uint32 len = list_length((void*)(list));
    memcpy(list_get_overload2((void*)(list), index), list_get_overload2((void*)(list), (len - 1)), list_stride((void*)(list)));
    list_set_length((void*)(list), (len - 1));
}
static void list_ordered_remove(void* list, uint32 index) {
    uint32 new_len = (list_length((void*)(list)) - 1);
    memmove(list_get_overload2((void*)(list), index), list_get_overload2((void*)(list), (index + 1)), ((new_len - index) * list_stride((void*)(list))));
    list_set_length((void*)(list), new_len);
}
static void* list_insert_overload1(void** list, uint32 index) {
    return list_insert_overload2((void**)(list), index, 0);
}
static void* list_insert_overload2(void** list, uint32 index, void* data) {
    uint32 stride = list_stride((void*)(*list));
    uint32 count = (list_length((void*)(*list)) - index);
    list_append((void**)(list));
    void* item = list_get_overload2((void*)(*list), index);
    memmove(list_get_overload2((void*)(*list), (index + 1)), item, (count * stride));
    if (data) memcpy(item, data, stride);
    return item;
}
static void* list_pop(void* list) {
    uint32 len = list_length((void*)(list));
    if (len == 0) return 0;
    void* res = list_get_overload2((void*)(list), (len - 1));
    list_set_length((void*)(list), (len - 1));
    return res;
}
static string make_string_overload1(char* c_str) {
    return c_str ? (string) {c_str, strlen(c_str)} : (string) {0};
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
    char num_str[21] = {0};
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
    string frac = to_string_overload2((uint64)(fract_overload1(abs_overload1(f)) * 1000000));
    for (int32 it = 0; it < (6 - frac.length); it++) sb_append_overload3(sb, '0');
    sb_append_overload2(sb, frac);
    return to_string_overload8(sb);
}
static bool string_equals_overload1(char* a, char* b) {
    return string_equals_overload4(make_string_overload1(a), make_string_overload1(b));
}
static bool string_equals_overload2(char* a, string b) {
    return string_equals_overload4(make_string_overload1(a), b);
}
static bool string_equals_overload3(string a, char* b) {
    return string_equals_overload4(a, make_string_overload1(b));
}
static bool string_equals_overload4(string a, string b) {
    if (a.length != b.length) return 0;
    for (int32 i = 0; i < a.length; i++) if (a.chars[i] != b.chars[i]) return 0;
    return 1;
}
static bool starts_with_overload1(string text, string start) {
    if (text.length < start.length) return 0;
    for (int32 it = 0; it < start.length; it++) {
        if (to_lower(text.chars[it]) != to_lower(start.chars[it])) return 0;
    }
    return 1;
}
static bool starts_with_overload2(char* text, char* start) {
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
static char to_upper(char c) {
    return is_lower_case_letter(c) ? ((c + 'A') - 'a') : c;
}
static char to_lower(char c) {
    return is_upper_case_letter(c) ? ((c + 'a') - 'A') : c;
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
static uint32 ind(uint32 s, int32 r, int32 c) {
    return ((s * r) + c);
}
static uint32 lev_(string a, string b) {
    uint32 rows = (a.length + 1);
    uint32 cols = (b.length + 1);
    uint32* slots = calloc((rows * cols), sizeof(uint32));
    /* local procedure */;
    for (int32 it = 0; it < rows; it++) slots[ind(cols, it, 0)] = it;
    for (int32 it = 0; it < cols; it++) slots[ind(cols, 0, it)] = it;
    for (int32 i = 1; i < rows; i++) for (int32 j = 1; j < cols; j++) {
        uint32 dels = (slots[ind(cols, (i - 1), j)] + 1);
        uint32 inse = (slots[ind(cols, i, (j - 1))] + 1);
        uint32 subs = (slots[ind(cols, (i - 1), (j - 1))] + (uint32)(a.chars[(i - 1)] != b.chars[(j - 1)]));
        slots[ind(cols, i, j)] = min_overload5(dels, min_overload5(inse, subs));
    }
    if (0) {
        printf("%s", "   ");
        for (int32 it = 1; it < cols; it++) printf("%s%c", " ", b.chars[(it - 1)]);
        printf("%s", "\n");
        for (int32 i = 0; i < rows; i++) {
            if (i != 0) printf("%c", a.chars[(i - 1)]); else printf("%s", " ");
            for (int32 j = 0; j < cols; j++) {
                printf("%s%u", " ", slots[ind(cols, i, j)]);
            }
            printf("%s", "\n");
        }
    }
    uint32 result = slots[ind(cols, (rows - 1), (cols - 1))];
    free(slots);
    return result;
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
static char* temp_cstr(string str) {
    StringBuilder* sb = temp_builder();
    sb_append_overload2(sb, str);
    return sb->content;
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
static void ensure_size(StringBuilder* sb, uint32 size) {
    if (sb->capacity < size) {
        uint32 len = (size - sb->capacity);
        sb_grow(sb, len);
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
bool32 CloseHandle(HANDLE hObject);
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
HANDLE CreateThread(Win32_Security_Attributes* lpThreadAttributes, uint64 dwStackSize, uint32 (*lpStartAddress)(void*), void* lpParameter, uint32 dwCreationFlags, uint32* lpThreadId);
uint32 SuspendThread(HANDLE hThread);
uint32 ResumeThread(HANDLE hThread);
HANDLE GetCurrentThread();
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
static void print_type_info(TypeInfo* ti, void* ptr) {
}
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
static int32 sq_overload1(int32 a) {
    return (a * a);
}
static float32 sq_overload2(float32 a) {
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
    if (is_nan_overload1(a)) return b;
    if (is_nan_overload1(b)) return a;
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
    if (is_nan_overload1(a)) return b;
    if (is_nan_overload1(b)) return a;
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
static float32 min_axis(vec3 v) {
    return min_overload6(v.x, min_overload6(v.y, v.z));
}
static float32 max_axis(vec3 v) {
    return max_overload6(v.x, max_overload6(v.y, v.z));
}
static int32 sign_overload1(float32 v) {
    if (v == 0.000000) return 0;
    if (v < 0.000000) return -1; else return 1;
}
static ivec2 sign_overload2(vec2 v) {
    return (ivec2) {sign_overload1(v.x), sign_overload1(v.y)};
}
static ivec3 sign_overload3(vec3 v) {
    return (ivec3) {sign_overload1(v.x), sign_overload1(v.y), sign_overload1(v.z)};
}
static ivec4 sign_overload4(vec4 v) {
    return (ivec4) {sign_overload1(v.x), sign_overload1(v.y), sign_overload1(v.z), sign_overload1(v.w)};
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
static int32 abs_overload3(int32 x) {
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
static vec4 make_vec_overload8(vec2 xy, vec2 zw) {
    return (vec4) {xy.x, xy.y, zw.x, zw.y};
}
static vec4 make_vec_overload9(vec2 xy, float32 z, float32 w) {
    return (vec4) {xy.x, xy.y, z, w};
}
static vec4 make_vec_overload10(float32 x, float32 y, vec2 zw) {
    return (vec4) {x, y, zw.x, zw.y};
}
static vec4 make_vec_overload11(float32 x, vec2 yz, float32 w) {
    return (vec4) {x, yz.x, yz.y, w};
}
static vec2 make_vec_overload12(ivec2 v) {
    return (vec2) {(float32)v.x, (float32)v.y};
}
static vec3 make_vec_overload13(ivec3 v) {
    return (vec3) {(float32)v.x, (float32)v.y, (float32)v.z};
}
static vec4 make_vec_overload14(ivec4 v) {
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
static float32 floor_overload1(float32 x) {
    return (float32)((x < 0) ? ((int32)x - 1) : ((int32)x));
}
static vec2 floor_overload2(vec2 v) {
    return (vec2) {floorf(v.x), floorf(v.y)};
}
static vec3 floor_overload3(vec3 v) {
    return (vec3) {floorf(v.x), floorf(v.y), floorf(v.z)};
}
static vec4 floor_overload4(vec4 v) {
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
static vec2 abs_overload4(vec2 v) {
    return (vec2) {abs_overload1(v.x), abs_overload1(v.y)};
}
static vec3 abs_overload5(vec3 v) {
    return (vec3) {abs_overload1(v.x), abs_overload1(v.y), abs_overload1(v.z)};
}
static vec4 abs_overload6(vec4 v) {
    return (vec4) {abs_overload1(v.x), abs_overload1(v.y), abs_overload1(v.z), abs_overload1(v.w)};
}
static ivec2 abs_overload7(ivec2 v) {
    return (ivec2) {abs_overload1(v.x), abs_overload1(v.y)};
}
static ivec3 abs_overload8(ivec3 v) {
    return (ivec3) {abs_overload1(v.x), abs_overload1(v.y), abs_overload1(v.z)};
}
static ivec4 abs_overload9(ivec4 v) {
    return (ivec4) {abs_overload1(v.x), abs_overload1(v.y), abs_overload1(v.z), abs_overload1(v.w)};
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
static vec2 div_overload7(vec2 a, vec2 b) {
    return (vec2) {(a.x / b.x), (a.y / b.y)};
}
static vec3 div_overload8(vec3 a, vec3 b) {
    return (vec3) {(a.x / b.x), (a.y / b.y), (a.z / b.z)};
}
static vec4 div_overload9(vec4 a, vec4 b) {
    return (vec4) {(a.x / b.x), (a.y / b.y), (a.z / b.z), (a.w / b.w)};
}
static ivec2 div_overload10(ivec2 a, ivec2 b) {
    return (ivec2) {(a.x / b.x), (a.y / b.y)};
}
static ivec3 div_overload11(ivec3 a, ivec3 b) {
    return (ivec3) {(a.x / b.x), (a.y / b.y), (a.z / b.z)};
}
static ivec4 div_overload12(ivec4 a, ivec4 b) {
    return (ivec4) {(a.x / b.x), (a.y / b.y), (a.z / b.z), (a.w / b.w)};
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
    float32 denom = (length_overload1(a) * length_overload1(b));
    return (denom == 0.000000) ? 0.000000 : acosf(clamp_overload2((dot_overload1(a, b) / denom), -1, 1));
}
static float32 angle_overload2(vec3 a, vec3 b) {
    float32 denom = (length_overload2(a) * length_overload2(b));
    return (denom == 0.000000) ? 0.000000 : acosf(clamp_overload2((dot_overload2(a, b) / denom), -1, 1));
}
static float32 angle_overload3(vec4 a, vec4 b) {
    float32 denom = (length_overload3(a) * length_overload3(b));
    return (denom == 0.000000) ? 0.000000 : acosf(clamp_overload2((dot_overload3(a, b) / denom), -1, 1));
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
    return add_overload1(a, mul_overload7(mul_overload7(normal, dot_overload1(a, normal)), -2.000000));
}
static vec3 reflect_overload2(vec3 a, vec3 normal) {
    return add_overload2(a, mul_overload8(mul_overload8(normal, dot_overload2(a, normal)), -2.000000));
}
static vec4 reflect_overload3(vec4 a, vec4 normal) {
    return add_overload3(a, mul_overload9(mul_overload9(normal, dot_overload3(a, normal)), -2.000000));
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
    float32 len = length_overload1(a);
    return (len == 0.000000) ? b : div_overload1(a, len);
}
static vec3 normalize_or_overload2(vec3 a, vec3 b) {
    float32 len = length_overload2(a);
    return (len == 0.000000) ? b : div_overload2(a, len);
}
static vec4 normalize_or_overload3(vec4 a, vec4 b) {
    float32 len = length_overload3(a);
    return (len == 0.000000) ? b : div_overload3(a, len);
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
static ivec2 xy_overload3(ivec3 a) {
    return (ivec2) {a.x, a.y};
}
static ivec2 xy_overload4(ivec4 a) {
    return (ivec2) {a.x, a.y};
}
static ivec2 xz_overload3(ivec3 a) {
    return (ivec2) {a.x, a.z};
}
static ivec2 xz_overload4(ivec4 a) {
    return (ivec2) {a.x, a.z};
}
static vec3 xyz_overload1(vec4 a) {
    return (vec3) {a.x, a.y, a.z};
}
static vec3 cross(vec3 a, vec3 b) {
    return (vec3) {((a.y * b.z) - (a.z * b.y)), ((a.z * b.x) - (a.x * b.z)), ((a.x * b.y) - (a.y * b.x))};
}
static vec3 move_overload1(vec3 current, vec3 target, float32 step_dist) {
    vec3 diff = sub_overload2(target, current);
    float32 len = length_overload2(diff);
    float32 mag = min_overload6(step_dist, len);
    return add_overload2(current, mul_overload8(noz_overload2(diff), mag));
}
static vec2 move_overload2(vec2 current, vec2 target, float32 step_dist) {
    vec2 diff = sub_overload1(target, current);
    float32 len = length_overload1(diff);
    float32 mag = min_overload6(step_dist, len);
    return add_overload1(current, mul_overload7(noz_overload1(diff), mag));
}
static float32 move_overload3(float32 current, float32 target, float32 step_dist) {
    float32 diff = (target - current);
    float32 mag = min_overload6(step_dist, abs_overload1(diff));
    return (current + (sign_overload1(diff) * mag));
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
static mat4 mat4_translate_overload1(vec3 v) {
    return mat4_translate_overload2(v.x, v.y, v.z);
}
static mat4 mat4_translate_overload2(float32 x, float32 y, float32 z) {
    return (mat4) {1, 0, 0, 0, 0, 1, 0, 0, 0, 0, 1, 0, x, y, z, 1};
}
static mat4 mat4_scale_overload1(vec3 v) {
    return mat4_scale_overload3(v.x, v.y, v.z);
}
static mat4 mat4_scale_overload2(float32 s) {
    return mat4_scale_overload3(s, s, s);
}
static mat4 mat4_scale_overload3(float32 x, float32 y, float32 z) {
    return (mat4) {x, 0, 0, 0, 0, y, 0, 0, 0, 0, z, 0, 0, 0, 0, 1};
}
static mat4 mat4_rotate(quat q) {
    return quat2matrix(q);
}
static mat4 make_mat4_overload1(float32 s) {
    return (mat4) {s, 0, 0, 0, 0, s, 0, 0, 0, 0, s, 0, 0, 0, 0, 1};
}
static mat4 make_mat4_overload2(vec3 pos, vec3 scale) {
    return (mat4) {scale.x, 0, 0, 0, 0, scale.y, 0, 0, 0, 0, scale.z, 0, pos.x, pos.y, pos.z, 1};
}
static mat4 make_mat4_overload3(vec3 pos, float32 scale) {
    return make_mat4_overload2(pos, make_vec3(scale));
}
static mat4 make_mat4_overload4(vec3 position, vec3 scale, quat rotation) {
    mat4 res = quat2matrix(rotation);
    res.row1 = mul_overload9(res.row1, scale.x);
    res.row2 = mul_overload9(res.row2, scale.y);
    res.row3 = mul_overload9(res.row3, scale.z);
    res.row4 = make_vec_overload6(position, 1.000000);
    return res;
}
static mat4 make_mat4_inverse(vec3 position, vec3 scale, quat rotation) {
    mat4 res = quat2matrix(normalize_overload4(conj(rotation)));
    vec4 S = (vec4) {(1.000000 / scale.x), (1.000000 / scale.y), (1.000000 / scale.z), 0.000000};
    res.row1 = mul_overload3(res.row1, S);
    res.row2 = mul_overload3(res.row2, S);
    res.row3 = mul_overload3(res.row3, S);
    res.row4.x = -dot_overload2(xyz_overload1(col1_overload3(res)), position);
    res.row4.y = -dot_overload2(xyz_overload1(col2_overload3(res)), position);
    res.row4.z = -dot_overload2(xyz_overload1(col3_overload2(res)), position);
    return res;
}
static mat4 rotate_overload1(mat4 m, quat q, vec3 p) {
    return mul_overload25(mul_overload25(mul_overload25(m, mat4_translate_overload1(p)), mat4_rotate(q)), mat4_translate_overload1(neg_overload2(p)));
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
static vec3 transform_dir(vec3 p, mat4 m) {
    return xyz_overload1(mul_overload27(make_vec_overload6(p, 0.000000), m));
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
    return (mat4) {(vec4) {x, 0, 0, 0}, (vec4) {0, y, 0, 0}, (vec4) {a, b, c, -1}, (vec4) {0, 0, d, 0}};
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
static vec3 rotate_overload2(quat q, vec3 v) {
    quat r = (quat) {v.x, v.y, v.z, 0};
    return xyz_overload2(mul_overload29(mul_overload29(q, r), conj(q)));
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
    float32 len = sqrtf(((sq_overload2(q.x) + sq_overload2(q.y)) + sq_overload2(q.z)));
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
static quat axis_angle(vec3 axis, float32 angle) {
    return axisangle2quat(axis, angle);
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
        return "Multi_Comment_Start";
        case 39:;
        return "Multi_Comment_End";
        case 40:;
        return "Comma";
        case 41:;
        return "Period";
        case 42:;
        return "Dotdot";
        case 43:;
        return "Semicolon";
        case 44:;
        return "Colon";
        case 45:;
        return "QuestionMark";
        case 46:;
        return "ExclamationMark";
        case 47:;
        return "At";
        case 48:;
        return "Tilde";
        case 49:;
        return "Ampersand";
        case 50:;
        return "Pipe";
        case 51:;
        return "Caret";
        case 52:;
        return "LeftShift";
        case 53:;
        return "RightShift";
        case 54:;
        return "OpenCurl";
        case 55:;
        return "CloseCurl";
        case 56:;
        return "OpenParen";
        case 57:;
        return "CloseParen";
        case 58:;
        return "OpenSquare";
        case 59:;
        return "CloseSquare";
        case 60:;
        return "LessThan";
        case 61:;
        return "GreaterThan";
        case 62:;
        return "LessThanOrEqual";
        case 63:;
        return "GreaterThanOrEqual";
        case 64:;
        return "Equals";
        case 65:;
        return "NotEquals";
        case 66:;
        return "Assign";
        case 67:;
        return "Plus";
        case 68:;
        return "Minus";
        case 69:;
        return "Mul";
        case 70:;
        return "Div";
        case 71:;
        return "Mod";
        case 72:;
        return "PlusPlus";
        case 73:;
        return "MinusMinus";
        case 74:;
        return "PlusAssign";
        case 75:;
        return "MinusAssign";
        case 76:;
        return "MulAssign";
        case 77:;
        return "DivAssign";
        case 78:;
        return "ModAssign";
        case 79:;
        return "BitAndAssign";
        case 80:;
        return "BitOrAssign";
        case 81:;
        return "BitXorAssign";
    }
}
static Pog_Token pick(Pog_Token tok, char next, char* options, Array kinds) {
    tok.kind = ((Pog_Tokenkind*)kinds.data)[0];
    for (int32 it = 1; it < kinds.length; it++) {
        if (next == options[(it - 1)]) {
            tok.kind = ((Pog_Tokenkind*)kinds.data)[it];
            tok.data.str.length = 2;
            return tok;
        }
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
                char ahead = *(cursor + 1);
                if ((ahead == '\n') || (ahead == 0)) break;
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
                    token.data.str.length = 2;
                    return token;
                }
                case '=':;
                {
                    token.kind = 77;
                    token.data.str.length = 2;
                    return token;
                }
            }
            token.kind = 70;
            return token;
        }
        case '*':;
        return pick(token, next, "=/", (Array)(Array) { .length = 3, .data = (Pog_Tokenkind[]){69, 76, 39}});
        case '<':;
        return pick(token, next, "<=", (Array)(Array) { .length = 3, .data = (Pog_Tokenkind[]){60, 52, 62}});
        case '>':;
        return pick(token, next, ">=", (Array)(Array) { .length = 3, .data = (Pog_Tokenkind[]){61, 53, 63}});
        case '+':;
        return pick(token, next, "+=", (Array)(Array) { .length = 3, .data = (Pog_Tokenkind[]){67, 72, 74}});
        case '-':;
        return pick(token, next, "-=", (Array)(Array) { .length = 3, .data = (Pog_Tokenkind[]){68, 73, 75}});
        case '=':;
        return pick(token, next, "=", (Array)(Array) { .length = 2, .data = (Pog_Tokenkind[]){66, 64}});
        case '!':;
        return pick(token, next, "=", (Array)(Array) { .length = 2, .data = (Pog_Tokenkind[]){46, 65}});
        case '%':;
        return pick(token, next, "=", (Array)(Array) { .length = 2, .data = (Pog_Tokenkind[]){71, 78}});
        case '.':;
        return pick(token, next, ".", (Array)(Array) { .length = 2, .data = (Pog_Tokenkind[]){41, 42}});
        case '&':;
        return pick(token, next, "=", (Array)(Array) { .length = 2, .data = (Pog_Tokenkind[]){49, 79}});
        case '|':;
        return pick(token, next, "=", (Array)(Array) { .length = 2, .data = (Pog_Tokenkind[]){50, 80}});
        case '^':;
        return pick(token, next, "=", (Array)(Array) { .length = 2, .data = (Pog_Tokenkind[]){51, 81}});
        case ',':;
        {
            token.kind = 40;
            return token;
        }
        case ';':;
        {
            token.kind = 43;
            return token;
        }
        case ':':;
        {
            token.kind = 44;
            return token;
        }
        case '?':;
        {
            token.kind = 45;
            return token;
        }
        case '@':;
        {
            token.kind = 47;
            return token;
        }
        case '~':;
        {
            token.kind = 48;
            return token;
        }
        case '{':;
        {
            token.kind = 54;
            return token;
        }
        case '}':;
        {
            token.kind = 55;
            return token;
        }
        case '(':;
        {
            token.kind = 56;
            return token;
        }
        case ')':;
        {
            token.kind = 57;
            return token;
        }
        case '[':;
        {
            token.kind = 58;
            return token;
        }
        case ']':;
        {
            token.kind = 59;
            return token;
        }
    }
    if (is_letter(*cursor) || (*cursor == '_')) {
        token.kind = 4;
        while (is_alphanumeric(*cursor) || (*cursor == '_')) cursor++;
        token.data.str.length = (uint32)(cursor - token.data.str.chars);
        if (string_equals_overload3(token.data.str, "enum")) token.kind = 6;
        if (string_equals_overload3(token.data.str, "struct")) token.kind = 5;
        if (string_equals_overload3(token.data.str, "let")) token.kind = 11;
        if (string_equals_overload3(token.data.str, "alloc")) token.kind = 9;
        if (string_equals_overload3(token.data.str, "if")) token.kind = 13;
        if (string_equals_overload3(token.data.str, "include")) token.kind = 12;
        if (string_equals_overload3(token.data.str, "while")) token.kind = 15;
        if (string_equals_overload3(token.data.str, "else")) token.kind = 14;
        if (string_equals_overload3(token.data.str, "false")) token.kind = 22;
        if (string_equals_overload3(token.data.str, "true")) token.kind = 21;
        if (string_equals_overload3(token.data.str, "or")) token.kind = 24;
        if (string_equals_overload3(token.data.str, "and")) token.kind = 23;
        if (string_equals_overload3(token.data.str, "continue")) token.kind = 26;
        if (string_equals_overload3(token.data.str, "null")) token.kind = 25;
        if (string_equals_overload3(token.data.str, "return")) token.kind = 28;
        if (string_equals_overload3(token.data.str, "break")) token.kind = 27;
        if (string_equals_overload3(token.data.str, "as")) token.kind = 30;
        if (string_equals_overload3(token.data.str, "type")) token.kind = 29;
        if (string_equals_overload3(token.data.str, "for")) token.kind = 16;
        if (string_equals_overload3(token.data.str, "const")) token.kind = 31;
        if (string_equals_overload3(token.data.str, "default")) token.kind = 19;
        if (string_equals_overload3(token.data.str, "switch")) token.kind = 17;
        if (string_equals_overload3(token.data.str, "goto")) token.kind = 20;
        if (string_equals_overload3(token.data.str, "case")) token.kind = 18;
        if (string_equals_overload3(token.data.str, "namespace")) token.kind = 8;
        if (string_equals_overload3(token.data.str, "with")) token.kind = 7;
        if (string_equals_overload3(token.data.str, "static")) token.kind = 32;
        if (string_equals_overload3(token.data.str, "sizeof")) token.kind = 10;
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
static Pog_Token* lex(char* file_buffer) {
    Pog_Token* tokens = list_create_overload1(sizeof(Pog_Token));
    char* cursor = file_buffer;
    uint32 row = 0;
    uint32 col = 0;
    bool comment = 0;
    lex_loop:;
    {
        Pog_Token tok = pog_next_token(cursor);
        tok.row = row;
        tok.col = col;
        col += tok.data.str.length;
        switch (tok.kind) {
            default:;
            if (!comment) list_add((void**)(&tokens), &tok);
            break;
            case 0:;
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
            comment = 1;
            break;
            case 39:;
            comment = 0;
            break;
        }
        cursor += tok.data.str.length;
        if (tok.kind != 0) goto lex_loop;
    }
    return tokens;
}
static void print_tokens(Pog_Token* tokens) {
    printf("%s", "\n\n\n");
    for (int32 it = 0; it < list_length((void*)(tokens)); it++) {
        Pog_Token token = tokens[it];
        printf("%d%s%s%s%c%s%.*s%s%llu%s%Lf%s", it, " ", get_str_overload1(token.kind), " (", token.data.character, ") (\"", token.data.str.length, token.data.str.chars, "\") int=", token.data.integer, " decimal=", token.data.decimal, "\n");
    }
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
        return "Expr_Range";
        case 7:;
        return "Expr_Less";
        case 8:;
        return "Expr_Greater";
        case 9:;
        return "Expr_LessEquals";
        case 10:;
        return "Expr_GreaterEquals";
        case 11:;
        return "Expr_Equals";
        case 12:;
        return "Expr_NotEquals";
        case 13:;
        return "Expr_And";
        case 14:;
        return "Expr_Or";
        case 15:;
        return "Expr_Bit_And";
        case 16:;
        return "Expr_Bit_Or";
        case 17:;
        return "Expr_Bit_Xor";
        case 18:;
        return "Expr_Bit_Lshift";
        case 19:;
        return "Expr_Bit_Rshift";
        case 20:;
        return "Expr_PreIncrement";
        case 21:;
        return "Expr_PostIncrement";
        case 22:;
        return "Expr_PreDecrement";
        case 23:;
        return "Expr_PostDecrement";
        case 24:;
        return "Expr_Not";
        case 25:;
        return "Expr_Bit_Not";
        case 26:;
        return "Expr_AddressOf";
        case 27:;
        return "Expr_ValueOf";
        case 28:;
        return "Expr_Negate";
        case 29:;
        return "Expr_Integer";
        case 30:;
        return "Expr_Decimal";
        case 31:;
        return "Expr_Char";
        case 32:;
        return "Expr_String";
        case 33:;
        return "Expr_True";
        case 34:;
        return "Expr_False";
        case 35:;
        return "Expr_Null";
        case 36:;
        return "Expr_Variable";
        case 37:;
        return "Expr_Alloc";
        case 38:;
        return "Expr_Ternary";
        case 39:;
        return "Expr_ProcCall";
        case 40:;
        return "Expr_Deref";
        case 41:;
        return "Expr_Indexing";
        case 42:;
        return "Expr_Cast";
        case 43:;
        return "Expr_Sizeof";
        case 44:;
        return "Expr_Parenthesized";
        case 45:;
        return "Expr_Compound";
        case 46:;
        return "Stmt_Declaration";
        case 47:;
        return "Stmt_Constant";
        case 48:;
        return "Stmt_Typedef";
        case 49:;
        return "Stmt_Procedure";
        case 50:;
        return "Stmt_Argument";
        case 51:;
        return "Stmt_Struct";
        case 52:;
        return "Stmt_Enum";
        case 53:;
        return "Stmt_EnumEntry";
        case 54:;
        return "Stmt_Assignment";
        case 55:;
        return "Stmt_Scope";
        case 56:;
        return "Stmt_If";
        case 57:;
        return "Stmt_While";
        case 58:;
        return "Stmt_For";
        case 59:;
        return "Stmt_Switch";
        case 60:;
        return "Stmt_Continue";
        case 61:;
        return "Stmt_Break";
        case 62:;
        return "Stmt_Return";
        case 63:;
        return "Stmt_Goto";
        case 64:;
        return "Stmt_Label";
        case 65:;
        return "Stmt_Case";
        case 66:;
        return "Stmt_Default";
        case 67:;
        return "Stmt_Include";
        case 68:;
        return "Type_MustInfer";
        case 69:;
        return "Type_Basic";
        case 70:;
        return "Type_Procedure";
        case 71:;
        return "Type_Array";
        case 72:;
        return "Type_Fixed_Array";
        case 73:;
        return "Type_Dynamic_Array";
    }
}
static Pog_Codebase make_codebase() {
    Pog_Codebase cb = (Pog_Codebase) {0};
    cb.units = list_create_overload1(sizeof(Pog_Unit*));
    cb.types = list_create_overload1(sizeof(Pog_Node*));
    cb.procs = list_create_overload1(sizeof(Pog_Node*));
    return cb;
}
static void each_node(Pog_Node* node, bool (*top_down)(Pog_Node*, void*), void (*bottom_up)(Pog_Node*, void*), void* user_ptr) {
    if (node == 0) return;
    if (top_down) {
        if (!top_down(node, user_ptr)) return;
    }
    each_node(node->node1, top_down, bottom_up, user_ptr);
    each_node(node->node2, top_down, bottom_up, user_ptr);
    each_node(node->node3, top_down, bottom_up, user_ptr);
    each_node(node->node4, top_down, bottom_up, user_ptr);
    if (node->sub_nodes) {
        for (int32 it = 0; it < list_length((void*)(node->sub_nodes)); it++) each_node(node->sub_nodes, top_down, bottom_up, user_ptr);
    }
    if (bottom_up) bottom_up(node, user_ptr);
}
static void foreach_node(Pog_Unit* unit, bool (*top_down)(Pog_Node*, void*), void (*bottom_up)(Pog_Node*, void*), void* user_ptr) {
    /* local procedure */;
    for (int32 it = 0; it < list_length((void*)(unit->top_level_nodes)); it++) {
        Pog_Node* node = unit->top_level_nodes[it];
        each_node(node, top_down, bottom_up, user_ptr);
    }
}
static bool inspect_node(Pog_Node* node, Pog_Codebase* cb) {
    return 1;
}
static void add_unit(Pog_Codebase* cb, Pog_Unit* unit) {
    list_add((void**)(&cb->units), &unit);
    /* local procedure */;
    for (int32 it = 0; it < list_length((void*)(unit->top_level_nodes)); it++) {
        Pog_Node* node = unit->top_level_nodes[it];
        switch (node->kind) {
            case 48:;
            case 51:;
            case 52:;
            list_add((void**)(&cb->types), &node);
            break;
            case 49:;
            list_add((void**)(&cb->procs), &node);
            break;
            default:;
            break;
        }
    }
}
static Pog_Token peek_overload1(Pog_Parser* pp) {
    return peek_overload2(pp, 0);
}
static Pog_Token peek_overload2(Pog_Parser* pp, int32 offset) {
    int32 index = (pp->token_index + offset);
    if (list_length((void*)(pp->tokens)) <= index) {
        Pog_Token eof = (Pog_Token) {0};
        eof.kind = 0;
        return eof;
    }
    Pog_Token tok = pp->tokens[index];
    return tok;
}
static bool token_overload1(Pog_Parser* pp, Pog_Tokenkind kind) {
    if (list_length((void*)(pp->tokens)) <= pp->token_index) return 0;
    if (pp->tokens[pp->token_index].kind != kind) return 0;
    pp->token_index++;
    return 1;
}
static bool token_until(Pog_Parser* pp, Pog_Tokenkind kind) {
    if (peek_overload1(pp).kind == 0) return 0;
    if (token_overload1(pp, kind)) return 0;
    return 1;
}
static bool token_overload2(Pog_Parser* pp, Array kinds) {
    for (int32 it = 0; it < kinds.length; it++) if (token_overload1(pp, ((Pog_Tokenkind*)kinds.data)[it])) return 1;
    return 0;
}
static Pog_Token assert_token(Pog_Parser* pp, Pog_Tokenkind kind) {
    Pog_Token tok = peek_overload1(pp);
    if (token_overload1(pp, kind)) {
        return tok;
    }
    return tok;
}
static void assert_semicolon(Pog_Parser* pp) {
    assert_token(pp, 43);
}
static Pog_Unit* parse(char* file_buffer) {
    Pog_Parser pp = (Pog_Parser) {0};
    pp.tokens = lex(file_buffer);
    pp.arena = arena_create();
    pp.unit = arena_alloc(pp.arena, sizeof(Pog_Unit));
    pp.unit->arena = pp.arena;
    pp.unit->top_level_nodes = list_create_overload1(sizeof(Pog_Node*));
    pp.unit->errors = list_create_overload1(sizeof(Pog_Error));
    uint32 len = list_length((void*)(pp.tokens));
    while (pp.token_index < len) {
        Pog_Node* node = parse_stmt(&pp);
        list_add((void**)(&pp.unit->top_level_nodes), &node);
    }
    list_delete((void*)(pp.tokens));
    return pp.unit;
}
static void delete_node(Pog_Node* node) {
    if (node == 0) return;
    delete_node(node->node1);
    delete_node(node->node2);
    delete_node(node->node3);
    delete_node(node->node4);
    if (node->sub_nodes) {
        for (int32 it = 0; it < list_length((void*)(node->sub_nodes)); it++) delete_node(node->sub_nodes[it]);
        list_delete((void*)(node->sub_nodes));
    }
}
static void delete_unit(Pog_Unit* unit) {
    /* local procedure */;
    for (int32 it = 0; it < list_length((void*)(unit->top_level_nodes)); it++) {
        Pog_Node* node = unit->top_level_nodes[it];
        delete_node(node);
    }
    list_delete((void*)(unit->top_level_nodes));
    list_delete((void*)(unit->errors));
    arena_release(unit->arena);
}
static Pog_Node* new_node(Pog_Parser* pp, Pog_Nodekind kind) {
    Pog_Node* node = arena_alloc(pp->arena, sizeof(Pog_Node));
    *node = (Pog_Node) {0};
    node->kind = kind;
    node->token = peek_overload1(pp);
    pp->token_index++;
    return node;
}
static Pog_Node* decl(Pog_Parser* pp, Pog_Node* node) {
    if (token_overload1(pp, 66)) node->node2 = parse_expr(pp);
    while (token_overload1(pp, 40)) {
        if (!node->sub_nodes) node->sub_nodes = list_create_overload1(sizeof(Pog_Node*));
        Pog_Node* next = new_node(pp, 46);
        next->node1 = node->node1;
        if (token_overload1(pp, 66)) next->node2 = parse_expr(pp);
        list_add((void**)(&node->sub_nodes), &next);
    }
    assert_semicolon(pp);
    return node;
}
static Pog_Node* parse_stmt(Pog_Parser* pp) {
    switch (peek_overload1(pp).kind) {
        case 54:;
        {
            Pog_Node* node = new_node(pp, 55);
            node->sub_nodes = list_create_overload1(sizeof(Pog_Node*));
            while (1) {
                if (peek_overload1(pp).kind == 0) break;
                if (token_overload1(pp, 55)) break;
                Pog_Node* sub = parse_stmt(pp);
                list_add((void**)(&node->sub_nodes), &sub);
            }
            return node;
        }
        case 15:;
        {
            Pog_Node* node = new_node(pp, 57);
            node->node1 = parse_expr(pp);
            if (!token_overload1(pp, 43)) node->node2 = parse_stmt(pp);
            return node;
        }
        case 13:;
        {
            Pog_Node* node = new_node(pp, 56);
            node->node1 = parse_expr(pp);
            if (!token_overload1(pp, 43)) node->node2 = parse_stmt(pp);
            if (token_overload1(pp, 14)) node->node3 = parse_stmt(pp);
            return node;
        }
        case 16:;
        {
            Pog_Node* node = new_node(pp, 58);
            bool close = token_overload1(pp, 56);
            node->node1 = parse_stmt(pp);
            if (node->node1->kind == 64) {
                node->node2 = parse_expr(pp);
            } else {
                if (token_overload1(pp, 40)) {
                    node->node2 = parse_expr(pp);
                    assert_token(pp, 40);
                    node->node3 = parse_stmt(pp);
                } else if (token_overload1(pp, 44)) {
                    node->node2 = parse_expr(pp);
                }
            }
            if (close) assert_token(pp, 57);
            if (!token_overload1(pp, 43)) node->node4 = parse_stmt(pp);
            return node;
        }
        case 17:;
        {
            Pog_Node* node = new_node(pp, 59);
            node->node1 = parse_expr(pp);
            node->node2 = parse_stmt(pp);
            return node;
        }
        case 18:;
        {
            Pog_Node* node = new_node(pp, 65);
            node->node1 = parse_expr(pp);
            assert_token(pp, 44);
            return node;
        }
        case 19:;
        {
            Pog_Node* node = new_node(pp, 66);
            assert_token(pp, 44);
            return node;
        }
        case 26:;
        {
            Pog_Node* node = new_node(pp, 60);
            assert_semicolon(pp);
            return node;
        }
        case 27:;
        {
            Pog_Node* node = new_node(pp, 61);
            assert_semicolon(pp);
            return node;
        }
        case 28:;
        {
            Pog_Node* node = new_node(pp, 62);
            if (peek_overload1(pp).kind == 43) pp->token_index++; else {
                node->node1 = parse_expr(pp);
                assert_semicolon(pp);
            }
            return node;
        }
        case 20:;
        {
            Pog_Node* node = new_node(pp, 63);
            node->name = assert_token(pp, 4);
            assert_semicolon(pp);
            return node;
        }
        case 5:;
        {
            Pog_Node* node = new_node(pp, 51);
            node->name = assert_token(pp, 4);
            node->sub_nodes = list_create_overload1(sizeof(Pog_Node*));
            assert_token(pp, 54);
            while (token_until(pp, 55)) {
                Pog_Node* sub = parse_stmt(pp);
                list_add((void**)(&node->sub_nodes), &sub);
            }
            return node;
        }
        case 6:;
        {
            Pog_Node* node = new_node(pp, 52);
            node->name = assert_token(pp, 4);
            node->sub_nodes = list_create_overload1(sizeof(Pog_Node*));
            assert_token(pp, 54);
            while (token_until(pp, 55)) {
                Pog_Node* entry = new_node(pp, 53);
                if (token_overload1(pp, 66)) entry->node1 = parse_expr(pp);
                assert_semicolon(pp);
                list_add((void**)(&node->sub_nodes), &entry);
            }
            return node;
        }
        case 29:;
        {
            Pog_Node* node = new_node(pp, 48);
            node->name = assert_token(pp, 4);
            if (token_overload1(pp, 66)) node->node1 = parse_type(pp);
            assert_semicolon(pp);
            return node;
        }
        case 31:;
        {
            Pog_Node* node = new_node(pp, 47);
            node->name = assert_token(pp, 4);
            assert_token(pp, 66);
            node->node1 = parse_expr(pp);
            assert_semicolon(pp);
            return node;
        }
        /* local procedure */;
        case 32:;
        {
            Pog_Node* node = new_node(pp, 46);
            node->node1 = parse_type(pp);
            node->name = assert_token(pp, 4);
            return decl(pp, node);
        }
        case 12:;
        {
            Pog_Node* node = new_node(pp, 67);
            node->name = assert_token(pp, 35);
            assert_semicolon(pp);
            return node;
        }
        case 11:;
        case 4:;
        {
            if (peek_overload2(pp, 1).kind == 44) {
                Pog_Node* node = new_node(pp, 64);
                pp->token_index++;
                return node;
            }
            uint32 post_type = peek_type(pp);
            if (post_type && (pp->tokens[post_type].kind == 4)) {
                Pog_Node* node = new_node(pp, 46);
                pp->token_index--;
                node->node1 = parse_type(pp);
                node->name = assert_token(pp, 4);
                if (!token_overload1(pp, 56)) {
                    node = decl(pp, node);
                } else {
                    node->kind = 49;
                    if (!token_overload1(pp, 57)) {
                        node->sub_nodes = list_create_overload1(sizeof(Pog_Node*));
                        Pog_Node* prev_arg = 0;
                        arg_loop:;
                        {
                            Pog_Node* arg = new_node(pp, 50);
                            pp->token_index--;
                            Pog_Tokenkind t = peek_overload2(pp, 1).kind;
                            if (prev_arg && ((t == 40) || (t == 57))) {
                                arg->node1 = prev_arg->node1;
                            } else {
                                arg->node1 = parse_type(pp);
                            }
                            arg->name = assert_token(pp, 4);
                            prev_arg = arg;
                            list_add((void**)(&node->sub_nodes), &arg);
                            if (token_overload1(pp, 40)) goto arg_loop;
                        }
                        assert_token(pp, 57);
                    }
                    if (token_overload1(pp, 30)) {
                        pp->token_index++;
                    }
                    if (token_overload1(pp, 43)) return node;
                    node->node2 = parse_stmt(pp);
                }
                return node;
            }
            break;
        }
        case 1:;
        {
            Pog_Node* node = new_node(pp, 0);
            node->name.data.str = make_string_overload1("unrecognised token");
            return node;
        }
        default:;
        break;
    }
    Pog_Node* expr = parse_expr(pp);
    if (expr->kind == 0) return expr;
    Array ass_kinds = (Array) { .length = 9, .data = (Pog_Tokenkind[]){66, 74, 75, 76, 77, 78, 79, 80, 81}};
    if (token_overload2(pp, ass_kinds)) {
        pp->token_index--;
        Pog_Node* ass = new_node(pp, 54);
        ass->node1 = expr;
        ass->node2 = parse_expr(pp);
        expr = ass;
    }
    assert_semicolon(pp);
    return expr;
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
    node->token = peek_overload1(pp);
    pp->token_index++;
    if (node->token.kind == 11) {
        node->kind = 68;
        return node;
    }
    if (node->token.kind != 4) return node;
    node->kind = 69;
    while (token_overload1(pp, 69)) node->ptr_degree++;
    while (1) {
        if (token_overload1(pp, 58)) {
            Pog_Node* array_node = arena_alloc(pp->arena, sizeof(Pog_Node));
            *array_node = (Pog_Node) {0};
            array_node->kind = 0;
            array_node->token = peek_overload1(pp);
            array_node->node1 = node;
            if (token_overload1(pp, 42)) {
                array_node->kind = 73;
                assert_token(pp, 59);
            } else if (token_overload1(pp, 59)) {
                array_node->kind = 71;
            } else {
                array_node->kind = 72;
                array_node->node2 = parse_expr(pp);
                assert_token(pp, 59);
            }
            node = array_node;
        } else if (token_overload1(pp, 56)) {
            Pog_Node* proc_node = arena_alloc(pp->arena, sizeof(Pog_Node));
            *proc_node = (Pog_Node) {0};
            proc_node->kind = 70;
            proc_node->token = peek_overload1(pp);
            proc_node->node1 = node;
            proc_node->sub_nodes = list_create_overload1(sizeof(Pog_Node*));
            if (!token_overload1(pp, 57)) {
                arg_loop:;
                {
                    Pog_Node* arg = parse_type(pp);
                    if (peek_overload1(pp).kind == 4) arg->name = assert_token(pp, 4);
                    list_add((void**)(&proc_node->sub_nodes), &arg);
                    if (token_overload1(pp, 40)) goto arg_loop;
                }
                assert_token(pp, 57);
            }
            node = proc_node;
        } else {
            break;
        }
        while (token_overload1(pp, 69)) node->ptr_degree++;
    }
    return node;
}
static Pog_Node* parse_expr(Pog_Parser* pp) {
    Pog_Node* node = parse_expr_binary(pp);
    if (peek_overload1(pp).kind == 45) {
        Pog_Node* ter = new_node(pp, 38);
        ter->node1 = node;
        ter->node2 = parse_expr(pp);
        assert_token(pp, 44);
        ter->node3 = parse_expr(pp);
        node = ter;
    }
    return node;
}
static Pog_Node* parse_expr_binary(Pog_Parser* pp) {
    return parse_expr_bin(pp, 0);
}
static Pog_Nodekind test_op_group(Pog_Parser* pp, uint32 op_index) {
    Array ops = ((Array*)pog_all_ops.data)[op_index];
    Pog_Tokenkind tok = peek_overload1(pp).kind;
    for (int32 it = 0; it < ops.length; it++) {
        if (((Pog_Binary_Op*)ops.data)[it].token_kind == tok) return ((Pog_Binary_Op*)ops.data)[it].node_kind;
    }
    return 0;
}
static Pog_Node* parse_expr_bin(Pog_Parser* pp, uint32 op_index) {
    if (op_index >= pog_all_ops.length) return parse_expr_unary(pp);
    Pog_Node* node = parse_expr_bin(pp, (op_index + 1));
    while (1) {
        Pog_Nodekind node_kind = test_op_group(pp, op_index);
        if (node_kind == 0) break;
        Pog_Node* bin = new_node(pp, node_kind);
        bin->node1 = node;
        bin->node2 = parse_expr_bin(pp, (op_index + 1));
        node = bin;
    }
    return node;
}
static Pog_Node* parse_expr_unary(Pog_Parser* pp) {
    Pog_Node* unary = 0;
    switch (peek_overload1(pp).kind) {
        case 69:;
        unary = new_node(pp, 26);
        break;
        case 47:;
        unary = new_node(pp, 27);
        break;
        case 46:;
        unary = new_node(pp, 24);
        break;
        case 72:;
        unary = new_node(pp, 20);
        break;
        case 73:;
        unary = new_node(pp, 22);
        break;
        case 68:;
        unary = new_node(pp, 28);
        break;
        case 48:;
        unary = new_node(pp, 25);
        break;
        default:;
        break;
    }
    Pog_Node* node = parse_expr_leaf(pp);
    if (unary) {
        unary->node1 = node;
        node = unary;
    }
    switch (peek_overload1(pp).kind) {
        case 72:;
        unary = new_node(pp, 21);
        break;
        case 73:;
        unary = new_node(pp, 23);
        break;
        default:;
        unary = 0;
        break;
    }
    if (unary) {
        unary->node1 = node;
        node = unary;
    }
    if (peek_overload1(pp).kind == 30) {
        Pog_Node* cast = new_node(pp, 42);
        cast->node1 = node;
        cast->node2 = parse_type(pp);
        node = cast;
    }
    return node;
}
static Pog_Node* leaf_mod(Pog_Parser* pp, Pog_Node* node) {
    switch (peek_overload1(pp).kind) {
        case 41:;
        {
            Pog_Node* deref = new_node(pp, 40);
            deref->node1 = node;
            deref->name = assert_token(pp, 4);
            return deref;
        }
        case 56:;
        {
            Pog_Node* call = new_node(pp, 39);
            call->node1 = node;
            if (token_overload1(pp, 57)) return call;
            call->sub_nodes = list_create_overload1(sizeof(Pog_Node*));
            arg_loop:;
            {
                Pog_Node* sub = parse_expr(pp);
                list_add((void**)(&call->sub_nodes), &sub);
                if (token_overload1(pp, 40)) goto arg_loop;
            }
            assert_token(pp, 57);
            return call;
        }
        case 58:;
        {
            Pog_Node* indexing = new_node(pp, 41);
            indexing->node1 = node;
            indexing->node2 = parse_expr(pp);
            assert_token(pp, 59);
            return indexing;
        }
        default:;
        return 0;
    }
}
static Pog_Node* parse_expr_leaf(Pog_Parser* pp) {
    Pog_Node* node = new_node(pp, 0);
    switch (node->token.kind) {
        case 4:;
        {
            node->kind = 36;
        }
        break;
        case 9:;
        {
            node->kind = 37;
            node->node1 = parse_type(pp);
        }
        break;
        case 10:;
        {
            node->kind = 43;
            node->node1 = parse_type(pp);
        }
        break;
        case 56:;
        {
            node->kind = 44;
            node->node1 = parse_expr(pp);
            assert_token(pp, 57);
        }
        break;
        case 41:;
        {
            node->kind = 40;
            node->name = assert_token(pp, 4);
        }
        break;
        case 54:;
        {
            node->kind = 45;
            node->sub_nodes = list_create_overload1(sizeof(Pog_Node*));
            bool comma = 1;
            while (token_until(pp, 55) && comma) {
                if (peek_overload2(pp, 1).kind == 66) {
                    assert_token(pp, 4);
                    pp->token_index++;
                }
                Pog_Node* sub = parse_expr(pp);
                list_add((void**)(&node->sub_nodes), &sub);
                comma = token_overload1(pp, 40);
            }
        }
        break;
        case 33:;
        {
            node->kind = 29;
        }
        break;
        case 34:;
        {
            node->kind = 30;
        }
        break;
        case 35:;
        {
            node->kind = 32;
        }
        break;
        case 36:;
        {
            node->kind = 31;
        }
        break;
        case 21:;
        {
            node->kind = 33;
        }
        break;
        case 22:;
        {
            node->kind = 34;
        }
        break;
        case 25:;
        {
            node->kind = 35;
        }
        break;
        default:;
        return node;
    }
    /* local procedure */;
    while (1) {
        Pog_Node* mod = leaf_mod(pp, node);
        if (mod) node = mod; else break;
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
    for (int32 it = 0; it < list_length((void*)(node->sub_nodes)); it++) {
        print_node((tabs + 1), sb, node->sub_nodes[it]);
    }
}
static void print_ast(StringBuilder* sb, Pog_Unit* unit) {
    for (int32 it = 0; it < list_length((void*)(unit->top_level_nodes)); it++) {
        Pog_Node* node = unit->top_level_nodes[it];
        print_node(0, sb, node);
    }
}
static void read_exe(char* filename) {
    Array bytes = read_binary_file(filename);
    byte* ptr = bytes.data;
    uint32 file_addr_of_new_exe_header = *((uint32*)&((byte*)bytes.data)[60]);
    char* magicnr_PE = (ptr + file_addr_of_new_exe_header);
    printf("%s%c%c%c%c%s", "Magic Nr.: ", magicnr_PE[0], magicnr_PE[1], magicnr_PE[2], magicnr_PE[3], "\n");
    COFF_File_Header* coff_header = ((ptr + file_addr_of_new_exe_header) + 4);
    printf("%s", "coff_header:\n");
    printf("%s%hu%s", "    Machine             : ", coff_header->Machine, "\n");
    printf("%s%hu%s", "    NumberOfSections    : ", coff_header->NumberOfSections, "\n");
    printf("%s%u%s", "    TimeDateStamp       : ", coff_header->TimeDateStamp, "\n");
    printf("%s%u%s", "    PointerToSymbolTable: ", coff_header->PointerToSymbolTable, "\n");
    printf("%s%u%s", "    NumberOfSymbols     : ", coff_header->NumberOfSymbols, "\n");
    printf("%s%hu%s", "    SizeOfOptionalHeader: ", coff_header->SizeOfOptionalHeader, "\n");
    printf("%s%hu%s", "    Characteristics     : ", coff_header->Characteristics, "\n");
}
static void __static_init() {
    temps = alloc_temp_builders(8);
}
int main(int argc, char** argv) {
    __static_init();
    __main();
    return 0;
}