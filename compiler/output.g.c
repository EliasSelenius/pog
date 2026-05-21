
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
typedef struct Image_Nt_Headers Image_Nt_Headers;
typedef struct Image_Optional_Header_64 Image_Optional_Header_64;
typedef struct Image_Data_Directory Image_Data_Directory;
typedef struct Image_Section_Header Image_Section_Header;
typedef struct Image_Import_Descriptor Image_Import_Descriptor;
typedef struct PE32 PE32;
typedef struct x64_Instruction x64_Instruction;
typedef struct x64_Operand x64_Operand;
typedef struct x64_Opcode_Map_Entry x64_Opcode_Map_Entry;
typedef struct ModRM_SIB_disp ModRM_SIB_disp;
typedef struct x64_BasicBlock x64_BasicBlock;
typedef struct x64_Decoder x64_Decoder;
typedef struct x64_Procedure x64_Procedure;

// Enums
typedef uint32 Typekind;
typedef uint32 Pog_Tokenkind;
typedef uint32 Pog_Nodekind;
typedef uint32 Image_File_Machine;
typedef uint32 x64_Operation;
typedef uint32 x64_Register;
typedef uint32 x64_Operand_Kind;

// Type aliases
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
struct Image_Data_Directory { // deps = 0
    uint32 VirtualAddress;
    uint32 Size;
};
struct Image_Section_Header { // deps = 0
    char Name[8];
    uint32 PhysicalAddress_VirtualSize;
    uint32 VirtualAddress;
    uint32 SizeOfRawData;
    uint32 PointerToRawData;
    uint32 PointerToRelocations;
    uint32 PointerToLinenumbers;
    uint16 NumberOfRelocations;
    uint16 NumberOfLinenumbers;
    uint32 Characteristics;
};
struct Image_Import_Descriptor { // deps = 0
    uint32 OriginalFirstThunk;
    uint32 TimeDateStamp;
    uint32 ForwarderChain;
    uint32 Name;
    uint32 FirstThunk;
};
struct PE32 { // deps = 0
    byte* ptr;
    Image_Nt_Headers* nt_headers;
    Array section_headers;
};
struct x64_Operand { // deps = 0
    x64_Operand_Kind kind;
    x64_Register reg;
    x64_Register index;
    uint32 scale;
    int64 imm_value;
    uint32 opsize;
};
struct x64_Opcode_Map_Entry { // deps = 0
    x64_Operation operation;
    byte operands[4];
    uint32 grp;
};
struct ModRM_SIB_disp { // deps = 0
    int64 disp;
    byte reg;
    byte mem;
    byte idx;
    bool mem_is_register;
    uint32 scale;
    bool rip_relative;
};
struct x64_BasicBlock { // deps = 0
    byte* start;
    x64_BasicBlock* bb_jump;
    x64_BasicBlock* bb_next;
};
struct x64_Decoder { // deps = 0
    byte** proc_addrs;
    x64_BasicBlock* bb_start;
};
struct x64_Procedure { // deps = 0
    x64_BasicBlock* start_block;
    x64_BasicBlock** blocks;
    byte** call_addresses;
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
struct Image_Optional_Header_64 { // deps = 1
    uint16 Magic;
    uint8 MajorLinkerVersion;
    uint8 MinorLinkerVersion;
    uint32 SizeOfCode;
    uint32 SizeOfInitializedData;
    uint32 SizeOfUninitializedData;
    uint32 AddressOfEntryPoint;
    uint32 BaseOfCode;
    uint64 ImageBase;
    uint32 SectionAlignment;
    uint32 FileAlignment;
    uint16 MajorOperatingSystemVersion;
    uint16 MinorOperatingSystemVersion;
    uint16 MajorImageVersion;
    uint16 MinorImageVersion;
    uint16 MajorSubsystemVersion;
    uint16 MinorSubsystemVersion;
    uint32 Win32VersionValue;
    uint32 SizeOfImage;
    uint32 SizeOfHeaders;
    uint32 CheckSum;
    uint16 Subsystem;
    uint16 DllCharacteristics;
    uint64 SizeOfStackReserve;
    uint64 SizeOfStackCommit;
    uint64 SizeOfHeapReserve;
    uint64 SizeOfHeapCommit;
    uint32 LoaderFlags;
    uint32 NumberOfRvaAndSizes;
    Image_Data_Directory DataDirectory[16];
};
struct x64_Instruction { // deps = 1
    x64_Operation operation;
    x64_Operand operands[4];
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
struct Image_Nt_Headers { // deps = 3
    uint32 signature;
    COFF_File_Header file_header;
    Image_Optional_Header_64 optional_header;
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
            {.type_info = (rtti_types+64), .name = "bInheritHandle", .offset = 16},
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
            {.type_info = (rtti_types+56), .name = "kind", .offset = 28},
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
            {.type_info = (rtti_types+57), .name = "kind", .offset = 0},
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
            {.type_info = (rtti_types+58), .name = "kind", .offset = 0},
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
            {.type_info = (rtti_types+57), .name = "token_kind", .offset = 0},
            {.type_info = (rtti_types+58), .name = "node_kind", .offset = 4},
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
        .name = "Image_Nt_Headers",
        .inner_type = 0,
        .bytesize = 136,
        .alignment = 8,
        .kind = 16,
        .num_ptr = 0,
        .fields = (Array) { .length = 3, .data = (StructField[]){
            {.type_info = (rtti_types+6), .name = "signature", .offset = 0},
            {.type_info = (rtti_types+42), .name = "file_header", .offset = 4},
            {.type_info = (rtti_types+44), .name = "optional_header", .offset = 24},
        }},
    },
    {
        .name = "Image_Optional_Header_64",
        .inner_type = 0,
        .bytesize = 112,
        .alignment = 8,
        .kind = 16,
        .num_ptr = 0,
        .fields = (Array) { .length = 30, .data = (StructField[]){
            {.type_info = (rtti_types+5), .name = "Magic", .offset = 0},
            {.type_info = (rtti_types+4), .name = "MajorLinkerVersion", .offset = 2},
            {.type_info = (rtti_types+4), .name = "MinorLinkerVersion", .offset = 3},
            {.type_info = (rtti_types+6), .name = "SizeOfCode", .offset = 4},
            {.type_info = (rtti_types+6), .name = "SizeOfInitializedData", .offset = 8},
            {.type_info = (rtti_types+6), .name = "SizeOfUninitializedData", .offset = 12},
            {.type_info = (rtti_types+6), .name = "AddressOfEntryPoint", .offset = 16},
            {.type_info = (rtti_types+6), .name = "BaseOfCode", .offset = 20},
            {.type_info = (rtti_types+7), .name = "ImageBase", .offset = 24},
            {.type_info = (rtti_types+6), .name = "SectionAlignment", .offset = 32},
            {.type_info = (rtti_types+6), .name = "FileAlignment", .offset = 36},
            {.type_info = (rtti_types+5), .name = "MajorOperatingSystemVersion", .offset = 40},
            {.type_info = (rtti_types+5), .name = "MinorOperatingSystemVersion", .offset = 42},
            {.type_info = (rtti_types+5), .name = "MajorImageVersion", .offset = 44},
            {.type_info = (rtti_types+5), .name = "MinorImageVersion", .offset = 46},
            {.type_info = (rtti_types+5), .name = "MajorSubsystemVersion", .offset = 48},
            {.type_info = (rtti_types+5), .name = "MinorSubsystemVersion", .offset = 50},
            {.type_info = (rtti_types+6), .name = "Win32VersionValue", .offset = 52},
            {.type_info = (rtti_types+6), .name = "SizeOfImage", .offset = 56},
            {.type_info = (rtti_types+6), .name = "SizeOfHeaders", .offset = 60},
            {.type_info = (rtti_types+6), .name = "CheckSum", .offset = 64},
            {.type_info = (rtti_types+5), .name = "Subsystem", .offset = 68},
            {.type_info = (rtti_types+5), .name = "DllCharacteristics", .offset = 70},
            {.type_info = (rtti_types+7), .name = "SizeOfStackReserve", .offset = 72},
            {.type_info = (rtti_types+7), .name = "SizeOfStackCommit", .offset = 80},
            {.type_info = (rtti_types+7), .name = "SizeOfHeapReserve", .offset = 88},
            {.type_info = (rtti_types+7), .name = "SizeOfHeapCommit", .offset = 96},
            {.type_info = (rtti_types+6), .name = "LoaderFlags", .offset = 104},
            {.type_info = (rtti_types+6), .name = "NumberOfRvaAndSizes", .offset = 108},
            {.type_info = (rtti_types+0), .name = "DataDirectory", .offset = 112},
        }},
    },
    {
        .name = "Image_Data_Directory",
        .inner_type = 0,
        .bytesize = 8,
        .alignment = 4,
        .kind = 16,
        .num_ptr = 0,
        .fields = (Array) { .length = 2, .data = (StructField[]){
            {.type_info = (rtti_types+6), .name = "VirtualAddress", .offset = 0},
            {.type_info = (rtti_types+6), .name = "Size", .offset = 4},
        }},
    },
    {
        .name = "Image_Section_Header",
        .inner_type = 0,
        .bytesize = 32,
        .alignment = 4,
        .kind = 16,
        .num_ptr = 0,
        .fields = (Array) { .length = 10, .data = (StructField[]){
            {.type_info = (rtti_types+0), .name = "Name", .offset = 0},
            {.type_info = (rtti_types+6), .name = "PhysicalAddress_VirtualSize", .offset = 0},
            {.type_info = (rtti_types+6), .name = "VirtualAddress", .offset = 4},
            {.type_info = (rtti_types+6), .name = "SizeOfRawData", .offset = 8},
            {.type_info = (rtti_types+6), .name = "PointerToRawData", .offset = 12},
            {.type_info = (rtti_types+6), .name = "PointerToRelocations", .offset = 16},
            {.type_info = (rtti_types+6), .name = "PointerToLinenumbers", .offset = 20},
            {.type_info = (rtti_types+5), .name = "NumberOfRelocations", .offset = 24},
            {.type_info = (rtti_types+5), .name = "NumberOfLinenumbers", .offset = 26},
            {.type_info = (rtti_types+6), .name = "Characteristics", .offset = 28},
        }},
    },
    {
        .name = "Image_Import_Descriptor",
        .inner_type = 0,
        .bytesize = 20,
        .alignment = 4,
        .kind = 16,
        .num_ptr = 0,
        .fields = (Array) { .length = 5, .data = (StructField[]){
            {.type_info = (rtti_types+6), .name = "OriginalFirstThunk", .offset = 0},
            {.type_info = (rtti_types+6), .name = "TimeDateStamp", .offset = 4},
            {.type_info = (rtti_types+6), .name = "ForwarderChain", .offset = 8},
            {.type_info = (rtti_types+6), .name = "Name", .offset = 12},
            {.type_info = (rtti_types+6), .name = "FirstThunk", .offset = 16},
        }},
    },
    {
        .name = "PE32",
        .inner_type = 0,
        .bytesize = 28,
        .alignment = 8,
        .kind = 16,
        .num_ptr = 0,
        .fields = (Array) { .length = 3, .data = (StructField[]){
            {.type_info = (rtti_types+0), .name = "ptr", .offset = 0},
            {.type_info = (rtti_types+0), .name = "nt_headers", .offset = 8},
            {.type_info = (rtti_types+0), .name = "section_headers", .offset = 16},
        }},
    },
    {
        .name = "x64_Instruction",
        .inner_type = 0,
        .bytesize = 8,
        .alignment = 8,
        .kind = 16,
        .num_ptr = 0,
        .fields = (Array) { .length = 2, .data = (StructField[]){
            {.type_info = (rtti_types+60), .name = "operation", .offset = 0},
            {.type_info = (rtti_types+0), .name = "operands", .offset = 8},
        }},
    },
    {
        .name = "x64_Operand",
        .inner_type = 0,
        .bytesize = 28,
        .alignment = 8,
        .kind = 16,
        .num_ptr = 0,
        .fields = (Array) { .length = 6, .data = (StructField[]){
            {.type_info = (rtti_types+62), .name = "kind", .offset = 0},
            {.type_info = (rtti_types+61), .name = "reg", .offset = 4},
            {.type_info = (rtti_types+61), .name = "index", .offset = 8},
            {.type_info = (rtti_types+6), .name = "scale", .offset = 12},
            {.type_info = (rtti_types+3), .name = "imm_value", .offset = 16},
            {.type_info = (rtti_types+6), .name = "opsize", .offset = 24},
        }},
    },
    {
        .name = "x64_Opcode_Map_Entry",
        .inner_type = 0,
        .bytesize = 8,
        .alignment = 4,
        .kind = 16,
        .num_ptr = 0,
        .fields = (Array) { .length = 3, .data = (StructField[]){
            {.type_info = (rtti_types+60), .name = "operation", .offset = 0},
            {.type_info = (rtti_types+0), .name = "operands", .offset = 4},
            {.type_info = (rtti_types+6), .name = "grp", .offset = 4},
        }},
    },
    {
        .name = "ModRM_SIB_disp",
        .inner_type = 0,
        .bytesize = 17,
        .alignment = 8,
        .kind = 16,
        .num_ptr = 0,
        .fields = (Array) { .length = 7, .data = (StructField[]){
            {.type_info = (rtti_types+3), .name = "disp", .offset = 0},
            {.type_info = (rtti_types+65), .name = "reg", .offset = 8},
            {.type_info = (rtti_types+65), .name = "mem", .offset = 9},
            {.type_info = (rtti_types+65), .name = "idx", .offset = 10},
            {.type_info = (rtti_types+63), .name = "mem_is_register", .offset = 11},
            {.type_info = (rtti_types+6), .name = "scale", .offset = 12},
            {.type_info = (rtti_types+63), .name = "rip_relative", .offset = 16},
        }},
    },
    {
        .name = "x64_BasicBlock",
        .inner_type = 0,
        .bytesize = 24,
        .alignment = 8,
        .kind = 16,
        .num_ptr = 0,
        .fields = (Array) { .length = 3, .data = (StructField[]){
            {.type_info = (rtti_types+0), .name = "start", .offset = 0},
            {.type_info = (rtti_types+0), .name = "bb_jump", .offset = 8},
            {.type_info = (rtti_types+0), .name = "bb_next", .offset = 16},
        }},
    },
    {
        .name = "x64_Decoder",
        .inner_type = 0,
        .bytesize = 16,
        .alignment = 8,
        .kind = 16,
        .num_ptr = 0,
        .fields = (Array) { .length = 2, .data = (StructField[]){
            {.type_info = (rtti_types+0), .name = "proc_addrs", .offset = 0},
            {.type_info = (rtti_types+0), .name = "bb_start", .offset = 8},
        }},
    },
    {
        .name = "x64_Procedure",
        .inner_type = 0,
        .bytesize = 24,
        .alignment = 8,
        .kind = 16,
        .num_ptr = 0,
        .fields = (Array) { .length = 3, .data = (StructField[]){
            {.type_info = (rtti_types+0), .name = "start_block", .offset = 0},
            {.type_info = (rtti_types+0), .name = "blocks", .offset = 8},
            {.type_info = (rtti_types+0), .name = "call_addresses", .offset = 16},
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
        .name = "x64_Operation",
        .inner_type = 0,
        .bytesize = 4,
        .alignment = 4,
        .kind = 17,
        .num_ptr = 0,
        .entries = (Array) { .length = 83, .data = (EnumEntry[]){
            {.name = "none", .value = 0},
            {.name = "add", .value = 1},
            {.name = "or", .value = 2},
            {.name = "adc", .value = 3},
            {.name = "sbb", .value = 4},
            {.name = "and", .value = 5},
            {.name = "sub", .value = 6},
            {.name = "xor", .value = 7},
            {.name = "cmp", .value = 8},
            {.name = "rex", .value = 9},
            {.name = "push", .value = 10},
            {.name = "pop", .value = 11},
            {.name = "movsxd", .value = 12},
            {.name = "imul", .value = 13},
            {.name = "Jcc", .value = 14},
            {.name = "test", .value = 15},
            {.name = "xchg", .value = 16},
            {.name = "mov", .value = 17},
            {.name = "lea", .value = 18},
            {.name = "shaf", .value = 19},
            {.name = "lahf", .value = 20},
            {.name = "ret", .value = 21},
            {.name = "enter", .value = 22},
            {.name = "leave", .value = 23},
            {.name = "int3", .value = 24},
            {.name = "int", .value = 25},
            {.name = "esc", .value = 26},
            {.name = "loop", .value = 27},
            {.name = "in", .value = 28},
            {.name = "out", .value = 29},
            {.name = "call", .value = 30},
            {.name = "jmp", .value = 31},
            {.name = "int1", .value = 32},
            {.name = "hlt", .value = 33},
            {.name = "cmc", .value = 34},
            {.name = "clc", .value = 35},
            {.name = "stc", .value = 36},
            {.name = "cli", .value = 37},
            {.name = "sti", .value = 38},
            {.name = "cld", .value = 39},
            {.name = "std", .value = 40},
            {.name = "ins", .value = 41},
            {.name = "outs", .value = 42},
            {.name = "lar", .value = 43},
            {.name = "lsl", .value = 44},
            {.name = "syscall", .value = 45},
            {.name = "clts", .value = 46},
            {.name = "sysret", .value = 47},
            {.name = "invd", .value = 48},
            {.name = "wbinvd", .value = 49},
            {.name = "prefetchw", .value = 50},
            {.name = "wrmsr", .value = 51},
            {.name = "rdtsc", .value = 52},
            {.name = "rdmsr", .value = 53},
            {.name = "rdpmc", .value = 54},
            {.name = "sysenter", .value = 55},
            {.name = "sysexit", .value = 56},
            {.name = "getsec", .value = 57},
            {.name = "cmov_cc", .value = 58},
            {.name = "vmread", .value = 59},
            {.name = "vmwrite", .value = 60},
            {.name = "set_cc", .value = 61},
            {.name = "cpuid", .value = 62},
            {.name = "bt", .value = 63},
            {.name = "shld", .value = 64},
            {.name = "rsm", .value = 65},
            {.name = "bts", .value = 66},
            {.name = "shrd", .value = 67},
            {.name = "cmpxchg", .value = 68},
            {.name = "lss", .value = 69},
            {.name = "btr", .value = 70},
            {.name = "lfs", .value = 71},
            {.name = "lgs", .value = 72},
            {.name = "movzx", .value = 73},
            {.name = "btc", .value = 74},
            {.name = "bsf", .value = 75},
            {.name = "bsr", .value = 76},
            {.name = "movsx", .value = 77},
            {.name = "xadd", .value = 78},
            {.name = "movnti", .value = 79},
            {.name = "bswap", .value = 80},
            {.name = "ud0", .value = 81},
            {.name = "prefix", .value = 82},
        }},
    },
    {
        .name = "x64_Register",
        .inner_type = 0,
        .bytesize = 4,
        .alignment = 4,
        .kind = 17,
        .num_ptr = 0,
        .entries = (Array) { .length = 68, .data = (EnumEntry[]){
            {.name = "none", .value = 0},
            {.name = "al", .value = 1},
            {.name = "cl", .value = 2},
            {.name = "dl", .value = 3},
            {.name = "bl", .value = 4},
            {.name = "ah", .value = 5},
            {.name = "ch", .value = 6},
            {.name = "dh", .value = 7},
            {.name = "bh", .value = 8},
            {.name = "r8b", .value = 9},
            {.name = "r9b", .value = 10},
            {.name = "r10b", .value = 11},
            {.name = "r11b", .value = 12},
            {.name = "r12b", .value = 13},
            {.name = "r13b", .value = 14},
            {.name = "r14b", .value = 15},
            {.name = "r15b", .value = 16},
            {.name = "ax", .value = 17},
            {.name = "cx", .value = 18},
            {.name = "dx", .value = 19},
            {.name = "bx", .value = 20},
            {.name = "sp", .value = 21},
            {.name = "bp", .value = 22},
            {.name = "si", .value = 23},
            {.name = "di", .value = 24},
            {.name = "r8w", .value = 25},
            {.name = "r9w", .value = 26},
            {.name = "r10w", .value = 27},
            {.name = "r11w", .value = 28},
            {.name = "r12w", .value = 29},
            {.name = "r13w", .value = 30},
            {.name = "r14w", .value = 31},
            {.name = "r15w", .value = 32},
            {.name = "eax", .value = 33},
            {.name = "ecx", .value = 34},
            {.name = "edx", .value = 35},
            {.name = "ebx", .value = 36},
            {.name = "esp", .value = 37},
            {.name = "ebp", .value = 38},
            {.name = "esi", .value = 39},
            {.name = "edi", .value = 40},
            {.name = "r8d", .value = 41},
            {.name = "r9d", .value = 42},
            {.name = "r10d", .value = 43},
            {.name = "r11d", .value = 44},
            {.name = "r12d", .value = 45},
            {.name = "r13d", .value = 46},
            {.name = "r14d", .value = 47},
            {.name = "r15d", .value = 48},
            {.name = "rax", .value = 49},
            {.name = "rcx", .value = 50},
            {.name = "rdx", .value = 51},
            {.name = "rbx", .value = 52},
            {.name = "rsp", .value = 53},
            {.name = "rbp", .value = 54},
            {.name = "rsi", .value = 55},
            {.name = "rdi", .value = 56},
            {.name = "r8", .value = 57},
            {.name = "r9", .value = 58},
            {.name = "r10", .value = 59},
            {.name = "r11", .value = 60},
            {.name = "r12", .value = 61},
            {.name = "r13", .value = 62},
            {.name = "r14", .value = 63},
            {.name = "r15", .value = 64},
            {.name = "rip", .value = 65},
            {.name = "eflags", .value = 66},
            {.name = "rflags", .value = 67},
        }},
    },
    {
        .name = "x64_Operand_Kind",
        .inner_type = 0,
        .bytesize = 4,
        .alignment = 4,
        .kind = 17,
        .num_ptr = 0,
        .entries = (Array) { .length = 4, .data = (EnumEntry[]){
            {.name = "None", .value = 0},
            {.name = "Immediate", .value = 1},
            {.name = "Register", .value = 2},
            {.name = "Memory", .value = 3},
        }},
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
static void HELLO();
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
static char* sb_grow(StringBuilder* sb, uint32 len);
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
static uint64 offset_from_rva(PE32* pe, uint64 rva);
static PE32 read_pe32(char* filename);
static void print_pe32(PE32* pe);
static char* to_string_overload9(x64_Operation op);
static char* to_string_overload10(x64_Register reg);
static x64_Register select_gpr(byte index, uint32 bytesize);
static bool has_modrm(byte encoding);
static x64_Operand make_operand(byte** pptr, uint32 opsize, uint32 adsize, byte opcode_reg, byte encoding, ModRM_SIB_disp modrm);
static x64_Instruction decode_instruction(byte** pptr);
static uint64 read_unsigned_imm(byte** pptr, uint32 size);
static int64 read_signed_imm(byte** pptr, uint32 size);
static ModRM_SIB_disp decode_modrm(byte** pptr);
static string stringify_overload1(x64_Instruction inst, StringBuilder* sb);
static char hex_nibble(byte val);
static string hex_overload1(uint64 val);
static string hex_overload2(uint64 val, StringBuilder* sb);
static string stringify_overload2(x64_Operand op, StringBuilder* sb);
static x64_BasicBlock* find_block(x64_Procedure* proc, byte* start);
static x64_Procedure procedure_cfg(byte* entryptr);
static void print_proc(x64_Procedure* proc);
static void print_block(x64_BasicBlock* bb);
static x64_BasicBlock* make_bb(x64_Procedure* proc, byte* entryptr);
static void run_tests();

// Declarations
static Array pog_all_ops = (Array) { .length = 6, .data = (Array[]){(Array) { .length = 2, .data = (Pog_Binary_Op[]){(Pog_Binary_Op) {23, 13}, (Pog_Binary_Op) {24, 14}}}, (Array) { .length = 6, .data = (Pog_Binary_Op[]){(Pog_Binary_Op) {60, 7}, (Pog_Binary_Op) {61, 8}, (Pog_Binary_Op) {62, 9}, (Pog_Binary_Op) {63, 10}, (Pog_Binary_Op) {64, 11}, (Pog_Binary_Op) {65, 12}}}, (Array) { .length = 1, .data = (Pog_Binary_Op[]){(Pog_Binary_Op) {42, 6}}}, (Array) { .length = 5, .data = (Pog_Binary_Op[]){(Pog_Binary_Op) {49, 15}, (Pog_Binary_Op) {50, 16}, (Pog_Binary_Op) {51, 17}, (Pog_Binary_Op) {52, 18}, (Pog_Binary_Op) {53, 19}}}, (Array) { .length = 2, .data = (Pog_Binary_Op[]){(Pog_Binary_Op) {67, 1}, (Pog_Binary_Op) {68, 2}}}, (Array) { .length = 3, .data = (Pog_Binary_Op[]){(Pog_Binary_Op) {69, 3}, (Pog_Binary_Op) {70, 4}, (Pog_Binary_Op) {71, 5}}}}};
static x64_Opcode_Map_Entry x64_primary_opcode_map[256] = {(x64_Opcode_Map_Entry) {1, 1, 4}, (x64_Opcode_Map_Entry) {1, 3, 5}, (x64_Opcode_Map_Entry) {1, 4, 1}, (x64_Opcode_Map_Entry) {1, 5, 3}, (x64_Opcode_Map_Entry) {1, 6, 11}, (x64_Opcode_Map_Entry) {1, 8, 13}, (x64_Opcode_Map_Entry) {0}, (x64_Opcode_Map_Entry) {0}, (x64_Opcode_Map_Entry) {2, 1, 4}, (x64_Opcode_Map_Entry) {2, 3, 5}, (x64_Opcode_Map_Entry) {2, 4, 1}, (x64_Opcode_Map_Entry) {2, 5, 3}, (x64_Opcode_Map_Entry) {2, 6, 11}, (x64_Opcode_Map_Entry) {2, 8, 13}, (x64_Opcode_Map_Entry) {0}, (x64_Opcode_Map_Entry) {0}, (x64_Opcode_Map_Entry) {3, 1, 4}, (x64_Opcode_Map_Entry) {3, 3, 5}, (x64_Opcode_Map_Entry) {3, 4, 1}, (x64_Opcode_Map_Entry) {3, 5, 3}, (x64_Opcode_Map_Entry) {3, 6, 11}, (x64_Opcode_Map_Entry) {3, 8, 13}, (x64_Opcode_Map_Entry) {0}, (x64_Opcode_Map_Entry) {0}, (x64_Opcode_Map_Entry) {4, 1, 4}, (x64_Opcode_Map_Entry) {4, 3, 5}, (x64_Opcode_Map_Entry) {4, 4, 1}, (x64_Opcode_Map_Entry) {4, 5, 3}, (x64_Opcode_Map_Entry) {4, 6, 11}, (x64_Opcode_Map_Entry) {4, 8, 13}, (x64_Opcode_Map_Entry) {0}, (x64_Opcode_Map_Entry) {0}, (x64_Opcode_Map_Entry) {5, 1, 4}, (x64_Opcode_Map_Entry) {5, 3, 5}, (x64_Opcode_Map_Entry) {5, 4, 1}, (x64_Opcode_Map_Entry) {5, 5, 3}, (x64_Opcode_Map_Entry) {5, 6, 11}, (x64_Opcode_Map_Entry) {5, 8, 13}, (x64_Opcode_Map_Entry) {82}, (x64_Opcode_Map_Entry) {0}, (x64_Opcode_Map_Entry) {6, 1, 4}, (x64_Opcode_Map_Entry) {6, 3, 5}, (x64_Opcode_Map_Entry) {6, 4, 1}, (x64_Opcode_Map_Entry) {6, 5, 3}, (x64_Opcode_Map_Entry) {6, 6, 11}, (x64_Opcode_Map_Entry) {6, 8, 13}, (x64_Opcode_Map_Entry) {82}, (x64_Opcode_Map_Entry) {0}, (x64_Opcode_Map_Entry) {7, 1, 4}, (x64_Opcode_Map_Entry) {7, 3, 5}, (x64_Opcode_Map_Entry) {7, 4, 1}, (x64_Opcode_Map_Entry) {7, 5, 3}, (x64_Opcode_Map_Entry) {7, 6, 11}, (x64_Opcode_Map_Entry) {7, 8, 13}, (x64_Opcode_Map_Entry) {82}, (x64_Opcode_Map_Entry) {0}, (x64_Opcode_Map_Entry) {8, 1, 4}, (x64_Opcode_Map_Entry) {8, 3, 5}, (x64_Opcode_Map_Entry) {8, 4, 1}, (x64_Opcode_Map_Entry) {8, 5, 3}, (x64_Opcode_Map_Entry) {8, 6, 11}, (x64_Opcode_Map_Entry) {8, 8, 13}, (x64_Opcode_Map_Entry) {82}, (x64_Opcode_Map_Entry) {0}, (x64_Opcode_Map_Entry) {9}, (x64_Opcode_Map_Entry) {9}, (x64_Opcode_Map_Entry) {9}, (x64_Opcode_Map_Entry) {9}, (x64_Opcode_Map_Entry) {9}, (x64_Opcode_Map_Entry) {9}, (x64_Opcode_Map_Entry) {9}, (x64_Opcode_Map_Entry) {9}, (x64_Opcode_Map_Entry) {9}, (x64_Opcode_Map_Entry) {9}, (x64_Opcode_Map_Entry) {9}, (x64_Opcode_Map_Entry) {9}, (x64_Opcode_Map_Entry) {9}, (x64_Opcode_Map_Entry) {9}, (x64_Opcode_Map_Entry) {9}, (x64_Opcode_Map_Entry) {9}, (x64_Opcode_Map_Entry) {10, 10}, (x64_Opcode_Map_Entry) {10, 10}, (x64_Opcode_Map_Entry) {10, 10}, (x64_Opcode_Map_Entry) {10, 10}, (x64_Opcode_Map_Entry) {10, 10}, (x64_Opcode_Map_Entry) {10, 10}, (x64_Opcode_Map_Entry) {10, 10}, (x64_Opcode_Map_Entry) {10, 10}, (x64_Opcode_Map_Entry) {11, 10}, (x64_Opcode_Map_Entry) {11, 10}, (x64_Opcode_Map_Entry) {11, 10}, (x64_Opcode_Map_Entry) {11, 10}, (x64_Opcode_Map_Entry) {11, 10}, (x64_Opcode_Map_Entry) {11, 10}, (x64_Opcode_Map_Entry) {11, 10}, (x64_Opcode_Map_Entry) {11, 10}, (x64_Opcode_Map_Entry) {0}, (x64_Opcode_Map_Entry) {0}, (x64_Opcode_Map_Entry) {0}, (x64_Opcode_Map_Entry) {12, 5, 3}, (x64_Opcode_Map_Entry) {82}, (x64_Opcode_Map_Entry) {82}, (x64_Opcode_Map_Entry) {82}, (x64_Opcode_Map_Entry) {82}, (x64_Opcode_Map_Entry) {10, 13}, (x64_Opcode_Map_Entry) {13, 5, 3, 13}, (x64_Opcode_Map_Entry) {10, 11}, (x64_Opcode_Map_Entry) {13, 5, 3, 11}, (x64_Opcode_Map_Entry) {41, 15, 18}, (x64_Opcode_Map_Entry) {41, 16, 18}, (x64_Opcode_Map_Entry) {42, 18, 25}, (x64_Opcode_Map_Entry) {42, 18, 26}, (x64_Opcode_Map_Entry) {14, 19}, (x64_Opcode_Map_Entry) {14, 19}, (x64_Opcode_Map_Entry) {14, 19}, (x64_Opcode_Map_Entry) {14, 19}, (x64_Opcode_Map_Entry) {14, 19}, (x64_Opcode_Map_Entry) {14, 19}, (x64_Opcode_Map_Entry) {14, 19}, (x64_Opcode_Map_Entry) {14, 19}, (x64_Opcode_Map_Entry) {14, 19}, (x64_Opcode_Map_Entry) {14, 19}, (x64_Opcode_Map_Entry) {14, 19}, (x64_Opcode_Map_Entry) {14, 19}, (x64_Opcode_Map_Entry) {14, 19}, (x64_Opcode_Map_Entry) {14, 19}, (x64_Opcode_Map_Entry) {14, 19}, (x64_Opcode_Map_Entry) {14, 19}, (x64_Opcode_Map_Entry) {0, 1, 11, .grp = 1}, (x64_Opcode_Map_Entry) {0, 3, 13, .grp = 1}, (x64_Opcode_Map_Entry) {0, .grp = 1}, (x64_Opcode_Map_Entry) {0, 3, 11, .grp = 1}, (x64_Opcode_Map_Entry) {15, 1, 4}, (x64_Opcode_Map_Entry) {15, 3, 5}, (x64_Opcode_Map_Entry) {16, 1, 4}, (x64_Opcode_Map_Entry) {16, 3, 5}, (x64_Opcode_Map_Entry) {17, 1, 4}, (x64_Opcode_Map_Entry) {17, 3, 5}, (x64_Opcode_Map_Entry) {17, 4, 1}, (x64_Opcode_Map_Entry) {17, 5, 3}, (x64_Opcode_Map_Entry) {17, 3, 21}, (x64_Opcode_Map_Entry) {18, 5, 30}, (x64_Opcode_Map_Entry) {17, 21, 2}, (x64_Opcode_Map_Entry) {0, 3}, (x64_Opcode_Map_Entry) {16, 8, 10}, (x64_Opcode_Map_Entry) {16, 8, 10}, (x64_Opcode_Map_Entry) {16, 8, 10}, (x64_Opcode_Map_Entry) {16, 8, 10}, (x64_Opcode_Map_Entry) {16, 8, 10}, (x64_Opcode_Map_Entry) {16, 8, 10}, (x64_Opcode_Map_Entry) {16, 8, 10}, (x64_Opcode_Map_Entry) {16, 8, 10}, (x64_Opcode_Map_Entry) {0}, (x64_Opcode_Map_Entry) {0}, (x64_Opcode_Map_Entry) {0}, (x64_Opcode_Map_Entry) {0}, (x64_Opcode_Map_Entry) {0, 22}, (x64_Opcode_Map_Entry) {0, 22}, (x64_Opcode_Map_Entry) {19}, (x64_Opcode_Map_Entry) {20}, (x64_Opcode_Map_Entry) {17, 6, 23}, (x64_Opcode_Map_Entry) {17, 8, 24}, (x64_Opcode_Map_Entry) {17, 23, 6}, (x64_Opcode_Map_Entry) {17, 24, 8}, (x64_Opcode_Map_Entry) {0, 15, 25}, (x64_Opcode_Map_Entry) {0, 17, 27}, (x64_Opcode_Map_Entry) {0, 25, 15}, (x64_Opcode_Map_Entry) {0, 27, 17}, (x64_Opcode_Map_Entry) {15, 6, 11}, (x64_Opcode_Map_Entry) {15, 8, 13}, (x64_Opcode_Map_Entry) {0, 15, 6}, (x64_Opcode_Map_Entry) {0, 17, 8}, (x64_Opcode_Map_Entry) {0, 6, 25}, (x64_Opcode_Map_Entry) {0, 8, 27}, (x64_Opcode_Map_Entry) {0, 6, 15}, (x64_Opcode_Map_Entry) {0, 8, 17}, (x64_Opcode_Map_Entry) {17, 9, 11}, (x64_Opcode_Map_Entry) {17, 9, 11}, (x64_Opcode_Map_Entry) {17, 9, 11}, (x64_Opcode_Map_Entry) {17, 9, 11}, (x64_Opcode_Map_Entry) {17, 9, 11}, (x64_Opcode_Map_Entry) {17, 9, 11}, (x64_Opcode_Map_Entry) {17, 9, 11}, (x64_Opcode_Map_Entry) {17, 9, 11}, (x64_Opcode_Map_Entry) {17, 10, 14}, (x64_Opcode_Map_Entry) {17, 10, 14}, (x64_Opcode_Map_Entry) {17, 10, 14}, (x64_Opcode_Map_Entry) {17, 10, 14}, (x64_Opcode_Map_Entry) {17, 10, 14}, (x64_Opcode_Map_Entry) {17, 10, 14}, (x64_Opcode_Map_Entry) {17, 10, 14}, (x64_Opcode_Map_Entry) {17, 10, 14}, (x64_Opcode_Map_Entry) {0, 1, 11}, (x64_Opcode_Map_Entry) {0, 3, 11}, (x64_Opcode_Map_Entry) {21, 12}, (x64_Opcode_Map_Entry) {21}, (x64_Opcode_Map_Entry) {0}, (x64_Opcode_Map_Entry) {0}, (x64_Opcode_Map_Entry) {17, 1, 11}, (x64_Opcode_Map_Entry) {17, 3, 13}, (x64_Opcode_Map_Entry) {22, 12, 11}, (x64_Opcode_Map_Entry) {23}, (x64_Opcode_Map_Entry) {21, 12}, (x64_Opcode_Map_Entry) {21}, (x64_Opcode_Map_Entry) {24}, (x64_Opcode_Map_Entry) {25, 11}, (x64_Opcode_Map_Entry) {0}, (x64_Opcode_Map_Entry) {0}, (x64_Opcode_Map_Entry) {0, 1, 29}, (x64_Opcode_Map_Entry) {0, 3, 29}, (x64_Opcode_Map_Entry) {0, 1, 31}, (x64_Opcode_Map_Entry) {0, 3, 31}, (x64_Opcode_Map_Entry) {0}, (x64_Opcode_Map_Entry) {0}, (x64_Opcode_Map_Entry) {0}, (x64_Opcode_Map_Entry) {0}, (x64_Opcode_Map_Entry) {26, 28, 28}, (x64_Opcode_Map_Entry) {26, 28, 28}, (x64_Opcode_Map_Entry) {26, 28, 28}, (x64_Opcode_Map_Entry) {26, 28, 28}, (x64_Opcode_Map_Entry) {26, 28, 28}, (x64_Opcode_Map_Entry) {26, 28, 28}, (x64_Opcode_Map_Entry) {26, 28, 28}, (x64_Opcode_Map_Entry) {26, 28, 28}, (x64_Opcode_Map_Entry) {0, 19}, (x64_Opcode_Map_Entry) {0, 19}, (x64_Opcode_Map_Entry) {27, 19}, (x64_Opcode_Map_Entry) {0, 19}, (x64_Opcode_Map_Entry) {28, 6, 11}, (x64_Opcode_Map_Entry) {28, 7, 11}, (x64_Opcode_Map_Entry) {29, 11, 6}, (x64_Opcode_Map_Entry) {29, 11, 7}, (x64_Opcode_Map_Entry) {30, 20}, (x64_Opcode_Map_Entry) {31, 20}, (x64_Opcode_Map_Entry) {31}, (x64_Opcode_Map_Entry) {31, 19}, (x64_Opcode_Map_Entry) {28, 6, 18}, (x64_Opcode_Map_Entry) {28, 7, 18}, (x64_Opcode_Map_Entry) {29, 18, 6}, (x64_Opcode_Map_Entry) {29, 18, 7}, (x64_Opcode_Map_Entry) {82}, (x64_Opcode_Map_Entry) {32}, (x64_Opcode_Map_Entry) {82}, (x64_Opcode_Map_Entry) {82}, (x64_Opcode_Map_Entry) {33}, (x64_Opcode_Map_Entry) {34}, (x64_Opcode_Map_Entry) {0, 1}, (x64_Opcode_Map_Entry) {0, 3}, (x64_Opcode_Map_Entry) {35}, (x64_Opcode_Map_Entry) {36}, (x64_Opcode_Map_Entry) {37}, (x64_Opcode_Map_Entry) {38}, (x64_Opcode_Map_Entry) {39}, (x64_Opcode_Map_Entry) {40}, (x64_Opcode_Map_Entry) {0}, (x64_Opcode_Map_Entry) {0}};
static x64_Opcode_Map_Entry x64_secondary_opcode_map[256] = {(x64_Opcode_Map_Entry) {0}, (x64_Opcode_Map_Entry) {0}, (x64_Opcode_Map_Entry) {43, 5, 2}, (x64_Opcode_Map_Entry) {44, 5, 2}, (x64_Opcode_Map_Entry) {0}, (x64_Opcode_Map_Entry) {45}, (x64_Opcode_Map_Entry) {46}, (x64_Opcode_Map_Entry) {47}, (x64_Opcode_Map_Entry) {48}, (x64_Opcode_Map_Entry) {49}, (x64_Opcode_Map_Entry) {0}, (x64_Opcode_Map_Entry) {0}, (x64_Opcode_Map_Entry) {0}, (x64_Opcode_Map_Entry) {50, 3}, (x64_Opcode_Map_Entry) {0}, (x64_Opcode_Map_Entry) {0}, (x64_Opcode_Map_Entry) {0}, (x64_Opcode_Map_Entry) {0}, (x64_Opcode_Map_Entry) {0}, (x64_Opcode_Map_Entry) {0}, (x64_Opcode_Map_Entry) {0}, (x64_Opcode_Map_Entry) {0}, (x64_Opcode_Map_Entry) {0}, (x64_Opcode_Map_Entry) {0}, (x64_Opcode_Map_Entry) {0}, (x64_Opcode_Map_Entry) {0}, (x64_Opcode_Map_Entry) {0}, (x64_Opcode_Map_Entry) {0}, (x64_Opcode_Map_Entry) {0}, (x64_Opcode_Map_Entry) {0}, (x64_Opcode_Map_Entry) {0}, (x64_Opcode_Map_Entry) {0}, (x64_Opcode_Map_Entry) {17, 34, 32}, (x64_Opcode_Map_Entry) {17, 34, 33}, (x64_Opcode_Map_Entry) {17, 32, 34}, (x64_Opcode_Map_Entry) {17, 33, 34}, (x64_Opcode_Map_Entry) {0}, (x64_Opcode_Map_Entry) {0}, (x64_Opcode_Map_Entry) {0}, (x64_Opcode_Map_Entry) {0}, (x64_Opcode_Map_Entry) {0}, (x64_Opcode_Map_Entry) {0}, (x64_Opcode_Map_Entry) {0}, (x64_Opcode_Map_Entry) {0}, (x64_Opcode_Map_Entry) {0}, (x64_Opcode_Map_Entry) {0}, (x64_Opcode_Map_Entry) {0}, (x64_Opcode_Map_Entry) {0}, (x64_Opcode_Map_Entry) {51}, (x64_Opcode_Map_Entry) {52}, (x64_Opcode_Map_Entry) {53}, (x64_Opcode_Map_Entry) {54}, (x64_Opcode_Map_Entry) {55}, (x64_Opcode_Map_Entry) {56}, (x64_Opcode_Map_Entry) {0}, (x64_Opcode_Map_Entry) {57}, (x64_Opcode_Map_Entry) {0}, (x64_Opcode_Map_Entry) {0}, (x64_Opcode_Map_Entry) {0}, (x64_Opcode_Map_Entry) {0}, (x64_Opcode_Map_Entry) {0}, (x64_Opcode_Map_Entry) {0}, (x64_Opcode_Map_Entry) {0}, (x64_Opcode_Map_Entry) {0}, (x64_Opcode_Map_Entry) {58, 5, 3}, (x64_Opcode_Map_Entry) {58, 5, 3}, (x64_Opcode_Map_Entry) {58, 5, 3}, (x64_Opcode_Map_Entry) {58, 5, 3}, (x64_Opcode_Map_Entry) {58, 5, 3}, (x64_Opcode_Map_Entry) {58, 5, 3}, (x64_Opcode_Map_Entry) {58, 5, 3}, (x64_Opcode_Map_Entry) {58, 5, 3}, (x64_Opcode_Map_Entry) {58, 5, 3}, (x64_Opcode_Map_Entry) {58, 5, 3}, (x64_Opcode_Map_Entry) {58, 5, 3}, (x64_Opcode_Map_Entry) {58, 5, 3}, (x64_Opcode_Map_Entry) {58, 5, 3}, (x64_Opcode_Map_Entry) {58, 5, 3}, (x64_Opcode_Map_Entry) {58, 5, 3}, (x64_Opcode_Map_Entry) {58, 5, 3}, (x64_Opcode_Map_Entry) {0}, (x64_Opcode_Map_Entry) {0}, (x64_Opcode_Map_Entry) {0}, (x64_Opcode_Map_Entry) {0}, (x64_Opcode_Map_Entry) {0}, (x64_Opcode_Map_Entry) {0}, (x64_Opcode_Map_Entry) {0}, (x64_Opcode_Map_Entry) {0}, (x64_Opcode_Map_Entry) {0}, (x64_Opcode_Map_Entry) {0}, (x64_Opcode_Map_Entry) {0}, (x64_Opcode_Map_Entry) {0}, (x64_Opcode_Map_Entry) {0}, (x64_Opcode_Map_Entry) {0}, (x64_Opcode_Map_Entry) {0}, (x64_Opcode_Map_Entry) {0}, (x64_Opcode_Map_Entry) {0}, (x64_Opcode_Map_Entry) {0}, (x64_Opcode_Map_Entry) {0}, (x64_Opcode_Map_Entry) {0}, (x64_Opcode_Map_Entry) {0}, (x64_Opcode_Map_Entry) {0}, (x64_Opcode_Map_Entry) {0}, (x64_Opcode_Map_Entry) {0}, (x64_Opcode_Map_Entry) {0}, (x64_Opcode_Map_Entry) {0}, (x64_Opcode_Map_Entry) {0}, (x64_Opcode_Map_Entry) {0}, (x64_Opcode_Map_Entry) {0}, (x64_Opcode_Map_Entry) {0}, (x64_Opcode_Map_Entry) {0}, (x64_Opcode_Map_Entry) {0}, (x64_Opcode_Map_Entry) {0}, (x64_Opcode_Map_Entry) {0}, (x64_Opcode_Map_Entry) {0}, (x64_Opcode_Map_Entry) {0}, (x64_Opcode_Map_Entry) {0}, (x64_Opcode_Map_Entry) {0}, (x64_Opcode_Map_Entry) {0}, (x64_Opcode_Map_Entry) {0}, (x64_Opcode_Map_Entry) {59, 35, 40}, (x64_Opcode_Map_Entry) {60, 40, 35}, (x64_Opcode_Map_Entry) {0}, (x64_Opcode_Map_Entry) {0}, (x64_Opcode_Map_Entry) {0}, (x64_Opcode_Map_Entry) {0}, (x64_Opcode_Map_Entry) {0}, (x64_Opcode_Map_Entry) {0}, (x64_Opcode_Map_Entry) {14, 20}, (x64_Opcode_Map_Entry) {14, 20}, (x64_Opcode_Map_Entry) {14, 20}, (x64_Opcode_Map_Entry) {14, 20}, (x64_Opcode_Map_Entry) {14, 20}, (x64_Opcode_Map_Entry) {14, 20}, (x64_Opcode_Map_Entry) {14, 20}, (x64_Opcode_Map_Entry) {14, 20}, (x64_Opcode_Map_Entry) {14, 20}, (x64_Opcode_Map_Entry) {14, 20}, (x64_Opcode_Map_Entry) {14, 20}, (x64_Opcode_Map_Entry) {14, 20}, (x64_Opcode_Map_Entry) {14, 20}, (x64_Opcode_Map_Entry) {14, 20}, (x64_Opcode_Map_Entry) {14, 20}, (x64_Opcode_Map_Entry) {14, 20}, (x64_Opcode_Map_Entry) {61, 1}, (x64_Opcode_Map_Entry) {61, 1}, (x64_Opcode_Map_Entry) {61, 1}, (x64_Opcode_Map_Entry) {61, 1}, (x64_Opcode_Map_Entry) {61, 1}, (x64_Opcode_Map_Entry) {61, 1}, (x64_Opcode_Map_Entry) {61, 1}, (x64_Opcode_Map_Entry) {61, 1}, (x64_Opcode_Map_Entry) {61, 1}, (x64_Opcode_Map_Entry) {61, 1}, (x64_Opcode_Map_Entry) {61, 1}, (x64_Opcode_Map_Entry) {61, 1}, (x64_Opcode_Map_Entry) {61, 1}, (x64_Opcode_Map_Entry) {61, 1}, (x64_Opcode_Map_Entry) {61, 1}, (x64_Opcode_Map_Entry) {61, 1}, (x64_Opcode_Map_Entry) {10, 36}, (x64_Opcode_Map_Entry) {11, 36}, (x64_Opcode_Map_Entry) {62}, (x64_Opcode_Map_Entry) {63, 3, 5}, (x64_Opcode_Map_Entry) {64, 3, 5, 11}, (x64_Opcode_Map_Entry) {64, 3, 5, 31}, (x64_Opcode_Map_Entry) {0}, (x64_Opcode_Map_Entry) {0}, (x64_Opcode_Map_Entry) {10, 37}, (x64_Opcode_Map_Entry) {11, 37}, (x64_Opcode_Map_Entry) {65}, (x64_Opcode_Map_Entry) {66, 3, 5}, (x64_Opcode_Map_Entry) {67, 3, 5, 11}, (x64_Opcode_Map_Entry) {67, 3, 5, 31}, (x64_Opcode_Map_Entry) {0}, (x64_Opcode_Map_Entry) {13, 5, 3}, (x64_Opcode_Map_Entry) {68, 1, 4}, (x64_Opcode_Map_Entry) {68, 3, 5}, (x64_Opcode_Map_Entry) {69, 5, 38}, (x64_Opcode_Map_Entry) {70, 3, 5}, (x64_Opcode_Map_Entry) {71, 5, 38}, (x64_Opcode_Map_Entry) {72, 5, 38}, (x64_Opcode_Map_Entry) {73, 5, 1}, (x64_Opcode_Map_Entry) {73, 5, 2}, (x64_Opcode_Map_Entry) {0}, (x64_Opcode_Map_Entry) {0}, (x64_Opcode_Map_Entry) {0}, (x64_Opcode_Map_Entry) {74, 3, 5}, (x64_Opcode_Map_Entry) {75, 5, 3}, (x64_Opcode_Map_Entry) {76, 5, 3}, (x64_Opcode_Map_Entry) {77, 5, 1}, (x64_Opcode_Map_Entry) {77, 5, 2}, (x64_Opcode_Map_Entry) {78, 1, 4}, (x64_Opcode_Map_Entry) {78, 3, 5}, (x64_Opcode_Map_Entry) {0}, (x64_Opcode_Map_Entry) {79, 39, 40}, (x64_Opcode_Map_Entry) {0}, (x64_Opcode_Map_Entry) {0}, (x64_Opcode_Map_Entry) {0}, (x64_Opcode_Map_Entry) {0}, (x64_Opcode_Map_Entry) {80, 10}, (x64_Opcode_Map_Entry) {80, 10}, (x64_Opcode_Map_Entry) {80, 10}, (x64_Opcode_Map_Entry) {80, 10}, (x64_Opcode_Map_Entry) {80, 10}, (x64_Opcode_Map_Entry) {80, 10}, (x64_Opcode_Map_Entry) {80, 10}, (x64_Opcode_Map_Entry) {80, 10}, (x64_Opcode_Map_Entry) {0}, (x64_Opcode_Map_Entry) {0}, (x64_Opcode_Map_Entry) {0}, (x64_Opcode_Map_Entry) {0}, (x64_Opcode_Map_Entry) {0}, (x64_Opcode_Map_Entry) {0}, (x64_Opcode_Map_Entry) {0}, (x64_Opcode_Map_Entry) {0}, (x64_Opcode_Map_Entry) {0}, (x64_Opcode_Map_Entry) {0}, (x64_Opcode_Map_Entry) {0}, (x64_Opcode_Map_Entry) {0}, (x64_Opcode_Map_Entry) {0}, (x64_Opcode_Map_Entry) {0}, (x64_Opcode_Map_Entry) {0}, (x64_Opcode_Map_Entry) {0}, (x64_Opcode_Map_Entry) {0}, (x64_Opcode_Map_Entry) {0}, (x64_Opcode_Map_Entry) {0}, (x64_Opcode_Map_Entry) {0}, (x64_Opcode_Map_Entry) {0}, (x64_Opcode_Map_Entry) {0}, (x64_Opcode_Map_Entry) {0}, (x64_Opcode_Map_Entry) {0}, (x64_Opcode_Map_Entry) {0}, (x64_Opcode_Map_Entry) {0}, (x64_Opcode_Map_Entry) {0}, (x64_Opcode_Map_Entry) {0}, (x64_Opcode_Map_Entry) {0}, (x64_Opcode_Map_Entry) {0}, (x64_Opcode_Map_Entry) {0}, (x64_Opcode_Map_Entry) {0}, (x64_Opcode_Map_Entry) {0}, (x64_Opcode_Map_Entry) {0}, (x64_Opcode_Map_Entry) {0}, (x64_Opcode_Map_Entry) {0}, (x64_Opcode_Map_Entry) {0}, (x64_Opcode_Map_Entry) {0}, (x64_Opcode_Map_Entry) {0}, (x64_Opcode_Map_Entry) {0}, (x64_Opcode_Map_Entry) {0}, (x64_Opcode_Map_Entry) {0}, (x64_Opcode_Map_Entry) {0}, (x64_Opcode_Map_Entry) {0}, (x64_Opcode_Map_Entry) {0}, (x64_Opcode_Map_Entry) {0}, (x64_Opcode_Map_Entry) {0}, (x64_Opcode_Map_Entry) {81}};
static x64_Opcode_Map_Entry x64_0F_38_opcode_map[256] = {(x64_Opcode_Map_Entry) {0}, (x64_Opcode_Map_Entry) {0}, (x64_Opcode_Map_Entry) {0}, (x64_Opcode_Map_Entry) {0}, (x64_Opcode_Map_Entry) {0}, (x64_Opcode_Map_Entry) {0}, (x64_Opcode_Map_Entry) {0}, (x64_Opcode_Map_Entry) {0}, (x64_Opcode_Map_Entry) {0}, (x64_Opcode_Map_Entry) {0}, (x64_Opcode_Map_Entry) {0}, (x64_Opcode_Map_Entry) {0}, (x64_Opcode_Map_Entry) {0}, (x64_Opcode_Map_Entry) {0}, (x64_Opcode_Map_Entry) {0}, (x64_Opcode_Map_Entry) {0}, (x64_Opcode_Map_Entry) {0}, (x64_Opcode_Map_Entry) {0}, (x64_Opcode_Map_Entry) {0}, (x64_Opcode_Map_Entry) {0}, (x64_Opcode_Map_Entry) {0}, (x64_Opcode_Map_Entry) {0}, (x64_Opcode_Map_Entry) {0}, (x64_Opcode_Map_Entry) {0}, (x64_Opcode_Map_Entry) {0}, (x64_Opcode_Map_Entry) {0}, (x64_Opcode_Map_Entry) {0}, (x64_Opcode_Map_Entry) {0}, (x64_Opcode_Map_Entry) {0}, (x64_Opcode_Map_Entry) {0}, (x64_Opcode_Map_Entry) {0}, (x64_Opcode_Map_Entry) {0}, (x64_Opcode_Map_Entry) {0}, (x64_Opcode_Map_Entry) {0}, (x64_Opcode_Map_Entry) {0}, (x64_Opcode_Map_Entry) {0}, (x64_Opcode_Map_Entry) {0}, (x64_Opcode_Map_Entry) {0}, (x64_Opcode_Map_Entry) {0}, (x64_Opcode_Map_Entry) {0}, (x64_Opcode_Map_Entry) {0}, (x64_Opcode_Map_Entry) {0}, (x64_Opcode_Map_Entry) {0}, (x64_Opcode_Map_Entry) {0}, (x64_Opcode_Map_Entry) {0}, (x64_Opcode_Map_Entry) {0}, (x64_Opcode_Map_Entry) {0}, (x64_Opcode_Map_Entry) {0}, (x64_Opcode_Map_Entry) {0}, (x64_Opcode_Map_Entry) {0}, (x64_Opcode_Map_Entry) {0}, (x64_Opcode_Map_Entry) {0}, (x64_Opcode_Map_Entry) {0}, (x64_Opcode_Map_Entry) {0}, (x64_Opcode_Map_Entry) {0}, (x64_Opcode_Map_Entry) {0}, (x64_Opcode_Map_Entry) {0}, (x64_Opcode_Map_Entry) {0}, (x64_Opcode_Map_Entry) {0}, (x64_Opcode_Map_Entry) {0}, (x64_Opcode_Map_Entry) {0}, (x64_Opcode_Map_Entry) {0}, (x64_Opcode_Map_Entry) {0}, (x64_Opcode_Map_Entry) {0}, (x64_Opcode_Map_Entry) {0}, (x64_Opcode_Map_Entry) {0}, (x64_Opcode_Map_Entry) {0}, (x64_Opcode_Map_Entry) {0}, (x64_Opcode_Map_Entry) {0}, (x64_Opcode_Map_Entry) {0}, (x64_Opcode_Map_Entry) {0}, (x64_Opcode_Map_Entry) {0}, (x64_Opcode_Map_Entry) {0}, (x64_Opcode_Map_Entry) {0}, (x64_Opcode_Map_Entry) {0}, (x64_Opcode_Map_Entry) {0}, (x64_Opcode_Map_Entry) {0}, (x64_Opcode_Map_Entry) {0}, (x64_Opcode_Map_Entry) {0}, (x64_Opcode_Map_Entry) {0}, (x64_Opcode_Map_Entry) {0}, (x64_Opcode_Map_Entry) {0}, (x64_Opcode_Map_Entry) {0}, (x64_Opcode_Map_Entry) {0}, (x64_Opcode_Map_Entry) {0}, (x64_Opcode_Map_Entry) {0}, (x64_Opcode_Map_Entry) {0}, (x64_Opcode_Map_Entry) {0}, (x64_Opcode_Map_Entry) {0}, (x64_Opcode_Map_Entry) {0}, (x64_Opcode_Map_Entry) {0}, (x64_Opcode_Map_Entry) {0}, (x64_Opcode_Map_Entry) {0}, (x64_Opcode_Map_Entry) {0}, (x64_Opcode_Map_Entry) {0}, (x64_Opcode_Map_Entry) {0}, (x64_Opcode_Map_Entry) {0}, (x64_Opcode_Map_Entry) {0}, (x64_Opcode_Map_Entry) {0}, (x64_Opcode_Map_Entry) {0}, (x64_Opcode_Map_Entry) {0}, (x64_Opcode_Map_Entry) {0}, (x64_Opcode_Map_Entry) {0}, (x64_Opcode_Map_Entry) {0}, (x64_Opcode_Map_Entry) {0}, (x64_Opcode_Map_Entry) {0}, (x64_Opcode_Map_Entry) {0}, (x64_Opcode_Map_Entry) {0}, (x64_Opcode_Map_Entry) {0}, (x64_Opcode_Map_Entry) {0}, (x64_Opcode_Map_Entry) {0}, (x64_Opcode_Map_Entry) {0}, (x64_Opcode_Map_Entry) {0}, (x64_Opcode_Map_Entry) {0}, (x64_Opcode_Map_Entry) {0}, (x64_Opcode_Map_Entry) {0}, (x64_Opcode_Map_Entry) {0}, (x64_Opcode_Map_Entry) {0}, (x64_Opcode_Map_Entry) {0}, (x64_Opcode_Map_Entry) {0}, (x64_Opcode_Map_Entry) {0}, (x64_Opcode_Map_Entry) {0}, (x64_Opcode_Map_Entry) {0}, (x64_Opcode_Map_Entry) {0}, (x64_Opcode_Map_Entry) {0}, (x64_Opcode_Map_Entry) {0}, (x64_Opcode_Map_Entry) {0}, (x64_Opcode_Map_Entry) {0}, (x64_Opcode_Map_Entry) {0}, (x64_Opcode_Map_Entry) {0}, (x64_Opcode_Map_Entry) {0}, (x64_Opcode_Map_Entry) {0}, (x64_Opcode_Map_Entry) {0}, (x64_Opcode_Map_Entry) {0}, (x64_Opcode_Map_Entry) {0}, (x64_Opcode_Map_Entry) {0}, (x64_Opcode_Map_Entry) {0}, (x64_Opcode_Map_Entry) {0}, (x64_Opcode_Map_Entry) {0}, (x64_Opcode_Map_Entry) {0}, (x64_Opcode_Map_Entry) {0}, (x64_Opcode_Map_Entry) {0}, (x64_Opcode_Map_Entry) {0}, (x64_Opcode_Map_Entry) {0}, (x64_Opcode_Map_Entry) {0}, (x64_Opcode_Map_Entry) {0}, (x64_Opcode_Map_Entry) {0}, (x64_Opcode_Map_Entry) {0}, (x64_Opcode_Map_Entry) {0}, (x64_Opcode_Map_Entry) {0}, (x64_Opcode_Map_Entry) {0}, (x64_Opcode_Map_Entry) {0}, (x64_Opcode_Map_Entry) {0}, (x64_Opcode_Map_Entry) {0}, (x64_Opcode_Map_Entry) {0}, (x64_Opcode_Map_Entry) {0}, (x64_Opcode_Map_Entry) {0}, (x64_Opcode_Map_Entry) {0}, (x64_Opcode_Map_Entry) {0}, (x64_Opcode_Map_Entry) {0}, (x64_Opcode_Map_Entry) {0}, (x64_Opcode_Map_Entry) {0}, (x64_Opcode_Map_Entry) {0}, (x64_Opcode_Map_Entry) {0}, (x64_Opcode_Map_Entry) {0}, (x64_Opcode_Map_Entry) {0}, (x64_Opcode_Map_Entry) {0}, (x64_Opcode_Map_Entry) {0}, (x64_Opcode_Map_Entry) {0}, (x64_Opcode_Map_Entry) {0}, (x64_Opcode_Map_Entry) {0}, (x64_Opcode_Map_Entry) {0}, (x64_Opcode_Map_Entry) {0}, (x64_Opcode_Map_Entry) {0}, (x64_Opcode_Map_Entry) {0}, (x64_Opcode_Map_Entry) {0}, (x64_Opcode_Map_Entry) {0}, (x64_Opcode_Map_Entry) {0}, (x64_Opcode_Map_Entry) {0}, (x64_Opcode_Map_Entry) {0}, (x64_Opcode_Map_Entry) {0}, (x64_Opcode_Map_Entry) {0}, (x64_Opcode_Map_Entry) {0}, (x64_Opcode_Map_Entry) {0}, (x64_Opcode_Map_Entry) {0}, (x64_Opcode_Map_Entry) {0}, (x64_Opcode_Map_Entry) {0}, (x64_Opcode_Map_Entry) {0}, (x64_Opcode_Map_Entry) {0}, (x64_Opcode_Map_Entry) {0}, (x64_Opcode_Map_Entry) {0}, (x64_Opcode_Map_Entry) {0}, (x64_Opcode_Map_Entry) {0}, (x64_Opcode_Map_Entry) {0}, (x64_Opcode_Map_Entry) {0}, (x64_Opcode_Map_Entry) {0}, (x64_Opcode_Map_Entry) {0}, (x64_Opcode_Map_Entry) {0}, (x64_Opcode_Map_Entry) {0}, (x64_Opcode_Map_Entry) {0}, (x64_Opcode_Map_Entry) {0}, (x64_Opcode_Map_Entry) {0}, (x64_Opcode_Map_Entry) {0}, (x64_Opcode_Map_Entry) {0}, (x64_Opcode_Map_Entry) {0}, (x64_Opcode_Map_Entry) {0}, (x64_Opcode_Map_Entry) {0}, (x64_Opcode_Map_Entry) {0}, (x64_Opcode_Map_Entry) {0}, (x64_Opcode_Map_Entry) {0}, (x64_Opcode_Map_Entry) {0}, (x64_Opcode_Map_Entry) {0}, (x64_Opcode_Map_Entry) {0}, (x64_Opcode_Map_Entry) {0}, (x64_Opcode_Map_Entry) {0}, (x64_Opcode_Map_Entry) {0}, (x64_Opcode_Map_Entry) {0}, (x64_Opcode_Map_Entry) {0}, (x64_Opcode_Map_Entry) {0}, (x64_Opcode_Map_Entry) {0}, (x64_Opcode_Map_Entry) {0}, (x64_Opcode_Map_Entry) {0}, (x64_Opcode_Map_Entry) {0}, (x64_Opcode_Map_Entry) {0}, (x64_Opcode_Map_Entry) {0}, (x64_Opcode_Map_Entry) {0}, (x64_Opcode_Map_Entry) {0}, (x64_Opcode_Map_Entry) {0}, (x64_Opcode_Map_Entry) {0}, (x64_Opcode_Map_Entry) {0}, (x64_Opcode_Map_Entry) {0}, (x64_Opcode_Map_Entry) {0}, (x64_Opcode_Map_Entry) {0}, (x64_Opcode_Map_Entry) {0}, (x64_Opcode_Map_Entry) {0}, (x64_Opcode_Map_Entry) {0}, (x64_Opcode_Map_Entry) {0}, (x64_Opcode_Map_Entry) {0}, (x64_Opcode_Map_Entry) {0}, (x64_Opcode_Map_Entry) {0}, (x64_Opcode_Map_Entry) {0}, (x64_Opcode_Map_Entry) {0}, (x64_Opcode_Map_Entry) {0}, (x64_Opcode_Map_Entry) {0}, (x64_Opcode_Map_Entry) {0}, (x64_Opcode_Map_Entry) {0}, (x64_Opcode_Map_Entry) {0}, (x64_Opcode_Map_Entry) {0}, (x64_Opcode_Map_Entry) {0}, (x64_Opcode_Map_Entry) {0}, (x64_Opcode_Map_Entry) {0}, (x64_Opcode_Map_Entry) {0}, (x64_Opcode_Map_Entry) {0}, (x64_Opcode_Map_Entry) {0}, (x64_Opcode_Map_Entry) {0}, (x64_Opcode_Map_Entry) {0}};
static x64_Opcode_Map_Entry x64_0F_3A_opcode_map[256] = {(x64_Opcode_Map_Entry) {0}, (x64_Opcode_Map_Entry) {0}, (x64_Opcode_Map_Entry) {0}, (x64_Opcode_Map_Entry) {0}, (x64_Opcode_Map_Entry) {0}, (x64_Opcode_Map_Entry) {0}, (x64_Opcode_Map_Entry) {0}, (x64_Opcode_Map_Entry) {0}, (x64_Opcode_Map_Entry) {0}, (x64_Opcode_Map_Entry) {0}, (x64_Opcode_Map_Entry) {0}, (x64_Opcode_Map_Entry) {0}, (x64_Opcode_Map_Entry) {0}, (x64_Opcode_Map_Entry) {0}, (x64_Opcode_Map_Entry) {0}, (x64_Opcode_Map_Entry) {0}, (x64_Opcode_Map_Entry) {0}, (x64_Opcode_Map_Entry) {0}, (x64_Opcode_Map_Entry) {0}, (x64_Opcode_Map_Entry) {0}, (x64_Opcode_Map_Entry) {0}, (x64_Opcode_Map_Entry) {0}, (x64_Opcode_Map_Entry) {0}, (x64_Opcode_Map_Entry) {0}, (x64_Opcode_Map_Entry) {0}, (x64_Opcode_Map_Entry) {0}, (x64_Opcode_Map_Entry) {0}, (x64_Opcode_Map_Entry) {0}, (x64_Opcode_Map_Entry) {0}, (x64_Opcode_Map_Entry) {0}, (x64_Opcode_Map_Entry) {0}, (x64_Opcode_Map_Entry) {0}, (x64_Opcode_Map_Entry) {0}, (x64_Opcode_Map_Entry) {0}, (x64_Opcode_Map_Entry) {0}, (x64_Opcode_Map_Entry) {0}, (x64_Opcode_Map_Entry) {0}, (x64_Opcode_Map_Entry) {0}, (x64_Opcode_Map_Entry) {0}, (x64_Opcode_Map_Entry) {0}, (x64_Opcode_Map_Entry) {0}, (x64_Opcode_Map_Entry) {0}, (x64_Opcode_Map_Entry) {0}, (x64_Opcode_Map_Entry) {0}, (x64_Opcode_Map_Entry) {0}, (x64_Opcode_Map_Entry) {0}, (x64_Opcode_Map_Entry) {0}, (x64_Opcode_Map_Entry) {0}, (x64_Opcode_Map_Entry) {0}, (x64_Opcode_Map_Entry) {0}, (x64_Opcode_Map_Entry) {0}, (x64_Opcode_Map_Entry) {0}, (x64_Opcode_Map_Entry) {0}, (x64_Opcode_Map_Entry) {0}, (x64_Opcode_Map_Entry) {0}, (x64_Opcode_Map_Entry) {0}, (x64_Opcode_Map_Entry) {0}, (x64_Opcode_Map_Entry) {0}, (x64_Opcode_Map_Entry) {0}, (x64_Opcode_Map_Entry) {0}, (x64_Opcode_Map_Entry) {0}, (x64_Opcode_Map_Entry) {0}, (x64_Opcode_Map_Entry) {0}, (x64_Opcode_Map_Entry) {0}, (x64_Opcode_Map_Entry) {0}, (x64_Opcode_Map_Entry) {0}, (x64_Opcode_Map_Entry) {0}, (x64_Opcode_Map_Entry) {0}, (x64_Opcode_Map_Entry) {0}, (x64_Opcode_Map_Entry) {0}, (x64_Opcode_Map_Entry) {0}, (x64_Opcode_Map_Entry) {0}, (x64_Opcode_Map_Entry) {0}, (x64_Opcode_Map_Entry) {0}, (x64_Opcode_Map_Entry) {0}, (x64_Opcode_Map_Entry) {0}, (x64_Opcode_Map_Entry) {0}, (x64_Opcode_Map_Entry) {0}, (x64_Opcode_Map_Entry) {0}, (x64_Opcode_Map_Entry) {0}, (x64_Opcode_Map_Entry) {0}, (x64_Opcode_Map_Entry) {0}, (x64_Opcode_Map_Entry) {0}, (x64_Opcode_Map_Entry) {0}, (x64_Opcode_Map_Entry) {0}, (x64_Opcode_Map_Entry) {0}, (x64_Opcode_Map_Entry) {0}, (x64_Opcode_Map_Entry) {0}, (x64_Opcode_Map_Entry) {0}, (x64_Opcode_Map_Entry) {0}, (x64_Opcode_Map_Entry) {0}, (x64_Opcode_Map_Entry) {0}, (x64_Opcode_Map_Entry) {0}, (x64_Opcode_Map_Entry) {0}, (x64_Opcode_Map_Entry) {0}, (x64_Opcode_Map_Entry) {0}, (x64_Opcode_Map_Entry) {0}, (x64_Opcode_Map_Entry) {0}, (x64_Opcode_Map_Entry) {0}, (x64_Opcode_Map_Entry) {0}, (x64_Opcode_Map_Entry) {0}, (x64_Opcode_Map_Entry) {0}, (x64_Opcode_Map_Entry) {0}, (x64_Opcode_Map_Entry) {0}, (x64_Opcode_Map_Entry) {0}, (x64_Opcode_Map_Entry) {0}, (x64_Opcode_Map_Entry) {0}, (x64_Opcode_Map_Entry) {0}, (x64_Opcode_Map_Entry) {0}, (x64_Opcode_Map_Entry) {0}, (x64_Opcode_Map_Entry) {0}, (x64_Opcode_Map_Entry) {0}, (x64_Opcode_Map_Entry) {0}, (x64_Opcode_Map_Entry) {0}, (x64_Opcode_Map_Entry) {0}, (x64_Opcode_Map_Entry) {0}, (x64_Opcode_Map_Entry) {0}, (x64_Opcode_Map_Entry) {0}, (x64_Opcode_Map_Entry) {0}, (x64_Opcode_Map_Entry) {0}, (x64_Opcode_Map_Entry) {0}, (x64_Opcode_Map_Entry) {0}, (x64_Opcode_Map_Entry) {0}, (x64_Opcode_Map_Entry) {0}, (x64_Opcode_Map_Entry) {0}, (x64_Opcode_Map_Entry) {0}, (x64_Opcode_Map_Entry) {0}, (x64_Opcode_Map_Entry) {0}, (x64_Opcode_Map_Entry) {0}, (x64_Opcode_Map_Entry) {0}, (x64_Opcode_Map_Entry) {0}, (x64_Opcode_Map_Entry) {0}, (x64_Opcode_Map_Entry) {0}, (x64_Opcode_Map_Entry) {0}, (x64_Opcode_Map_Entry) {0}, (x64_Opcode_Map_Entry) {0}, (x64_Opcode_Map_Entry) {0}, (x64_Opcode_Map_Entry) {0}, (x64_Opcode_Map_Entry) {0}, (x64_Opcode_Map_Entry) {0}, (x64_Opcode_Map_Entry) {0}, (x64_Opcode_Map_Entry) {0}, (x64_Opcode_Map_Entry) {0}, (x64_Opcode_Map_Entry) {0}, (x64_Opcode_Map_Entry) {0}, (x64_Opcode_Map_Entry) {0}, (x64_Opcode_Map_Entry) {0}, (x64_Opcode_Map_Entry) {0}, (x64_Opcode_Map_Entry) {0}, (x64_Opcode_Map_Entry) {0}, (x64_Opcode_Map_Entry) {0}, (x64_Opcode_Map_Entry) {0}, (x64_Opcode_Map_Entry) {0}, (x64_Opcode_Map_Entry) {0}, (x64_Opcode_Map_Entry) {0}, (x64_Opcode_Map_Entry) {0}, (x64_Opcode_Map_Entry) {0}, (x64_Opcode_Map_Entry) {0}, (x64_Opcode_Map_Entry) {0}, (x64_Opcode_Map_Entry) {0}, (x64_Opcode_Map_Entry) {0}, (x64_Opcode_Map_Entry) {0}, (x64_Opcode_Map_Entry) {0}, (x64_Opcode_Map_Entry) {0}, (x64_Opcode_Map_Entry) {0}, (x64_Opcode_Map_Entry) {0}, (x64_Opcode_Map_Entry) {0}, (x64_Opcode_Map_Entry) {0}, (x64_Opcode_Map_Entry) {0}, (x64_Opcode_Map_Entry) {0}, (x64_Opcode_Map_Entry) {0}, (x64_Opcode_Map_Entry) {0}, (x64_Opcode_Map_Entry) {0}, (x64_Opcode_Map_Entry) {0}, (x64_Opcode_Map_Entry) {0}, (x64_Opcode_Map_Entry) {0}, (x64_Opcode_Map_Entry) {0}, (x64_Opcode_Map_Entry) {0}, (x64_Opcode_Map_Entry) {0}, (x64_Opcode_Map_Entry) {0}, (x64_Opcode_Map_Entry) {0}, (x64_Opcode_Map_Entry) {0}, (x64_Opcode_Map_Entry) {0}, (x64_Opcode_Map_Entry) {0}, (x64_Opcode_Map_Entry) {0}, (x64_Opcode_Map_Entry) {0}, (x64_Opcode_Map_Entry) {0}, (x64_Opcode_Map_Entry) {0}, (x64_Opcode_Map_Entry) {0}, (x64_Opcode_Map_Entry) {0}, (x64_Opcode_Map_Entry) {0}, (x64_Opcode_Map_Entry) {0}, (x64_Opcode_Map_Entry) {0}, (x64_Opcode_Map_Entry) {0}, (x64_Opcode_Map_Entry) {0}, (x64_Opcode_Map_Entry) {0}, (x64_Opcode_Map_Entry) {0}, (x64_Opcode_Map_Entry) {0}, (x64_Opcode_Map_Entry) {0}, (x64_Opcode_Map_Entry) {0}, (x64_Opcode_Map_Entry) {0}, (x64_Opcode_Map_Entry) {0}, (x64_Opcode_Map_Entry) {0}, (x64_Opcode_Map_Entry) {0}, (x64_Opcode_Map_Entry) {0}, (x64_Opcode_Map_Entry) {0}, (x64_Opcode_Map_Entry) {0}, (x64_Opcode_Map_Entry) {0}, (x64_Opcode_Map_Entry) {0}, (x64_Opcode_Map_Entry) {0}, (x64_Opcode_Map_Entry) {0}, (x64_Opcode_Map_Entry) {0}, (x64_Opcode_Map_Entry) {0}, (x64_Opcode_Map_Entry) {0}, (x64_Opcode_Map_Entry) {0}, (x64_Opcode_Map_Entry) {0}, (x64_Opcode_Map_Entry) {0}, (x64_Opcode_Map_Entry) {0}, (x64_Opcode_Map_Entry) {0}, (x64_Opcode_Map_Entry) {0}, (x64_Opcode_Map_Entry) {0}, (x64_Opcode_Map_Entry) {0}, (x64_Opcode_Map_Entry) {0}, (x64_Opcode_Map_Entry) {0}, (x64_Opcode_Map_Entry) {0}, (x64_Opcode_Map_Entry) {0}, (x64_Opcode_Map_Entry) {0}, (x64_Opcode_Map_Entry) {0}, (x64_Opcode_Map_Entry) {0}, (x64_Opcode_Map_Entry) {0}, (x64_Opcode_Map_Entry) {0}, (x64_Opcode_Map_Entry) {0}, (x64_Opcode_Map_Entry) {0}, (x64_Opcode_Map_Entry) {0}, (x64_Opcode_Map_Entry) {0}, (x64_Opcode_Map_Entry) {0}, (x64_Opcode_Map_Entry) {0}, (x64_Opcode_Map_Entry) {0}, (x64_Opcode_Map_Entry) {0}, (x64_Opcode_Map_Entry) {0}, (x64_Opcode_Map_Entry) {0}, (x64_Opcode_Map_Entry) {0}, (x64_Opcode_Map_Entry) {0}, (x64_Opcode_Map_Entry) {0}, (x64_Opcode_Map_Entry) {0}, (x64_Opcode_Map_Entry) {0}, (x64_Opcode_Map_Entry) {0}, (x64_Opcode_Map_Entry) {0}, (x64_Opcode_Map_Entry) {0}, (x64_Opcode_Map_Entry) {0}, (x64_Opcode_Map_Entry) {0}, (x64_Opcode_Map_Entry) {0}, (x64_Opcode_Map_Entry) {0}, (x64_Opcode_Map_Entry) {0}, (x64_Opcode_Map_Entry) {0}, (x64_Opcode_Map_Entry) {0}};
static StringBuilder* temps;
static uint32 rotation = 0;
static uint32 total_test_count = 0;
static uint32 total_failed = 0;

// Implementations
void __main() {
    run_tests();
    x64_Procedure proc = procedure_cfg(__main);
    print_proc(&proc);
    for (int32 it = 0; it < list_length((void*)(proc.call_addresses)); it++) {
        byte* addr = proc.call_addresses[it];
        x64_Procedure proc1 = procedure_cfg(addr);
        print_proc(&proc1);
    }
    PE32 pe = read_pe32("output.exe");
    print_pe32(&pe);
    byte* entryptr = (pe.ptr + offset_from_rva(&pe, pe.nt_headers->optional_header.AddressOfEntryPoint));
    x64_Procedure entryproc = procedure_cfg(entryptr);
    print_proc(&entryproc);
}
static void HELLO() {
    float32 f = 0;
    int32 i = 1;
    if (i == 0) {
        printf("%s", "zero\n");
    } else {
        printf("%s", "non-zero\n");
    }
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
    sb_append_overload2(sb, to_string_overload2((uint64)num));
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
static char* sb_grow(StringBuilder* sb, uint32 len) {
    uint32 req_cap = (sb->length + len);
    if (sb->capacity <= req_cap) {
        sb->capacity *= 2;
        while (sb->capacity <= req_cap) sb->capacity *= 2;
        sb->content = realloc(sb->content, sb->capacity);
    }
    return (sb->content + sb->length);
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
    return (ivec2) {min_overload1(a.x, b.x), min_overload1(a.y, b.y)};
}
static ivec3 min_overload3(ivec3 a, ivec3 b) {
    return (ivec3) {min_overload1(a.x, b.x), min_overload1(a.y, b.y), min_overload1(a.z, b.z)};
}
static ivec4 min_overload4(ivec4 a, ivec4 b) {
    return (ivec4) {min_overload1(a.x, b.x), min_overload1(a.y, b.y), min_overload1(a.z, b.z), min_overload1(a.w, b.w)};
}
static int32 max_overload1(int32 a, int32 b) {
    return (a < b) ? b : a;
}
static ivec2 max_overload2(ivec2 a, ivec2 b) {
    return (ivec2) {max_overload1(a.x, b.x), max_overload1(a.y, b.y)};
}
static ivec3 max_overload3(ivec3 a, ivec3 b) {
    return (ivec3) {max_overload1(a.x, b.x), max_overload1(a.y, b.y), max_overload1(a.z, b.z)};
}
static ivec4 max_overload4(ivec4 a, ivec4 b) {
    return (ivec4) {max_overload1(a.x, b.x), max_overload1(a.y, b.y), max_overload1(a.z, b.z), max_overload1(a.w, b.w)};
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
    return (ivec2) {abs_overload3(v.x), abs_overload3(v.y)};
}
static ivec3 abs_overload8(ivec3 v) {
    return (ivec3) {abs_overload3(v.x), abs_overload3(v.y), abs_overload3(v.z)};
}
static ivec4 abs_overload9(ivec4 v) {
    return (ivec4) {abs_overload3(v.x), abs_overload3(v.y), abs_overload3(v.z), abs_overload3(v.w)};
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
        printf("%d%s%s%s%c%s%.*s%s%llu%s%Lf%s", it, " ", get_str_overload1(token.kind), " (", token.data.character, ") (\"", (token.data.str).length, (token.data.str).chars, "\") int=", token.data.integer, " decimal=", token.data.decimal, "\n");
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
static uint64 offset_from_rva(PE32* pe, uint64 rva) {
    for (int32 it = 0; it < pe->section_headers.length; it++) {
        Image_Section_Header sec = ((Image_Section_Header*)pe->section_headers.data)[it];
        if (sec.VirtualAddress <= rva) if (rva < (sec.VirtualAddress + sec.SizeOfRawData)) {
            return (sec.PointerToRawData + (rva - sec.VirtualAddress));
        }
    }
    return rva;
}
static PE32 read_pe32(char* filename) {
    Array bytes = read_binary_file(filename);
    byte* ptr = bytes.data;
    uint32 file_addr_of_new_exe_header = *((uint32*)&((byte*)bytes.data)[60]);
    Image_Nt_Headers* nt_headers = (ptr + file_addr_of_new_exe_header);
    COFF_File_Header* coff_header = &nt_headers->file_header;
    Image_Optional_Header_64* opt_header = &nt_headers->optional_header;
    Image_Section_Header* sec_header = ((ptr + file_addr_of_new_exe_header) + sizeof(Image_Nt_Headers));
    Array section_headers;
    section_headers.data = sec_header;
    section_headers.length = nt_headers->file_header.NumberOfSections;
    PE32 pe = (PE32) {0};
    pe.ptr = ptr;
    pe.nt_headers = nt_headers;
    pe.section_headers = section_headers;
    uint64 imports = offset_from_rva(&pe, opt_header->DataDirectory[1].VirtualAddress);
    Image_Import_Descriptor* import_desc = (ptr + imports);
    while (1) {
        Image_Import_Descriptor zero = (Image_Import_Descriptor) {0};
        if (memcmp(import_desc, &zero, sizeof(Image_Import_Descriptor)) == 0) break;
        char* name = (ptr + offset_from_rva(&pe, import_desc->Name));
        printf("%s", "import descriptor:\n");
        printf("    OriginalFirstThunk: %x\n", import_desc->OriginalFirstThunk);
        printf("    TimeDateStamp     : %x\n", import_desc->TimeDateStamp);
        printf("    ForwarderChain    : %x\n", import_desc->ForwarderChain);
        printf("    Name              : %x (%s)\n", import_desc->Name, (import_desc->Name == 0) ? "" : name);
        printf("    FirstThunk        : %x\n", import_desc->FirstThunk);
        uint64* ILT = (ptr + offset_from_rva(&pe, import_desc->OriginalFirstThunk));
        uint64* i = ILT;
        while (1) {
            uint64 value = *i++;
            if (value == 0) break;
            uint64 is_ordinal = (value & 9223372036854775808);
            if (is_ordinal) {
                uint16 ordinal = (uint16)value;
            } else {
                uint64 hint_name_rva = (value & 2147483647);
                uint64 ofs = offset_from_rva(&pe, hint_name_rva);
                uint16 hint = *((uint16*)(ptr + ofs));
                char* name = ((ptr + ofs) + 2);
                printf("        %hx \"%s\"\n", hint, name);
            }
        }
        import_desc++;
    }
    return pe;
}
static void print_pe32(PE32* pe) {
    printf("%s%d%s", "NT Headers: ", (uint32)sizeof(Image_Nt_Headers), "\n");
    char* magicnr_PE = (char*)(&pe->nt_headers->signature);
    printf("%s%c%c%c%c%s", "Magic Nr.: ", magicnr_PE[0], magicnr_PE[1], magicnr_PE[2], magicnr_PE[3], "\n");
    printf("%s%d%s", "coff_header:", (uint32)sizeof(COFF_File_Header), "\n");
    printf("%s%hu%s", "    Machine             : ", pe->nt_headers->file_header.Machine, "\n");
    printf("%s%hu%s", "    NumberOfSections    : ", pe->nt_headers->file_header.NumberOfSections, "\n");
    printf("%s%u%s", "    TimeDateStamp       : ", pe->nt_headers->file_header.TimeDateStamp, "\n");
    printf("%s%u%s", "    PointerToSymbolTable: ", pe->nt_headers->file_header.PointerToSymbolTable, "\n");
    printf("%s%u%s", "    NumberOfSymbols     : ", pe->nt_headers->file_header.NumberOfSymbols, "\n");
    printf("%s%hu%s", "    SizeOfOptionalHeader: ", pe->nt_headers->file_header.SizeOfOptionalHeader, "\n");
    printf("%s%hu%s", "    Characteristics     : ", pe->nt_headers->file_header.Characteristics, "\n");
    Image_Optional_Header_64 opt_header = pe->nt_headers->optional_header;
    printf("%s%d%s", "optional_header:", (uint32)sizeof(Image_Optional_Header_64), "\n");
    printf("    Magic                      : %hx\n", opt_header.Magic);
    printf("%s%u%s", "    MajorLinkerVersion         : ", (uint32)opt_header.MajorLinkerVersion, "\n");
    printf("%s%u%s", "    MinorLinkerVersion         : ", (uint32)opt_header.MinorLinkerVersion, "\n");
    printf("%s%u%s", "    SizeOfCode                 : ", opt_header.SizeOfCode, "\n");
    printf("%s%u%s", "    SizeOfInitializedData      : ", opt_header.SizeOfInitializedData, "\n");
    printf("%s%u%s", "    SizeOfUninitializedData    : ", opt_header.SizeOfUninitializedData, "\n");
    printf("%s%u%s", "    AddressOfEntryPoint        : ", opt_header.AddressOfEntryPoint, "\n");
    printf("%s%u%s", "    BaseOfCode                 : ", opt_header.BaseOfCode, "\n");
    printf("%s%llu%s", "    ImageBase                  : ", opt_header.ImageBase, "\n");
    printf("%s%u%s", "    SectionAlignment           : ", opt_header.SectionAlignment, "\n");
    printf("%s%u%s", "    FileAlignment              : ", opt_header.FileAlignment, "\n");
    printf("%s%hu%s", "    MajorOperatingSystemVersion: ", opt_header.MajorOperatingSystemVersion, "\n");
    printf("%s%hu%s", "    MinorOperatingSystemVersion: ", opt_header.MinorOperatingSystemVersion, "\n");
    printf("%s%hu%s", "    MajorImageVersion          : ", opt_header.MajorImageVersion, "\n");
    printf("%s%hu%s", "    MinorImageVersion          : ", opt_header.MinorImageVersion, "\n");
    printf("%s%hu%s", "    MajorSubsystemVersion      : ", opt_header.MajorSubsystemVersion, "\n");
    printf("%s%hu%s", "    MinorSubsystemVersion      : ", opt_header.MinorSubsystemVersion, "\n");
    printf("%s%u%s", "    Win32VersionValue          : ", opt_header.Win32VersionValue, "\n");
    printf("%s%u%s", "    SizeOfImage                : ", opt_header.SizeOfImage, "\n");
    printf("%s%u%s", "    SizeOfHeaders              : ", opt_header.SizeOfHeaders, "\n");
    printf("%s%u%s", "    CheckSum                   : ", opt_header.CheckSum, "\n");
    printf("%s%hu%s", "    Subsystem                  : ", opt_header.Subsystem, "\n");
    printf("%s%hu%s", "    DllCharacteristics         : ", opt_header.DllCharacteristics, "\n");
    printf("%s%llu%s", "    SizeOfStackReserve         : ", opt_header.SizeOfStackReserve, "\n");
    printf("%s%llu%s", "    SizeOfStackCommit          : ", opt_header.SizeOfStackCommit, "\n");
    printf("%s%llu%s", "    SizeOfHeapReserve          : ", opt_header.SizeOfHeapReserve, "\n");
    printf("%s%llu%s", "    SizeOfHeapCommit           : ", opt_header.SizeOfHeapCommit, "\n");
    printf("%s%u%s", "    LoaderFlags                : ", opt_header.LoaderFlags, "\n");
    printf("%s%u%s", "    NumberOfRvaAndSizes        : ", opt_header.NumberOfRvaAndSizes, "\n");
    char* directory_entry_names[16] = {"Export", "Import", "Resource", "Exception", "Security", "Basereloc", "Debug", "Architecture", "Globalptr", "TLS", "Load_config", "Bound_import", "IAT", "Delay_import", "COM_descriptor"};
    printf("%s", "    DataDirectory: (VirtualAddress, Size)\n");
    for (int32 it = 0; it < 16; it++) {
        Image_Data_Directory entry = opt_header.DataDirectory[it];
        printf("        %02d. %-15s: %8x, %8x\n", it, directory_entry_names[it], entry.VirtualAddress, entry.Size);
    }
    for (int32 it = 0; it < pe->section_headers.length; it++) {
        Image_Section_Header sec = ((Image_Section_Header*)pe->section_headers.data)[it];
        printf("%s", "Section Header\n");
        printf("%s%s%s", "    Name                       : ", (char*)sec.Name, "\n");
        printf("    PhysicalAddress_VirtualSize: %x\n", sec.PhysicalAddress_VirtualSize);
        printf("    VirtualAddress             : %x\n", sec.VirtualAddress);
        printf("    SizeOfRawData              : %x\n", sec.SizeOfRawData);
        printf("    PointerToRawData           : %x\n", sec.PointerToRawData);
        printf("    PointerToRelocations       : %x\n", sec.PointerToRelocations);
        printf("    PointerToLinenumbers       : %x\n", sec.PointerToLinenumbers);
        printf("%s%hu%s", "    NumberOfRelocations        : ", sec.NumberOfRelocations, "\n");
        printf("%s%hu%s", "    NumberOfLinenumbers        : ", sec.NumberOfLinenumbers, "\n");
        printf("%s%u%s", "    Characteristics            : ", sec.Characteristics, "\n");
    }
}
static char* to_string_overload9(x64_Operation op) {
    switch (op) {
        default:;
        case 0:;
        return "(invalid)";
        case 1:;
        return "add";
        case 2:;
        return "or";
        case 3:;
        return "adc";
        case 4:;
        return "sbb";
        case 5:;
        return "and";
        case 6:;
        return "sub";
        case 7:;
        return "xor";
        case 8:;
        return "cmp";
        case 9:;
        return "rex";
        case 10:;
        return "push";
        case 11:;
        return "pop";
        case 12:;
        return "movsxd";
        case 13:;
        return "imul";
        case 14:;
        return "Jcc";
        case 15:;
        return "test";
        case 16:;
        return "xchg";
        case 17:;
        return "mov";
        case 18:;
        return "lea";
        case 19:;
        return "shaf";
        case 20:;
        return "lahf";
        case 21:;
        return "ret";
        case 22:;
        return "enter";
        case 23:;
        return "leave";
        case 24:;
        return "int3";
        case 25:;
        return "int";
        case 26:;
        return "esc";
        case 27:;
        return "loop";
        case 28:;
        return "in";
        case 29:;
        return "out";
        case 30:;
        return "call";
        case 31:;
        return "jmp";
        case 32:;
        return "int1";
        case 33:;
        return "hlt";
        case 34:;
        return "cmc";
        case 35:;
        return "clc";
        case 36:;
        return "stc";
        case 37:;
        return "cli";
        case 38:;
        return "sti";
        case 39:;
        return "cld";
        case 40:;
        return "std";
        case 41:;
        return "ins";
        case 42:;
        return "outs";
        case 43:;
        return "lar";
        case 44:;
        return "lsl";
        case 45:;
        return "syscall";
        case 46:;
        return "clts";
        case 47:;
        return "sysret";
        case 48:;
        return "invd";
        case 49:;
        return "wbinvd";
        case 50:;
        return "prefetchw";
        case 51:;
        return "wrmsr";
        case 52:;
        return "rdtsc";
        case 53:;
        return "rdmsr";
        case 54:;
        return "rdpmc";
        case 55:;
        return "sysenter";
        case 56:;
        return "sysexit";
        case 57:;
        return "getsec";
        case 58:;
        return "cmov_cc";
        case 59:;
        return "vmread";
        case 60:;
        return "vmwrite";
        case 61:;
        return "set_cc";
        case 62:;
        return "cpuid";
        case 63:;
        return "bt";
        case 64:;
        return "shld";
        case 65:;
        return "rsm";
        case 66:;
        return "bts";
        case 67:;
        return "shrd";
        case 68:;
        return "cmpxchg";
        case 69:;
        return "lss";
        case 70:;
        return "btr";
        case 71:;
        return "lfs";
        case 72:;
        return "lgs";
        case 73:;
        return "movzx";
        case 74:;
        return "btc";
        case 75:;
        return "bsf";
        case 76:;
        return "bsr";
        case 77:;
        return "movsx";
        case 78:;
        return "xadd";
        case 79:;
        return "movnti";
        case 80:;
        return "bswap";
        case 81:;
        return "ud0";
        case 82:;
        return "prefix";
    }
}
static char* to_string_overload10(x64_Register reg) {
    Array strs = (Array) { .length = 68, .data = (char*[]){"none", "al", "cl", "dl", "bl", "ah", "ch", "dh", "bh", "r8b", "r9b", "r10b", "r11b", "r12b", "r13b", "r14b", "r15b", "ax", "cx", "dx", "bx", "sp", "bp", "si", "di", "r8w", "r9w", "r10w", "r11w", "r12w", "r13w", "r14w", "r15w", "eax", "ecx", "edx", "ebx", "esp", "ebp", "esi", "edi", "r8d", "r9d", "r10d", "r11d", "r12d", "r13d", "r14d", "r15d", "rax", "rcx", "rdx", "rbx", "rsp", "rbp", "rsi", "rdi", "r8", "r9", "r10", "r11", "r12", "r13", "r14", "r15", "rip", "eflags", "rflags"}};
    return ((char**)strs.data)[reg];
}
static x64_Register select_gpr(byte index, uint32 bytesize) {
    switch (bytesize) {
        case 1:;
        return (1 + index);
        case 2:;
        return (17 + index);
        case 4:;
        return (33 + index);
        case 8:;
        return (49 + index);
        default:;
        break;
    }
    return 0;
}
static bool has_modrm(byte encoding) {
    switch (encoding) {
        case 1:;
        return 1;
        case 2:;
        return 1;
        case 3:;
        return 1;
        case 4:;
        return 1;
        case 5:;
        return 1;
        case 6:;
        return 0;
        case 7:;
        return 0;
        case 8:;
        return 0;
        case 9:;
        return 0;
        case 10:;
        return 0;
        case 11:;
        return 0;
        case 12:;
        return 0;
        case 13:;
        return 0;
        case 14:;
        return 0;
        case 15:;
        return 0;
        case 16:;
        return 0;
        case 17:;
        return 0;
        case 18:;
        return 0;
        case 19:;
        return 0;
        case 20:;
        return 0;
        case 21:;
        return 1;
        case 22:;
        return 0;
        case 23:;
        return 0;
        case 24:;
        return 0;
        case 25:;
        return 0;
        case 26:;
        return 0;
        case 27:;
        return 0;
        case 28:;
        return 0;
        case 29:;
        return 0;
        case 30:;
        return 1;
        case 31:;
        return 0;
        case 32:;
        return 1;
        case 33:;
        return 1;
        case 34:;
        return 1;
        case 35:;
        return 1;
        case 36:;
        return 0;
        case 37:;
        return 0;
        case 38:;
        return 1;
        case 39:;
        return 1;
        case 40:;
        return 1;
        default:;
        return 0;
    }
}
static x64_Operand E(uint32 opsize, uint32 adsize, ModRM_SIB_disp modrm) {
    if (modrm.rip_relative) return (x64_Operand) {.kind = 3, .reg = 65, .imm_value = modrm.disp, .opsize = opsize};
    if (modrm.mem_is_register) return (x64_Operand) {.kind = 2, .reg = select_gpr(modrm.mem, opsize), .opsize = opsize};
    return (x64_Operand) {.kind = 3, .reg = select_gpr(modrm.mem, adsize), .index = select_gpr(modrm.idx, adsize), .scale = modrm.scale, .imm_value = modrm.disp, .opsize = opsize};
}
static x64_Operand make_operand(byte** pptr, uint32 opsize, uint32 adsize, byte opcode_reg, byte encoding, ModRM_SIB_disp modrm) {
    uint32 b = 1;
    uint32 w = 2;
    uint32 z = (opsize <= 4) ? opsize : 4;
    uint32 v = opsize;
    uint32 y = (opsize >= 4) ? opsize : 4;
    /* local procedure */;
    switch (encoding) {
        default:;
        case 0:;
        return (x64_Operand) {0};
        case 1:;
        return E(b, adsize, modrm);
        case 2:;
        return E(w, adsize, modrm);
        case 3:;
        return E(v, adsize, modrm);
        case 4:;
        return (x64_Operand) {.kind = 2, .reg = select_gpr(modrm.reg, b), .opsize = b};
        case 5:;
        return (x64_Operand) {.kind = 2, .reg = select_gpr(modrm.reg, v), .opsize = v};
        case 6:;
        return (x64_Operand) {.kind = 2, .reg = select_gpr(0, b), .opsize = b};
        case 7:;
        return (x64_Operand) {.kind = 2, .reg = select_gpr(0, z), .opsize = z};
        case 8:;
        return (x64_Operand) {.kind = 2, .reg = select_gpr(0, v), .opsize = v};
        case 9:;
        return (x64_Operand) {.kind = 2, .reg = select_gpr(opcode_reg, b), .opsize = b};
        case 10:;
        return (x64_Operand) {.kind = 2, .reg = select_gpr(opcode_reg, v), .opsize = v};
        case 11:;
        return (x64_Operand) {.kind = 1, .imm_value = read_unsigned_imm(pptr, b), .opsize = b};
        case 12:;
        return (x64_Operand) {.kind = 1, .imm_value = read_unsigned_imm(pptr, w), .opsize = w};
        case 13:;
        return (x64_Operand) {.kind = 1, .imm_value = read_unsigned_imm(pptr, z), .opsize = z};
        case 14:;
        return (x64_Operand) {.kind = 1, .imm_value = read_unsigned_imm(pptr, v), .opsize = v};
        case 15:;
        return (x64_Operand) {0};
        case 16:;
        return (x64_Operand) {0};
        case 17:;
        return (x64_Operand) {0};
        case 18:;
        return (x64_Operand) {0};
        case 19:;
        return (x64_Operand) {.kind = 1, .imm_value = read_signed_imm(pptr, b), .opsize = b};
        case 20:;
        return (x64_Operand) {.kind = 1, .imm_value = read_signed_imm(pptr, z), .opsize = z};
        case 21:;
        return (x64_Operand) {0};
        case 22:;
        return (x64_Operand) {0};
        case 23:;
        return (x64_Operand) {0};
        case 24:;
        return (x64_Operand) {0};
        case 25:;
        return (x64_Operand) {0};
        case 26:;
        return (x64_Operand) {0};
        case 27:;
        return (x64_Operand) {0};
        case 28:;
        return (x64_Operand) {0};
        case 29:;
        return (x64_Operand) {.kind = 1, .imm_value = 1};
        case 30:;
        if (modrm.mem_is_register) return (x64_Operand) {0}; else return E(v, adsize, modrm);
        case 31:;
        return (x64_Operand) {0};
        case 32:;
        return (x64_Operand) {0};
        case 33:;
        return (x64_Operand) {0};
        case 34:;
        return (x64_Operand) {0};
        case 35:;
        return E(y, adsize, modrm);
        case 36:;
        return (x64_Operand) {0};
        case 37:;
        return (x64_Operand) {0};
        case 38:;
        return (x64_Operand) {0};
        case 39:;
        if (modrm.mem_is_register) return (x64_Operand) {0}; else return E(y, adsize, modrm);
        case 40:;
        return (x64_Operand) {.kind = 2, .reg = select_gpr(modrm.reg, y), .opsize = y};
    }
}
static x64_Instruction decode_instruction(byte** pptr) {
    x64_Instruction inst = (x64_Instruction) {0};
    byte* ptr = *pptr;
    uint32 operand_count = 0;
    uint32 opsize = 4;
    uint32 adsize = 8;
    switch (*ptr) {
        case 100:;
        ptr++;
        break;
        case 101:;
        ptr++;
        break;
        case 102:;
        ptr++;
        opsize = 2;
        break;
        case 103:;
        ptr++;
        adsize = 4;
        break;
    }
    byte bit_ext_reg = 0;
    byte bit_ext_idx = 0;
    byte bit_ext_mem = 0;
    if ((*ptr & 240) == 64) {
        byte rex = *ptr++;
        if (rex & 8) opsize = 8;
        bit_ext_reg = ((rex & 4) << 1);
        bit_ext_idx = ((rex & 2) << 2);
        bit_ext_mem = ((rex & 1) << 3);
    }
    byte opcode = *ptr++;
    if ((opcode & 248) == 216) {
    }
    x64_Opcode_Map_Entry* opcode_map = x64_primary_opcode_map;
    if (opcode == 15) {
        opcode = *ptr++;
        opcode_map = x64_secondary_opcode_map;
        if (opcode == 56) {
            opcode = *ptr++;
            opcode_map = x64_0F_38_opcode_map;
        } else if (opcode == 58) {
            opcode = *ptr++;
            opcode_map = x64_0F_3A_opcode_map;
        }
    }
    x64_Opcode_Map_Entry entry = opcode_map[opcode];
    inst.operation = entry.operation;
    ModRM_SIB_disp modrm = (ModRM_SIB_disp) {0};
    for (int32 it = 0; it < 4; it++) if (has_modrm(entry.operands[it])) {
        modrm = decode_modrm(&ptr);
        break;
    }
    modrm.reg |= bit_ext_reg;
    modrm.idx |= bit_ext_idx;
    modrm.mem |= bit_ext_mem;
    byte opcode_reg = (bit_ext_mem | (opcode & 7));
    for (int32 it = 0; it < 4; it++) inst.operands[it] = make_operand(&ptr, opsize, adsize, opcode_reg, entry.operands[it], modrm);
    *pptr = ptr;
    return inst;
}
static uint64 read_unsigned_imm(byte** pptr, uint32 size) {
    byte* ptr = *pptr;
    switch (size) {
        default:;
        case 0:;
        return 0;
        case 1:;
        (*pptr) += 1;
        return (uint64)*((uint8*)ptr);
        case 2:;
        (*pptr) += 2;
        return (uint64)*((uint16*)ptr);
        case 4:;
        (*pptr) += 4;
        return (uint64)*((uint32*)ptr);
        case 8:;
        (*pptr) += 8;
        return (uint64)*((uint64*)ptr);
    }
}
static int64 read_signed_imm(byte** pptr, uint32 size) {
    byte* ptr = *pptr;
    switch (size) {
        default:;
        case 0:;
        return 0;
        case 1:;
        (*pptr) += 1;
        return (int64)*((int8*)ptr);
        case 2:;
        (*pptr) += 2;
        return (int64)*((int16*)ptr);
        case 4:;
        (*pptr) += 4;
        return (int64)*((int32*)ptr);
        case 8:;
        (*pptr) += 8;
        return (int64)*((int64*)ptr);
    }
}
static ModRM_SIB_disp decode_modrm(byte** pptr) {
    byte* ptr = *pptr;
    byte mod_reg_rm = *ptr++;
    byte mod = ((mod_reg_rm & 192) >> 6);
    byte reg = ((mod_reg_rm & 56) >> 3);
    byte rm = ((mod_reg_rm & 7) >> 0);
    ModRM_SIB_disp m = (ModRM_SIB_disp) {.reg = reg, .mem = rm};
    uint32 disp_bytes = 0;
    switch (mod) {
        case 0:;
        {
            if (rm == 5) {
                disp_bytes = 4;
                m.rip_relative = 1;
            }
        }
        break;
        case 1:;
        disp_bytes = 1;
        break;
        case 2:;
        disp_bytes = 4;
        break;
        case 3:;
        {
            m.mem_is_register = 1;
            *pptr = ptr;
            return m;
        }
    }
    if (rm == 4) {
        byte sib = *ptr++;
        byte ss = ((sib & 192) >> 6);
        byte index = ((sib & 56) >> 3);
        byte base = ((sib & 7) >> 0);
        m.scale = (1 << ss);
        if (index == 4) m.scale = 0;
        m.mem = base;
        m.idx = index;
    }
    m.disp = read_signed_imm(&ptr, disp_bytes);
    *pptr = ptr;
    return m;
}
static string stringify_overload1(x64_Instruction inst, StringBuilder* sb) {
    char* opr = to_string_overload9(inst.operation);
    sb_append_overload1(sb, opr);
    for (int32 it = 0; it < 4; it++) {
        x64_Operand op = inst.operands[it];
        if (op.kind == 0) break;
        sb_append_overload1(sb, (it == 0) ? " " : ", ");
        stringify_overload2(op, sb);
    }
    return to_string_overload8(sb);
}
static char hex_nibble(byte val) {
    Array digits = (Array) { .length = 16, .data = (char[]){'0', '1', '2', '3', '4', '5', '6', '7', '8', '9', 'a', 'b', 'c', 'd', 'e', 'f'}};
    return ((char*)digits.data)[(val & 15)];
}
static string hex_overload1(uint64 val) {
    return hex_overload2(val, temp_builder());
}
static string hex_overload2(uint64 val, StringBuilder* sb) {
    int32 it = 7;
    while (it >= 0) {
        byte b = (byte)((val >> (8 * it)) & 255);
        char lo = hex_nibble((b & 15));
        char hi = hex_nibble((b >> 4));
        sb_append_overload3(sb, hi);
        sb_append_overload3(sb, lo);
        it--;
    }
    return to_string_overload8(sb);
}
static void imm(StringBuilder* sb, uint64 imm) {
    if (imm == 0) {
        sb_append_overload1(sb, "0x0");
    } else {
        sb_append_overload1(sb, "0x");
        sb_append_overload2(sb, trim_start_overload2(hex_overload1(imm), '0'));
    }
}
static string stringify_overload2(x64_Operand op, StringBuilder* sb) {
    /* local procedure */;
    char* asm_types[9] = {"", "byte", "word", 0, "dword", 0, 0, 0, "qword"};
    switch (op.kind) {
        case 0:;
        break;
        case 1:;
        imm(sb, (uint64)op.imm_value);
        break;
        case 2:;
        sb_append_overload1(sb, to_string_overload10(op.reg));
        break;
        case 3:;
        char* typ = asm_types[op.opsize];
        sb_append_overload1(sb, typ);
        sb_append_overload1(sb, " ");
        sb_append_overload1(sb, "ptr [");
        sb_append_overload1(sb, to_string_overload10(op.reg));
        if (op.scale != 0) {
            sb_append_overload1(sb, " + ");
            sb_append_overload1(sb, to_string_overload10(op.index));
            sb_append_overload1(sb, "*");
            sb_append_overload2(sb, to_string_overload1(op.scale));
        }
        if (op.imm_value != 0) {
            sb_append_overload1(sb, " + ");
            imm(sb, (uint64)op.imm_value);
        }
        sb_append_overload1(sb, "]");
        break;
    }
    return to_string_overload8(sb);
}
static x64_BasicBlock* find_block(x64_Procedure* proc, byte* start) {
    for (int32 it = 0; it < list_length((void*)(proc->blocks)); it++) {
        if (proc->blocks[it]->start == start) return proc->blocks[it];
    }
    return 0;
}
static x64_Procedure procedure_cfg(byte* entryptr) {
    x64_Procedure proc = (x64_Procedure) {0};
    proc.blocks = list_create_overload1(sizeof(x64_BasicBlock*));
    proc.call_addresses = list_create_overload1(sizeof(byte*));
    proc.start_block = make_bb(&proc, entryptr);
    return proc;
}
static void print_proc(x64_Procedure* proc) {
    printf("Procedure at %p\n", proc->start_block->start);
    for (int32 it = 0; it < list_length((void*)(proc->blocks)); it++) {
        printf("%s%d%s", "Block", it, "\n");
        print_block(proc->blocks[it]);
    }
}
static void print_block(x64_BasicBlock* bb) {
    byte* ptr = bb->start;
    while (1) {
        byte* start = ptr;
        x64_Instruction inst = decode_instruction(&ptr);
        uint32 instbytes = (uint32)(ptr - start);
        printf("%p", start);
        for (int32 it = 0; it < 15; it++) if (it < instbytes) printf(" %02x", start[it]); else printf("   ");
        char* dasm = stringify_overload1(inst, temp_builder()).chars;
        printf("%s\n", dasm);
        switch (inst.operation) {
            case 14:;
            case 31:;
            case 21:;
            return;
        }
    }
}
static x64_BasicBlock* make_bb(x64_Procedure* proc, byte* entryptr) {
    x64_BasicBlock* bb = find_block(proc, entryptr);
    if (bb) return bb;
    bb = malloc(sizeof(x64_BasicBlock));
    *bb = (x64_BasicBlock) {.start = entryptr};
    list_add((void**)(&proc->blocks), &bb);
    byte* ptr = entryptr;
    while (1) {
        byte* inst_start = ptr;
        x64_Instruction inst = decode_instruction(&ptr);
        uint32 instbytes = (uint32)(ptr - inst_start);
        byte* jmp_addr = (ptr + inst.operands[0].imm_value);
        switch (inst.operation) {
            case 14:;
            {
                bb->bb_next = make_bb(proc, ptr);
                bb->bb_jump = make_bb(proc, jmp_addr);
                return bb;
            }
            case 31:;
            {
                bb->bb_jump = make_bb(proc, jmp_addr);
                return bb;
            }
            case 21:;
            return bb;
            case 30:;
            list_add((void**)(&proc->call_addresses), &jmp_addr);
            break;
        }
    }
}
static void test(Array code, char* exp_str) {
    byte* ptr = code.data;
    x64_Instruction inst = decode_instruction(&ptr);
    char* got_str = stringify_overload1(inst, temp_builder()).chars;
    uint32 failed = strcmp(got_str, exp_str);
    if (failed) printf("\033[1;31m"); else printf("\033[1;32m");
    for (int32 it = 0; it < 15; it++) {
        if (it < code.length) printf(" %02x", ((byte*)code.data)[it]); else printf("   ");
    }
    printf(" %-50s %-50s %s\n", exp_str, got_str, failed ? "Failed" : "Passed");
    printf("\033[0m");
    total_test_count++;
    total_failed += failed ? 1 : 0;
}
static void run_tests() {
    // static decl;
    // static decl;
    printf("%s", "Running Tests...\n");
    /* local procedure */;
    test((Array)(Array) { .length = 2, .data = (byte[]){3, 7}}, "add eax, dword ptr [rdi]");
    test((Array)(Array) { .length = 4, .data = (byte[]){103, 72, 1, 56}}, "add qword ptr [eax], rdi");
    test((Array)(Array) { .length = 11, .data = (byte[]){199, 132, 36, 212, 0, 0, 0, 0, 0, 0, 0}}, "mov dword ptr [rsp + 0xd4], 0x0");
    printf("%s", "Grp11 - MOV 0xC7\n");
    test((Array)(Array) { .length = 6, .data = (byte[]){199, 0, 16, 0, 0, 0}}, "mov dword ptr [rax], 0x10");
    test((Array)(Array) { .length = 7, .data = (byte[]){199, 64, 1, 16, 0, 0, 0}}, "mov dword ptr [rax + 0x1], 0x10");
    test((Array)(Array) { .length = 7, .data = (byte[]){199, 4, 24, 16, 0, 0, 0}}, "mov dword ptr [rax + rbx*1], 0x10");
    test((Array)(Array) { .length = 8, .data = (byte[]){199, 68, 24, 1, 16, 0, 0, 0}}, "mov dword ptr [rax + rbx*1 + 0x1], 0x10");
    test((Array)(Array) { .length = 8, .data = (byte[]){199, 68, 88, 1, 16, 0, 0, 0}}, "mov dword ptr [rax + rbx*2 + 0x1], 0x10");
    printf("%s", "Grp11 - MOV 0xC6\n");
    test((Array)(Array) { .length = 3, .data = (byte[]){198, 0, 16}}, "mov byte ptr [rax], 0x10");
    test((Array)(Array) { .length = 4, .data = (byte[]){198, 64, 1, 16}}, "mov byte ptr [rax + 0x1], 0x10");
    test((Array)(Array) { .length = 4, .data = (byte[]){198, 4, 24, 16}}, "mov byte ptr [rax + rbx*1], 0x10");
    test((Array)(Array) { .length = 5, .data = (byte[]){198, 68, 24, 1, 16}}, "mov byte ptr [rax + rbx*1 + 0x1], 0x10");
    test((Array)(Array) { .length = 5, .data = (byte[]){198, 68, 88, 1, 16}}, "mov byte ptr [rax + rbx*2 + 0x1], 0x10");
    printf("%s", "\n");
    test((Array)(Array) { .length = 2, .data = (byte[]){0, 216}}, "add al, bl");
    test((Array)(Array) { .length = 3, .data = (byte[]){72, 1, 224}}, "add rax, rsp");
    test((Array)(Array) { .length = 2, .data = (byte[]){1, 224}}, "add eax, esp");
    test((Array)(Array) { .length = 2, .data = (byte[]){2, 0}}, "add al, byte ptr [rax]");
    test((Array)(Array) { .length = 2, .data = (byte[]){3, 0}}, "add eax, dword ptr [rax]");
    test((Array)(Array) { .length = 2, .data = (byte[]){4, 16}}, "add al, 0x10");
    test((Array)(Array) { .length = 4, .data = (byte[]){102, 5, 0, 16}}, "add ax, 0x1000");
    test((Array)(Array) { .length = 5, .data = (byte[]){5, 0, 16, 0, 0}}, "add eax, 0x1000");
    test((Array)(Array) { .length = 2, .data = (byte[]){16, 216}}, "adc al, bl");
    test((Array)(Array) { .length = 3, .data = (byte[]){72, 17, 224}}, "adc rax, rsp");
    test((Array)(Array) { .length = 2, .data = (byte[]){17, 224}}, "adc eax, esp");
    test((Array)(Array) { .length = 2, .data = (byte[]){18, 0}}, "adc al, byte ptr [rax]");
    test((Array)(Array) { .length = 2, .data = (byte[]){19, 0}}, "adc eax, dword ptr [rax]");
    test((Array)(Array) { .length = 2, .data = (byte[]){20, 16}}, "adc al, 0x10");
    test((Array)(Array) { .length = 4, .data = (byte[]){102, 21, 0, 16}}, "adc ax, 0x1000");
    test((Array)(Array) { .length = 5, .data = (byte[]){21, 0, 16, 0, 0}}, "adc eax, 0x1000");
    test((Array)(Array) { .length = 2, .data = (byte[]){32, 216}}, "and al, bl");
    test((Array)(Array) { .length = 3, .data = (byte[]){72, 33, 224}}, "and rax, rsp");
    test((Array)(Array) { .length = 2, .data = (byte[]){33, 224}}, "and eax, esp");
    test((Array)(Array) { .length = 2, .data = (byte[]){34, 0}}, "and al, byte ptr [rax]");
    test((Array)(Array) { .length = 2, .data = (byte[]){35, 0}}, "and eax, dword ptr [rax]");
    test((Array)(Array) { .length = 2, .data = (byte[]){36, 16}}, "and al, 0x10");
    test((Array)(Array) { .length = 4, .data = (byte[]){102, 37, 0, 16}}, "and ax, 0x1000");
    test((Array)(Array) { .length = 5, .data = (byte[]){37, 0, 16, 0, 0}}, "and eax, 0x1000");
    test((Array)(Array) { .length = 2, .data = (byte[]){48, 216}}, "xor al, bl");
    test((Array)(Array) { .length = 3, .data = (byte[]){72, 49, 224}}, "xor rax, rsp");
    test((Array)(Array) { .length = 2, .data = (byte[]){49, 224}}, "xor eax, esp");
    test((Array)(Array) { .length = 2, .data = (byte[]){50, 0}}, "xor al, byte ptr [rax]");
    test((Array)(Array) { .length = 2, .data = (byte[]){51, 0}}, "xor eax, dword ptr [rax]");
    test((Array)(Array) { .length = 2, .data = (byte[]){52, 16}}, "xor al, 0x10");
    test((Array)(Array) { .length = 4, .data = (byte[]){102, 53, 0, 16}}, "xor ax, 0x1000");
    test((Array)(Array) { .length = 5, .data = (byte[]){53, 0, 16, 0, 0}}, "xor eax, 0x1000");
    test((Array)(Array) { .length = 2, .data = (byte[]){8, 216}}, "or al, bl");
    test((Array)(Array) { .length = 3, .data = (byte[]){72, 9, 224}}, "or rax, rsp");
    test((Array)(Array) { .length = 2, .data = (byte[]){9, 224}}, "or eax, esp");
    test((Array)(Array) { .length = 2, .data = (byte[]){10, 0}}, "or al, byte ptr [rax]");
    test((Array)(Array) { .length = 2, .data = (byte[]){11, 0}}, "or eax, dword ptr [rax]");
    test((Array)(Array) { .length = 2, .data = (byte[]){12, 16}}, "or al, 0x10");
    test((Array)(Array) { .length = 4, .data = (byte[]){102, 13, 0, 16}}, "or ax, 0x1000");
    test((Array)(Array) { .length = 5, .data = (byte[]){13, 0, 16, 0, 0}}, "or eax, 0x1000");
    test((Array)(Array) { .length = 2, .data = (byte[]){24, 216}}, "sbb al, bl");
    test((Array)(Array) { .length = 3, .data = (byte[]){72, 25, 224}}, "sbb rax, rsp");
    test((Array)(Array) { .length = 2, .data = (byte[]){25, 224}}, "sbb eax, esp");
    test((Array)(Array) { .length = 2, .data = (byte[]){26, 0}}, "sbb al, byte ptr [rax]");
    test((Array)(Array) { .length = 2, .data = (byte[]){27, 0}}, "sbb eax, dword ptr [rax]");
    test((Array)(Array) { .length = 2, .data = (byte[]){28, 16}}, "sbb al, 0x10");
    test((Array)(Array) { .length = 4, .data = (byte[]){102, 29, 0, 16}}, "sbb ax, 0x1000");
    test((Array)(Array) { .length = 5, .data = (byte[]){29, 0, 16, 0, 0}}, "sbb eax, 0x1000");
    test((Array)(Array) { .length = 2, .data = (byte[]){40, 216}}, "sub al, bl");
    test((Array)(Array) { .length = 3, .data = (byte[]){72, 41, 224}}, "sub rax, rsp");
    test((Array)(Array) { .length = 2, .data = (byte[]){41, 224}}, "sub eax, esp");
    test((Array)(Array) { .length = 2, .data = (byte[]){42, 0}}, "sub al, byte ptr [rax]");
    test((Array)(Array) { .length = 2, .data = (byte[]){43, 0}}, "sub eax, dword ptr [rax]");
    test((Array)(Array) { .length = 2, .data = (byte[]){44, 16}}, "sub al, 0x10");
    test((Array)(Array) { .length = 4, .data = (byte[]){102, 45, 0, 16}}, "sub ax, 0x1000");
    test((Array)(Array) { .length = 5, .data = (byte[]){45, 0, 16, 0, 0}}, "sub eax, 0x1000");
    test((Array)(Array) { .length = 2, .data = (byte[]){56, 216}}, "cmp al, bl");
    test((Array)(Array) { .length = 3, .data = (byte[]){72, 57, 224}}, "cmp rax, rsp");
    test((Array)(Array) { .length = 2, .data = (byte[]){57, 224}}, "cmp eax, esp");
    test((Array)(Array) { .length = 2, .data = (byte[]){58, 0}}, "cmp al, byte ptr [rax]");
    test((Array)(Array) { .length = 2, .data = (byte[]){59, 0}}, "cmp eax, dword ptr [rax]");
    test((Array)(Array) { .length = 2, .data = (byte[]){60, 16}}, "cmp al, 0x10");
    test((Array)(Array) { .length = 4, .data = (byte[]){102, 61, 0, 16}}, "cmp ax, 0x1000");
    test((Array)(Array) { .length = 5, .data = (byte[]){61, 0, 16, 0, 0}}, "cmp eax, 0x1000");
    printf("%s", "Grp1 - Immediates\n");
    test((Array)(Array) { .length = 3, .data = (byte[]){128, 193, 255}}, "add cl, 0xff");
    test((Array)(Array) { .length = 6, .data = (byte[]){129, 194, 0, 16, 0, 16}}, "add edx, 0x10001000");
    test((Array)(Array) { .length = 3, .data = (byte[]){131, 195, 1}}, "add ebx, 0x1");
    test((Array)(Array) { .length = 3, .data = (byte[]){128, 201, 255}}, "or cl, 0xff");
    test((Array)(Array) { .length = 6, .data = (byte[]){129, 202, 0, 16, 0, 16}}, "or edx, 0x10001000");
    test((Array)(Array) { .length = 3, .data = (byte[]){131, 203, 1}}, "or ebx, 0x1");
    test((Array)(Array) { .length = 3, .data = (byte[]){128, 209, 255}}, "adc cl, 0xff");
    test((Array)(Array) { .length = 6, .data = (byte[]){129, 210, 0, 16, 0, 16}}, "adc edx, 0x10001000");
    test((Array)(Array) { .length = 3, .data = (byte[]){131, 211, 1}}, "adc ebx, 0x1");
    test((Array)(Array) { .length = 3, .data = (byte[]){128, 217, 255}}, "sbb cl, 0xff");
    test((Array)(Array) { .length = 6, .data = (byte[]){129, 218, 0, 16, 0, 16}}, "sbb edx, 0x10001000");
    test((Array)(Array) { .length = 3, .data = (byte[]){131, 219, 1}}, "sbb ebx, 0x1");
    test((Array)(Array) { .length = 3, .data = (byte[]){128, 225, 255}}, "and cl, 0xff");
    test((Array)(Array) { .length = 6, .data = (byte[]){129, 226, 0, 16, 0, 16}}, "and edx, 0x10001000");
    test((Array)(Array) { .length = 3, .data = (byte[]){131, 227, 1}}, "and ebx, 0x1");
    test((Array)(Array) { .length = 3, .data = (byte[]){128, 233, 255}}, "sub cl, 0xff");
    test((Array)(Array) { .length = 6, .data = (byte[]){129, 234, 0, 16, 0, 16}}, "sub edx, 0x10001000");
    test((Array)(Array) { .length = 3, .data = (byte[]){131, 235, 1}}, "sub ebx, 0x1");
    test((Array)(Array) { .length = 3, .data = (byte[]){128, 241, 255}}, "xor cl, 0xff");
    test((Array)(Array) { .length = 6, .data = (byte[]){129, 242, 0, 16, 0, 16}}, "xor edx, 0x10001000");
    test((Array)(Array) { .length = 3, .data = (byte[]){131, 243, 1}}, "xor ebx, 0x1");
    test((Array)(Array) { .length = 3, .data = (byte[]){128, 249, 255}}, "cmp cl, 0xff");
    test((Array)(Array) { .length = 6, .data = (byte[]){129, 250, 0, 16, 0, 16}}, "cmp edx, 0x10001000");
    test((Array)(Array) { .length = 3, .data = (byte[]){131, 251, 1}}, "cmp ebx, 0x1");
    printf("%s", "Interupts\n");
    test((Array)(Array) { .length = 1, .data = (byte[]){204}}, "int3");
    test((Array)(Array) { .length = 2, .data = (byte[]){205, 1}}, "int 0x1");
    printf("%s", "test instruction\n");
    test((Array)(Array) { .length = 2, .data = (byte[]){168, 18}}, "test al, 0x12");
    test((Array)(Array) { .length = 4, .data = (byte[]){102, 169, 0, 16}}, "test ax, 0x1000");
    test((Array)(Array) { .length = 5, .data = (byte[]){169, 0, 16, 0, 0}}, "test eax, 0x1000");
    test((Array)(Array) { .length = 6, .data = (byte[]){72, 169, 0, 16, 0, 0}}, "test rax, 0x1000");
    printf("%s", "MOV immediate byte into byte register - 0xB0 to 0xB7\n");
    test((Array)(Array) { .length = 2, .data = (byte[]){176, 10}}, "mov al, 0xa");
    test((Array)(Array) { .length = 2, .data = (byte[]){177, 11}}, "mov cl, 0xb");
    test((Array)(Array) { .length = 2, .data = (byte[]){178, 12}}, "mov dl, 0xc");
    test((Array)(Array) { .length = 2, .data = (byte[]){179, 13}}, "mov bl, 0xd");
    test((Array)(Array) { .length = 2, .data = (byte[]){180, 14}}, "mov ah, 0xe");
    test((Array)(Array) { .length = 2, .data = (byte[]){181, 15}}, "mov ch, 0xf");
    test((Array)(Array) { .length = 2, .data = (byte[]){182, 171}}, "mov dh, 0xab");
    test((Array)(Array) { .length = 2, .data = (byte[]){183, 205}}, "mov bh, 0xcd");
    test((Array)(Array) { .length = 3, .data = (byte[]){65, 176, 10}}, "mov r8b, 0xa");
    test((Array)(Array) { .length = 3, .data = (byte[]){65, 177, 11}}, "mov r9b, 0xb");
    test((Array)(Array) { .length = 3, .data = (byte[]){65, 178, 12}}, "mov r10b, 0xc");
    test((Array)(Array) { .length = 3, .data = (byte[]){65, 179, 13}}, "mov r11b, 0xd");
    test((Array)(Array) { .length = 3, .data = (byte[]){65, 180, 14}}, "mov r12b, 0xe");
    test((Array)(Array) { .length = 3, .data = (byte[]){65, 181, 15}}, "mov r13b, 0xf");
    test((Array)(Array) { .length = 3, .data = (byte[]){65, 182, 171}}, "mov r14b, 0xab");
    test((Array)(Array) { .length = 3, .data = (byte[]){65, 183, 205}}, "mov r15b, 0xcd");
    printf("%s", "MOV immediate into register - 0xB8 to 0xBF\n");
    test((Array)(Array) { .length = 5, .data = (byte[]){184, 10, 0, 0, 0}}, "mov eax, 0xa");
    test((Array)(Array) { .length = 5, .data = (byte[]){185, 11, 0, 0, 0}}, "mov ecx, 0xb");
    test((Array)(Array) { .length = 5, .data = (byte[]){186, 12, 0, 0, 0}}, "mov edx, 0xc");
    test((Array)(Array) { .length = 5, .data = (byte[]){187, 13, 0, 0, 0}}, "mov ebx, 0xd");
    test((Array)(Array) { .length = 5, .data = (byte[]){188, 14, 0, 0, 0}}, "mov esp, 0xe");
    test((Array)(Array) { .length = 5, .data = (byte[]){189, 15, 0, 0, 0}}, "mov ebp, 0xf");
    test((Array)(Array) { .length = 5, .data = (byte[]){190, 171, 0, 0, 0}}, "mov esi, 0xab");
    test((Array)(Array) { .length = 5, .data = (byte[]){191, 205, 0, 0, 0}}, "mov edi, 0xcd");
    test((Array)(Array) { .length = 6, .data = (byte[]){65, 184, 10, 0, 0, 0}}, "mov r8d, 0xa");
    test((Array)(Array) { .length = 6, .data = (byte[]){65, 185, 11, 0, 0, 0}}, "mov r9d, 0xb");
    test((Array)(Array) { .length = 6, .data = (byte[]){65, 186, 12, 0, 0, 0}}, "mov r10d, 0xc");
    test((Array)(Array) { .length = 6, .data = (byte[]){65, 187, 13, 0, 0, 0}}, "mov r11d, 0xd");
    test((Array)(Array) { .length = 6, .data = (byte[]){65, 188, 14, 0, 0, 0}}, "mov r12d, 0xe");
    test((Array)(Array) { .length = 6, .data = (byte[]){65, 189, 15, 0, 0, 0}}, "mov r13d, 0xf");
    test((Array)(Array) { .length = 6, .data = (byte[]){65, 190, 171, 0, 0, 0}}, "mov r14d, 0xab");
    test((Array)(Array) { .length = 6, .data = (byte[]){65, 191, 205, 0, 0, 0}}, "mov r15d, 0xcd");
    test((Array)(Array) { .length = 10, .data = (byte[]){73, 184, 0, 10, 0, 0, 0, 0, 0, 0}}, "mov r8, 0xa00");
    test((Array)(Array) { .length = 10, .data = (byte[]){73, 185, 0, 11, 0, 0, 0, 0, 0, 0}}, "mov r9, 0xb00");
    test((Array)(Array) { .length = 10, .data = (byte[]){73, 186, 0, 12, 0, 0, 0, 0, 0, 0}}, "mov r10, 0xc00");
    test((Array)(Array) { .length = 10, .data = (byte[]){73, 187, 0, 13, 0, 0, 0, 0, 0, 0}}, "mov r11, 0xd00");
    test((Array)(Array) { .length = 10, .data = (byte[]){73, 188, 0, 14, 0, 0, 0, 0, 0, 0}}, "mov r12, 0xe00");
    test((Array)(Array) { .length = 10, .data = (byte[]){73, 189, 0, 15, 0, 0, 0, 0, 0, 0}}, "mov r13, 0xf00");
    test((Array)(Array) { .length = 10, .data = (byte[]){73, 190, 0, 171, 0, 0, 0, 0, 0, 0}}, "mov r14, 0xab00");
    test((Array)(Array) { .length = 10, .data = (byte[]){73, 191, 0, 205, 0, 0, 0, 0, 0, 0}}, "mov r15, 0xcd00");
    printf("%s", "XCHG - 0x86, 0x87\n");
    test((Array)(Array) { .length = 2, .data = (byte[]){134, 233}}, "xchg cl, ch");
    test((Array)(Array) { .length = 3, .data = (byte[]){134, 99, 1}}, "xchg byte ptr [rbx + 0x1], ah");
    test((Array)(Array) { .length = 3, .data = (byte[]){77, 135, 200}}, "xchg r8, r9");
    test((Array)(Array) { .length = 2, .data = (byte[]){135, 8}}, "xchg dword ptr [rax], ecx");
    test((Array)(Array) { .length = 5, .data = (byte[]){103, 135, 76, 208, 15}}, "xchg dword ptr [eax + edx*8 + 0xf], ecx");
    printf("%s", "XCHG eax - 0x91 to 0x97\n");
    test((Array)(Array) { .length = 1, .data = (byte[]){145}}, "xchg eax, ecx");
    test((Array)(Array) { .length = 1, .data = (byte[]){146}}, "xchg eax, edx");
    test((Array)(Array) { .length = 1, .data = (byte[]){147}}, "xchg eax, ebx");
    test((Array)(Array) { .length = 1, .data = (byte[]){148}}, "xchg eax, esp");
    test((Array)(Array) { .length = 1, .data = (byte[]){149}}, "xchg eax, ebp");
    test((Array)(Array) { .length = 1, .data = (byte[]){150}}, "xchg eax, esi");
    test((Array)(Array) { .length = 1, .data = (byte[]){151}}, "xchg eax, edi");
    test((Array)(Array) { .length = 2, .data = (byte[]){65, 144}}, "xchg eax, r8d");
    test((Array)(Array) { .length = 2, .data = (byte[]){65, 145}}, "xchg eax, r9d");
    test((Array)(Array) { .length = 2, .data = (byte[]){65, 146}}, "xchg eax, r10d");
    test((Array)(Array) { .length = 2, .data = (byte[]){65, 147}}, "xchg eax, r11d");
    test((Array)(Array) { .length = 2, .data = (byte[]){65, 148}}, "xchg eax, r12d");
    test((Array)(Array) { .length = 2, .data = (byte[]){65, 149}}, "xchg eax, r13d");
    test((Array)(Array) { .length = 2, .data = (byte[]){65, 150}}, "xchg eax, r14d");
    test((Array)(Array) { .length = 2, .data = (byte[]){65, 151}}, "xchg eax, r15d");
    printf("%s", "XCHG rax - 0x91 to 0x97\n");
    test((Array)(Array) { .length = 2, .data = (byte[]){72, 145}}, "xchg rax, rcx");
    test((Array)(Array) { .length = 2, .data = (byte[]){72, 146}}, "xchg rax, rdx");
    test((Array)(Array) { .length = 2, .data = (byte[]){72, 147}}, "xchg rax, rbx");
    test((Array)(Array) { .length = 2, .data = (byte[]){72, 148}}, "xchg rax, rsp");
    test((Array)(Array) { .length = 2, .data = (byte[]){72, 149}}, "xchg rax, rbp");
    test((Array)(Array) { .length = 2, .data = (byte[]){72, 150}}, "xchg rax, rsi");
    test((Array)(Array) { .length = 2, .data = (byte[]){72, 151}}, "xchg rax, rdi");
    test((Array)(Array) { .length = 2, .data = (byte[]){73, 144}}, "xchg rax, r8");
    test((Array)(Array) { .length = 2, .data = (byte[]){73, 145}}, "xchg rax, r9");
    test((Array)(Array) { .length = 2, .data = (byte[]){73, 146}}, "xchg rax, r10");
    test((Array)(Array) { .length = 2, .data = (byte[]){73, 147}}, "xchg rax, r11");
    test((Array)(Array) { .length = 2, .data = (byte[]){73, 148}}, "xchg rax, r12");
    test((Array)(Array) { .length = 2, .data = (byte[]){73, 149}}, "xchg rax, r13");
    test((Array)(Array) { .length = 2, .data = (byte[]){73, 150}}, "xchg rax, r14");
    test((Array)(Array) { .length = 2, .data = (byte[]){73, 151}}, "xchg rax, r15");
    printf("%s", "XCHG ax - 0x91 to 0x97\n");
    test((Array)(Array) { .length = 2, .data = (byte[]){102, 144}}, "xchg ax, ax");
    test((Array)(Array) { .length = 2, .data = (byte[]){102, 145}}, "xchg ax, cx");
    test((Array)(Array) { .length = 2, .data = (byte[]){102, 146}}, "xchg ax, dx");
    test((Array)(Array) { .length = 2, .data = (byte[]){102, 147}}, "xchg ax, bx");
    test((Array)(Array) { .length = 2, .data = (byte[]){102, 148}}, "xchg ax, sp");
    test((Array)(Array) { .length = 2, .data = (byte[]){102, 149}}, "xchg ax, bp");
    test((Array)(Array) { .length = 2, .data = (byte[]){102, 150}}, "xchg ax, si");
    test((Array)(Array) { .length = 2, .data = (byte[]){102, 151}}, "xchg ax, di");
    test((Array)(Array) { .length = 3, .data = (byte[]){102, 65, 144}}, "xchg ax, r8w");
    test((Array)(Array) { .length = 3, .data = (byte[]){102, 65, 145}}, "xchg ax, r9w");
    test((Array)(Array) { .length = 3, .data = (byte[]){102, 65, 146}}, "xchg ax, r10w");
    test((Array)(Array) { .length = 3, .data = (byte[]){102, 65, 147}}, "xchg ax, r11w");
    test((Array)(Array) { .length = 3, .data = (byte[]){102, 65, 148}}, "xchg ax, r12w");
    test((Array)(Array) { .length = 3, .data = (byte[]){102, 65, 149}}, "xchg ax, r13w");
    test((Array)(Array) { .length = 3, .data = (byte[]){102, 65, 150}}, "xchg ax, r14w");
    test((Array)(Array) { .length = 3, .data = (byte[]){102, 65, 151}}, "xchg ax, r15w");
    printf("%s", "call\n");
    test((Array)(Array) { .length = 5, .data = (byte[]){232, 16, 0, 0, 0}}, "call 0x10");
    test((Array)(Array) { .length = 7, .data = (byte[]){138, 4, 37, 1, 0, 0, 0}}, "mov al, byte ptr ds:0x1");
    printf("%s", "push/pop 0x50 to 0x5F\n");
    test((Array)(Array) { .length = 1, .data = (byte[]){80}}, "push rax");
    test((Array)(Array) { .length = 1, .data = (byte[]){81}}, "push rcx");
    test((Array)(Array) { .length = 1, .data = (byte[]){82}}, "push rdx");
    test((Array)(Array) { .length = 1, .data = (byte[]){83}}, "push rbx");
    test((Array)(Array) { .length = 1, .data = (byte[]){84}}, "push rsp");
    test((Array)(Array) { .length = 1, .data = (byte[]){85}}, "push rbp");
    test((Array)(Array) { .length = 1, .data = (byte[]){86}}, "push rsi");
    test((Array)(Array) { .length = 1, .data = (byte[]){87}}, "push rdi");
    test((Array)(Array) { .length = 2, .data = (byte[]){65, 80}}, "push r8");
    test((Array)(Array) { .length = 2, .data = (byte[]){65, 81}}, "push r9");
    test((Array)(Array) { .length = 2, .data = (byte[]){65, 82}}, "push r10");
    test((Array)(Array) { .length = 2, .data = (byte[]){65, 83}}, "push r11");
    test((Array)(Array) { .length = 2, .data = (byte[]){65, 84}}, "push r12");
    test((Array)(Array) { .length = 2, .data = (byte[]){65, 85}}, "push r13");
    test((Array)(Array) { .length = 2, .data = (byte[]){65, 86}}, "push r14");
    test((Array)(Array) { .length = 2, .data = (byte[]){65, 87}}, "push r15");
    test((Array)(Array) { .length = 2, .data = (byte[]){102, 80}}, "push ax");
    test((Array)(Array) { .length = 2, .data = (byte[]){102, 81}}, "push cx");
    test((Array)(Array) { .length = 2, .data = (byte[]){102, 82}}, "push dx");
    test((Array)(Array) { .length = 2, .data = (byte[]){102, 83}}, "push bx");
    test((Array)(Array) { .length = 2, .data = (byte[]){102, 84}}, "push sp");
    test((Array)(Array) { .length = 2, .data = (byte[]){102, 85}}, "push bp");
    test((Array)(Array) { .length = 2, .data = (byte[]){102, 86}}, "push si");
    test((Array)(Array) { .length = 2, .data = (byte[]){102, 87}}, "push di");
    test((Array)(Array) { .length = 3, .data = (byte[]){102, 65, 80}}, "push r8w");
    test((Array)(Array) { .length = 3, .data = (byte[]){102, 65, 81}}, "push r9w");
    test((Array)(Array) { .length = 3, .data = (byte[]){102, 65, 82}}, "push r10w");
    test((Array)(Array) { .length = 3, .data = (byte[]){102, 65, 83}}, "push r11w");
    test((Array)(Array) { .length = 3, .data = (byte[]){102, 65, 84}}, "push r12w");
    test((Array)(Array) { .length = 3, .data = (byte[]){102, 65, 85}}, "push r13w");
    test((Array)(Array) { .length = 3, .data = (byte[]){102, 65, 86}}, "push r14w");
    test((Array)(Array) { .length = 3, .data = (byte[]){102, 65, 87}}, "push r15w");
    test((Array)(Array) { .length = 1, .data = (byte[]){88}}, "pop rax");
    test((Array)(Array) { .length = 1, .data = (byte[]){89}}, "pop rcx");
    test((Array)(Array) { .length = 1, .data = (byte[]){90}}, "pop rdx");
    test((Array)(Array) { .length = 1, .data = (byte[]){91}}, "pop rbx");
    test((Array)(Array) { .length = 1, .data = (byte[]){92}}, "pop rsp");
    test((Array)(Array) { .length = 1, .data = (byte[]){93}}, "pop rbp");
    test((Array)(Array) { .length = 1, .data = (byte[]){94}}, "pop rsi");
    test((Array)(Array) { .length = 1, .data = (byte[]){95}}, "pop rdi");
    test((Array)(Array) { .length = 2, .data = (byte[]){65, 88}}, "pop r8");
    test((Array)(Array) { .length = 2, .data = (byte[]){65, 89}}, "pop r9");
    test((Array)(Array) { .length = 2, .data = (byte[]){65, 90}}, "pop r10");
    test((Array)(Array) { .length = 2, .data = (byte[]){65, 91}}, "pop r11");
    test((Array)(Array) { .length = 2, .data = (byte[]){65, 92}}, "pop r12");
    test((Array)(Array) { .length = 2, .data = (byte[]){65, 93}}, "pop r13");
    test((Array)(Array) { .length = 2, .data = (byte[]){65, 94}}, "pop r14");
    test((Array)(Array) { .length = 2, .data = (byte[]){65, 95}}, "pop r15");
    test((Array)(Array) { .length = 2, .data = (byte[]){102, 88}}, "pop ax");
    test((Array)(Array) { .length = 2, .data = (byte[]){102, 89}}, "pop cx");
    test((Array)(Array) { .length = 2, .data = (byte[]){102, 90}}, "pop dx");
    test((Array)(Array) { .length = 2, .data = (byte[]){102, 91}}, "pop bx");
    test((Array)(Array) { .length = 2, .data = (byte[]){102, 92}}, "pop sp");
    test((Array)(Array) { .length = 2, .data = (byte[]){102, 93}}, "pop bp");
    test((Array)(Array) { .length = 2, .data = (byte[]){102, 94}}, "pop si");
    test((Array)(Array) { .length = 2, .data = (byte[]){102, 95}}, "pop di");
    test((Array)(Array) { .length = 3, .data = (byte[]){102, 65, 88}}, "pop r8w");
    test((Array)(Array) { .length = 3, .data = (byte[]){102, 65, 89}}, "pop r9w");
    test((Array)(Array) { .length = 3, .data = (byte[]){102, 65, 90}}, "pop r10w");
    test((Array)(Array) { .length = 3, .data = (byte[]){102, 65, 91}}, "pop r11w");
    test((Array)(Array) { .length = 3, .data = (byte[]){102, 65, 92}}, "pop r12w");
    test((Array)(Array) { .length = 3, .data = (byte[]){102, 65, 93}}, "pop r13w");
    test((Array)(Array) { .length = 3, .data = (byte[]){102, 65, 94}}, "pop r14w");
    test((Array)(Array) { .length = 3, .data = (byte[]){102, 65, 95}}, "pop r15w");
    printf("%s", "\n");
    test((Array)(Array) { .length = 3, .data = (byte[]){107, 193, 1}}, "imul eax, ecx, 0x1");
    test((Array)(Array) { .length = 6, .data = (byte[]){105, 193, 128, 0, 0, 0}}, "imul eax, ecx, 0x80");
    test((Array)(Array) { .length = 3, .data = (byte[]){107, 193, 255}}, "imul eax, ecx, 0xffffffff");
    printf("Summary: %d/%d tests passed. Failed: %d\n", (total_test_count - total_failed), total_test_count, total_failed);
}
static void __static_init() {
    temps = alloc_temp_builders(8);
}
int main(int argc, char** argv) {
    __static_init();
    __main();
    return 0;
}