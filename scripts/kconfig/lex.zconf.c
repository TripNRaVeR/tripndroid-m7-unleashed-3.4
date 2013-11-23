
#line 3 "scripts/kconfig/lex.zconf.c"

#define  YY_INT_ALIGNED short int


#define yy_create_buffer zconf_create_buffer
#define yy_delete_buffer zconf_delete_buffer
#define yy_flex_debug zconf_flex_debug
#define yy_init_buffer zconf_init_buffer
#define yy_flush_buffer zconf_flush_buffer
#define yy_load_buffer_state zconf_load_buffer_state
#define yy_switch_to_buffer zconf_switch_to_buffer
#define yyin zconfin
#define yyleng zconfleng
#define yylex zconflex
#define yylineno zconflineno
#define yyout zconfout
#define yyrestart zconfrestart
#define yytext zconftext
#define yywrap zconfwrap
#define yyalloc zconfalloc
#define yyrealloc zconfrealloc
#define yyfree zconffree

#define FLEX_SCANNER
#define YY_FLEX_MAJOR_VERSION 2
#define YY_FLEX_MINOR_VERSION 5
#define YY_FLEX_SUBMINOR_VERSION 35
#if YY_FLEX_SUBMINOR_VERSION > 0
#define FLEX_BETA
#endif


#include <stdio.h>
#include <string.h>
#include <errno.h>
#include <stdlib.h>



#ifndef FLEXINT_H
#define FLEXINT_H


#if defined (__STDC_VERSION__) && __STDC_VERSION__ >= 199901L

#ifndef __STDC_LIMIT_MACROS
#define __STDC_LIMIT_MACROS 1
#endif

#include <inttypes.h>
typedef int8_t flex_int8_t;
typedef uint8_t flex_uint8_t;
typedef int16_t flex_int16_t;
typedef uint16_t flex_uint16_t;
typedef int32_t flex_int32_t;
typedef uint32_t flex_uint32_t;
#else
typedef signed char flex_int8_t;
typedef short int flex_int16_t;
typedef int flex_int32_t;
typedef unsigned char flex_uint8_t; 
typedef unsigned short int flex_uint16_t;
typedef unsigned int flex_uint32_t;

#ifndef INT8_MIN
#define INT8_MIN               (-128)
#endif
#ifndef INT16_MIN
#define INT16_MIN              (-32767-1)
#endif
#ifndef INT32_MIN
#define INT32_MIN              (-2147483647-1)
#endif
#ifndef INT8_MAX
#define INT8_MAX               (127)
#endif
#ifndef INT16_MAX
#define INT16_MAX              (32767)
#endif
#ifndef INT32_MAX
#define INT32_MAX              (2147483647)
#endif
#ifndef UINT8_MAX
#define UINT8_MAX              (255U)
#endif
#ifndef UINT16_MAX
#define UINT16_MAX             (65535U)
#endif
#ifndef UINT32_MAX
#define UINT32_MAX             (4294967295U)
#endif

#endif 

#endif 

#ifdef __cplusplus

#define YY_USE_CONST

#else	

#if defined (__STDC__)

#define YY_USE_CONST

#endif	
#endif	

#ifdef YY_USE_CONST
#define yyconst const
#else
#define yyconst
#endif

#define YY_NULL 0

#define YY_SC_TO_UI(c) ((unsigned int) (unsigned char) c)

#define BEGIN (yy_start) = 1 + 2 *

#define YY_START (((yy_start) - 1) / 2)
#define YYSTATE YY_START

#define YY_STATE_EOF(state) (YY_END_OF_BUFFER + state + 1)

#define YY_NEW_FILE zconfrestart(zconfin  )

#define YY_END_OF_BUFFER_CHAR 0

#ifndef YY_BUF_SIZE
#ifdef __ia64__
#define YY_BUF_SIZE 32768
#else
#define YY_BUF_SIZE 16384
#endif 
#endif

#define YY_STATE_BUF_SIZE   ((YY_BUF_SIZE + 2) * sizeof(yy_state_type))

#ifndef YY_TYPEDEF_YY_BUFFER_STATE
#define YY_TYPEDEF_YY_BUFFER_STATE
typedef struct yy_buffer_state *YY_BUFFER_STATE;
#endif

extern int zconfleng;

extern FILE *zconfin, *zconfout;

#define EOB_ACT_CONTINUE_SCAN 0
#define EOB_ACT_END_OF_FILE 1
#define EOB_ACT_LAST_MATCH 2

    #define YY_LESS_LINENO(n)
    
#define yyless(n) \
	do \
		{ \
		 \
        int yyless_macro_arg = (n); \
        YY_LESS_LINENO(yyless_macro_arg);\
		*yy_cp = (yy_hold_char); \
		YY_RESTORE_YY_MORE_OFFSET \
		(yy_c_buf_p) = yy_cp = yy_bp + yyless_macro_arg - YY_MORE_ADJ; \
		YY_DO_BEFORE_ACTION;  \
		} \
	while ( 0 )

#define unput(c) yyunput( c, (yytext_ptr)  )

#ifndef YY_TYPEDEF_YY_SIZE_T
#define YY_TYPEDEF_YY_SIZE_T
typedef size_t yy_size_t;
#endif

#ifndef YY_STRUCT_YY_BUFFER_STATE
#define YY_STRUCT_YY_BUFFER_STATE
struct yy_buffer_state
	{
	FILE *yy_input_file;

	char *yy_ch_buf;		
	char *yy_buf_pos;		

	yy_size_t yy_buf_size;

	int yy_n_chars;

	int yy_is_our_buffer;

	int yy_is_interactive;

	int yy_at_bol;

    int yy_bs_lineno; 
    int yy_bs_column; 
    
	int yy_fill_buffer;

	int yy_buffer_status;

#define YY_BUFFER_NEW 0
#define YY_BUFFER_NORMAL 1
#define YY_BUFFER_EOF_PENDING 2

	};
#endif 

static size_t yy_buffer_stack_top = 0; 
static size_t yy_buffer_stack_max = 0; 
static YY_BUFFER_STATE * yy_buffer_stack = 0; 

#define YY_CURRENT_BUFFER ( (yy_buffer_stack) \
                          ? (yy_buffer_stack)[(yy_buffer_stack_top)] \
                          : NULL)

#define YY_CURRENT_BUFFER_LVALUE (yy_buffer_stack)[(yy_buffer_stack_top)]

static char yy_hold_char;
static int yy_n_chars;		
int zconfleng;

static char *yy_c_buf_p = (char *) 0;
static int yy_init = 0;		
static int yy_start = 0;	

static int yy_did_buffer_switch_on_eof;

void zconfrestart (FILE *input_file  );
void zconf_switch_to_buffer (YY_BUFFER_STATE new_buffer  );
YY_BUFFER_STATE zconf_create_buffer (FILE *file,int size  );
void zconf_delete_buffer (YY_BUFFER_STATE b  );
void zconf_flush_buffer (YY_BUFFER_STATE b  );
void zconfpush_buffer_state (YY_BUFFER_STATE new_buffer  );
void zconfpop_buffer_state (void );

static void zconfensure_buffer_stack (void );
static void zconf_load_buffer_state (void );
static void zconf_init_buffer (YY_BUFFER_STATE b,FILE *file  );

#define YY_FLUSH_BUFFER zconf_flush_buffer(YY_CURRENT_BUFFER )

YY_BUFFER_STATE zconf_scan_buffer (char *base,yy_size_t size  );
YY_BUFFER_STATE zconf_scan_string (yyconst char *yy_str  );
YY_BUFFER_STATE zconf_scan_bytes (yyconst char *bytes,int len  );

void *zconfalloc (yy_size_t  );
void *zconfrealloc (void *,yy_size_t  );
void zconffree (void *  );

#define yy_new_buffer zconf_create_buffer

#define yy_set_interactive(is_interactive) \
	{ \
	if ( ! YY_CURRENT_BUFFER ){ \
        zconfensure_buffer_stack (); \
		YY_CURRENT_BUFFER_LVALUE =    \
            zconf_create_buffer(zconfin,YY_BUF_SIZE ); \
	} \
	YY_CURRENT_BUFFER_LVALUE->yy_is_interactive = is_interactive; \
	}

#define yy_set_bol(at_bol) \
	{ \
	if ( ! YY_CURRENT_BUFFER ){\
        zconfensure_buffer_stack (); \
		YY_CURRENT_BUFFER_LVALUE =    \
            zconf_create_buffer(zconfin,YY_BUF_SIZE ); \
	} \
	YY_CURRENT_BUFFER_LVALUE->yy_at_bol = at_bol; \
	}

#define YY_AT_BOL() (YY_CURRENT_BUFFER_LVALUE->yy_at_bol)


#define zconfwrap(n) 1
#define YY_SKIP_YYWRAP

typedef unsigned char YY_CHAR;

FILE *zconfin = (FILE *) 0, *zconfout = (FILE *) 0;

typedef int yy_state_type;

extern int zconflineno;

int zconflineno = 1;

extern char *zconftext;
#define yytext_ptr zconftext
static yyconst flex_int16_t yy_nxt[][17] =
    {
    {
        0,    0,    0,    0,    0,    0,    0,    0,    0,    0,
        0,    0,    0,    0,    0,    0,    0
    },

    {
       11,   12,   13,   14,   12,   12,   15,   12,   12,   12,
       12,   12,   12,   12,   12,   12,   12
    },

    {
       11,   12,   13,   14,   12,   12,   15,   12,   12,   12,
       12,   12,   12,   12,   12,   12,   12
    },

    {
       11,   16,   16,   17,   16,   16,   16,   16,   16,   16,
       16,   16,   16,   18,   16,   16,   16
    },

    {
       11,   16,   16,   17,   16,   16,   16,   16,   16,   16,
       16,   16,   16,   18,   16,   16,   16

    },

    {
       11,   19,   20,   21,   19,   19,   19,   19,   19,   19,
       19,   19,   19,   19,   19,   19,   19
    },

    {
       11,   19,   20,   21,   19,   19,   19,   19,   19,   19,
       19,   19,   19,   19,   19,   19,   19
    },

    {
       11,   22,   22,   23,   22,   24,   22,   22,   24,   22,
       22,   22,   22,   22,   22,   25,   22
    },

    {
       11,   22,   22,   23,   22,   24,   22,   22,   24,   22,
       22,   22,   22,   22,   22,   25,   22
    },

    {
       11,   26,   26,   27,   28,   29,   30,   31,   29,   32,
       33,   34,   35,   35,   36,   37,   38

    },

    {
       11,   26,   26,   27,   28,   29,   30,   31,   29,   32,
       33,   34,   35,   35,   36,   37,   38
    },

    {
      -11,  -11,  -11,  -11,  -11,  -11,  -11,  -11,  -11,  -11,
      -11,  -11,  -11,  -11,  -11,  -11,  -11
    },

    {
       11,  -12,  -12,  -12,  -12,  -12,  -12,  -12,  -12,  -12,
      -12,  -12,  -12,  -12,  -12,  -12,  -12
    },

    {
       11,  -13,   39,   40,  -13,  -13,   41,  -13,  -13,  -13,
      -13,  -13,  -13,  -13,  -13,  -13,  -13
    },

    {
       11,  -14,  -14,  -14,  -14,  -14,  -14,  -14,  -14,  -14,
      -14,  -14,  -14,  -14,  -14,  -14,  -14

    },

    {
       11,   42,   42,   43,   42,   42,   42,   42,   42,   42,
       42,   42,   42,   42,   42,   42,   42
    },

    {
       11,  -16,  -16,  -16,  -16,  -16,  -16,  -16,  -16,  -16,
      -16,  -16,  -16,  -16,  -16,  -16,  -16
    },

    {
       11,  -17,  -17,  -17,  -17,  -17,  -17,  -17,  -17,  -17,
      -17,  -17,  -17,  -17,  -17,  -17,  -17
    },

    {
       11,  -18,  -18,  -18,  -18,  -18,  -18,  -18,  -18,  -18,
      -18,  -18,  -18,   44,  -18,  -18,  -18
    },

    {
       11,   45,   45,  -19,   45,   45,   45,   45,   45,   45,
       45,   45,   45,   45,   45,   45,   45

    },

    {
       11,  -20,   46,   47,  -20,  -20,  -20,  -20,  -20,  -20,
      -20,  -20,  -20,  -20,  -20,  -20,  -20
    },

    {
       11,   48,  -21,  -21,   48,   48,   48,   48,   48,   48,
       48,   48,   48,   48,   48,   48,   48
    },

    {
       11,   49,   49,   50,   49,  -22,   49,   49,  -22,   49,
       49,   49,   49,   49,   49,  -22,   49
    },

    {
       11,  -23,  -23,  -23,  -23,  -23,  -23,  -23,  -23,  -23,
      -23,  -23,  -23,  -23,  -23,  -23,  -23
    },

    {
       11,  -24,  -24,  -24,  -24,  -24,  -24,  -24,  -24,  -24,
      -24,  -24,  -24,  -24,  -24,  -24,  -24

    },

    {
       11,   51,   51,   52,   51,   51,   51,   51,   51,   51,
       51,   51,   51,   51,   51,   51,   51
    },

    {
       11,  -26,  -26,  -26,  -26,  -26,  -26,  -26,  -26,  -26,
      -26,  -26,  -26,  -26,  -26,  -26,  -26
    },

    {
       11,  -27,  -27,  -27,  -27,  -27,  -27,  -27,  -27,  -27,
      -27,  -27,  -27,  -27,  -27,  -27,  -27
    },

    {
       11,  -28,  -28,  -28,  -28,  -28,  -28,  -28,  -28,  -28,
      -28,  -28,  -28,  -28,   53,  -28,  -28
    },

    {
       11,  -29,  -29,  -29,  -29,  -29,  -29,  -29,  -29,  -29,
      -29,  -29,  -29,  -29,  -29,  -29,  -29

    },

    {
       11,   54,   54,  -30,   54,   54,   54,   54,   54,   54,
       54,   54,   54,   54,   54,   54,   54
    },

    {
       11,  -31,  -31,  -31,  -31,  -31,  -31,   55,  -31,  -31,
      -31,  -31,  -31,  -31,  -31,  -31,  -31
    },

    {
       11,  -32,  -32,  -32,  -32,  -32,  -32,  -32,  -32,  -32,
      -32,  -32,  -32,  -32,  -32,  -32,  -32
    },

    {
       11,  -33,  -33,  -33,  -33,  -33,  -33,  -33,  -33,  -33,
      -33,  -33,  -33,  -33,  -33,  -33,  -33
    },

    {
       11,  -34,  -34,  -34,  -34,  -34,  -34,  -34,  -34,  -34,
      -34,   56,   57,   57,  -34,  -34,  -34

    },

    {
       11,  -35,  -35,  -35,  -35,  -35,  -35,  -35,  -35,  -35,
      -35,   57,   57,   57,  -35,  -35,  -35
    },

    {
       11,  -36,  -36,  -36,  -36,  -36,  -36,  -36,  -36,  -36,
      -36,  -36,  -36,  -36,  -36,  -36,  -36
    },

    {
       11,  -37,  -37,   58,  -37,  -37,  -37,  -37,  -37,  -37,
      -37,  -37,  -37,  -37,  -37,  -37,  -37
    },

    {
       11,  -38,  -38,  -38,  -38,  -38,  -38,  -38,  -38,  -38,
      -38,  -38,  -38,  -38,  -38,  -38,   59
    },

    {
       11,  -39,   39,   40,  -39,  -39,   41,  -39,  -39,  -39,
      -39,  -39,  -39,  -39,  -39,  -39,  -39

    },

    {
       11,  -40,  -40,  -40,  -40,  -40,  -40,  -40,  -40,  -40,
      -40,  -40,  -40,  -40,  -40,  -40,  -40
    },

    {
       11,   42,   42,   43,   42,   42,   42,   42,   42,   42,
       42,   42,   42,   42,   42,   42,   42
    },

    {
       11,   42,   42,   43,   42,   42,   42,   42,   42,   42,
       42,   42,   42,   42,   42,   42,   42
    },

    {
       11,  -43,  -43,  -43,  -43,  -43,  -43,  -43,  -43,  -43,
      -43,  -43,  -43,  -43,  -43,  -43,  -43
    },

    {
       11,  -44,  -44,  -44,  -44,  -44,  -44,  -44,  -44,  -44,
      -44,  -44,  -44,   44,  -44,  -44,  -44

    },

    {
       11,   45,   45,  -45,   45,   45,   45,   45,   45,   45,
       45,   45,   45,   45,   45,   45,   45
    },

    {
       11,  -46,   46,   47,  -46,  -46,  -46,  -46,  -46,  -46,
      -46,  -46,  -46,  -46,  -46,  -46,  -46
    },

    {
       11,   48,  -47,  -47,   48,   48,   48,   48,   48,   48,
       48,   48,   48,   48,   48,   48,   48
    },

    {
       11,  -48,  -48,  -48,  -48,  -48,  -48,  -48,  -48,  -48,
      -48,  -48,  -48,  -48,  -48,  -48,  -48
    },

    {
       11,   49,   49,   50,   49,  -49,   49,   49,  -49,   49,
       49,   49,   49,   49,   49,  -49,   49

    },

    {
       11,  -50,  -50,  -50,  -50,  -50,  -50,  -50,  -50,  -50,
      -50,  -50,  -50,  -50,  -50,  -50,  -50
    },

    {
       11,  -51,  -51,   52,  -51,  -51,  -51,  -51,  -51,  -51,
      -51,  -51,  -51,  -51,  -51,  -51,  -51
    },

    {
       11,  -52,  -52,  -52,  -52,  -52,  -52,  -52,  -52,  -52,
      -52,  -52,  -52,  -52,  -52,  -52,  -52
    },

    {
       11,  -53,  -53,  -53,  -53,  -53,  -53,  -53,  -53,  -53,
      -53,  -53,  -53,  -53,  -53,  -53,  -53
    },

    {
       11,   54,   54,  -54,   54,   54,   54,   54,   54,   54,
       54,   54,   54,   54,   54,   54,   54

    },

    {
       11,  -55,  -55,  -55,  -55,  -55,  -55,  -55,  -55,  -55,
      -55,  -55,  -55,  -55,  -55,  -55,  -55
    },

    {
       11,  -56,  -56,  -56,  -56,  -56,  -56,  -56,  -56,  -56,
      -56,   60,   57,   57,  -56,  -56,  -56
    },

    {
       11,  -57,  -57,  -57,  -57,  -57,  -57,  -57,  -57,  -57,
      -57,   57,   57,   57,  -57,  -57,  -57
    },

    {
       11,  -58,  -58,  -58,  -58,  -58,  -58,  -58,  -58,  -58,
      -58,  -58,  -58,  -58,  -58,  -58,  -58
    },

    {
       11,  -59,  -59,  -59,  -59,  -59,  -59,  -59,  -59,  -59,
      -59,  -59,  -59,  -59,  -59,  -59,  -59

    },

    {
       11,  -60,  -60,  -60,  -60,  -60,  -60,  -60,  -60,  -60,
      -60,   57,   57,   57,  -60,  -60,  -60
    },

    } ;

static yy_state_type yy_get_previous_state (void );
static yy_state_type yy_try_NUL_trans (yy_state_type current_state  );
static int yy_get_next_buffer (void );
static void yy_fatal_error (yyconst char msg[]  );

#define YY_DO_BEFORE_ACTION \
	(yytext_ptr) = yy_bp; \
	zconfleng = (size_t) (yy_cp - yy_bp); \
	(yy_hold_char) = *yy_cp; \
	*yy_cp = '\0'; \
	(yy_c_buf_p) = yy_cp;

#define YY_NUM_RULES 33
#define YY_END_OF_BUFFER 34
struct yy_trans_info
	{
	flex_int32_t yy_verify;
	flex_int32_t yy_nxt;
	};
static yyconst flex_int16_t yy_accept[61] =
    {   0,
        0,    0,    0,    0,    0,    0,    0,    0,    0,    0,
       34,    5,    4,    2,    3,    7,    8,    6,   32,   29,
       31,   24,   28,   27,   26,   22,   17,   13,   16,   20,
       22,   11,   12,   19,   19,   14,   22,   22,    4,    2,
        3,    3,    1,    6,   32,   29,   31,   30,   24,   23,
       26,   25,   15,   20,    9,   19,   19,   21,   10,   18
    } ;

static yyconst flex_int32_t yy_ec[256] =
    {   0,
        1,    1,    1,    1,    1,    1,    1,    1,    2,    3,
        1,    1,    1,    1,    1,    1,    1,    1,    1,    1,
        1,    1,    1,    1,    1,    1,    1,    1,    1,    1,
        1,    2,    4,    5,    6,    1,    1,    7,    8,    9,
       10,    1,    1,    1,   11,   12,   12,   13,   13,   13,
       13,   13,   13,   13,   13,   13,   13,    1,    1,    1,
       14,    1,    1,    1,   13,   13,   13,   13,   13,   13,
       13,   13,   13,   13,   13,   13,   13,   13,   13,   13,
       13,   13,   13,   13,   13,   13,   13,   13,   13,   13,
        1,   15,    1,    1,   13,    1,   13,   13,   13,   13,

       13,   13,   13,   13,   13,   13,   13,   13,   13,   13,
       13,   13,   13,   13,   13,   13,   13,   13,   13,   13,
       13,   13,    1,   16,    1,    1,    1,    1,    1,    1,
        1,    1,    1,    1,    1,    1,    1,    1,    1,    1,
        1,    1,    1,    1,    1,    1,    1,    1,    1,    1,
        1,    1,    1,    1,    1,    1,    1,    1,    1,    1,
        1,    1,    1,    1,    1,    1,    1,    1,    1,    1,
        1,    1,    1,    1,    1,    1,    1,    1,    1,    1,
        1,    1,    1,    1,    1,    1,    1,    1,    1,    1,
        1,    1,    1,    1,    1,    1,    1,    1,    1,    1,

        1,    1,    1,    1,    1,    1,    1,    1,    1,    1,
        1,    1,    1,    1,    1,    1,    1,    1,    1,    1,
        1,    1,    1,    1,    1,    1,    1,    1,    1,    1,
        1,    1,    1,    1,    1,    1,    1,    1,    1,    1,
        1,    1,    1,    1,    1,    1,    1,    1,    1,    1,
        1,    1,    1,    1,    1
    } ;

extern int zconf_flex_debug;
int zconf_flex_debug = 0;

#define REJECT reject_used_but_not_detected
#define yymore() yymore_used_but_not_detected
#define YY_MORE_ADJ 0
#define YY_RESTORE_YY_MORE_OFFSET
char *zconftext;
#define YY_NO_INPUT 1

/*
 * Copyright (C) 2002 Roman Zippel <zippel@linux-m68k.org>
 * Released under the terms of the GNU GPL v2.0.
 */

#include <limits.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <unistd.h>

#define LKC_DIRECT_LINK
#include "lkc.h"

#define START_STRSIZE	16

static struct {
	struct file *file;
	int lineno;
} current_pos;

static char *text;
static int text_size, text_asize;

struct buffer {
        struct buffer *parent;
        YY_BUFFER_STATE state;
};

struct buffer *current_buf;

static int last_ts, first_ts;

static void zconf_endhelp(void);
static void zconf_endfile(void);

static void new_string(void)
{
	text = malloc(START_STRSIZE);
	text_asize = START_STRSIZE;
	text_size = 0;
	*text = 0;
}

static void append_string(const char *str, int size)
{
	int new_size = text_size + size + 1;
	if (new_size > text_asize) {
		new_size += START_STRSIZE - 1;
		new_size &= -START_STRSIZE;
		text = realloc(text, new_size);
		text_asize = new_size;
	}
	memcpy(text + text_size, str, size);
	text_size += size;
	text[text_size] = 0;
}

static void alloc_string(const char *str, int size)
{
	text = malloc(size + 1);
	memcpy(text, str, size);
	text[size] = 0;
}

#define INITIAL 0
#define COMMAND 1
#define HELP 2
#define STRING 3
#define PARAM 4

#ifndef YY_NO_UNISTD_H
#include <unistd.h>
#endif

#ifndef YY_EXTRA_TYPE
#define YY_EXTRA_TYPE void *
#endif

static int yy_init_globals (void );


int zconflex_destroy (void );

int zconfget_debug (void );

void zconfset_debug (int debug_flag  );

YY_EXTRA_TYPE zconfget_extra (void );

void zconfset_extra (YY_EXTRA_TYPE user_defined  );

FILE *zconfget_in (void );

void zconfset_in  (FILE * in_str  );

FILE *zconfget_out (void );

void zconfset_out  (FILE * out_str  );

int zconfget_leng (void );

char *zconfget_text (void );

int zconfget_lineno (void );

void zconfset_lineno (int line_number  );


#ifndef YY_SKIP_YYWRAP
#ifdef __cplusplus
extern "C" int zconfwrap (void );
#else
extern int zconfwrap (void );
#endif
#endif

    static void yyunput (int c,char *buf_ptr  );
    
#ifndef yytext_ptr
static void yy_flex_strncpy (char *,yyconst char *,int );
#endif

#ifdef YY_NEED_STRLEN
static int yy_flex_strlen (yyconst char * );
#endif

#ifndef YY_NO_INPUT

#ifdef __cplusplus
static int yyinput (void );
#else
static int input (void );
#endif

#endif

#ifndef YY_READ_BUF_SIZE
#ifdef __ia64__
#define YY_READ_BUF_SIZE 16384
#else
#define YY_READ_BUF_SIZE 8192
#endif 
#endif

#ifndef ECHO
#define ECHO do { if (fwrite( zconftext, zconfleng, 1, zconfout )) {} } while (0)
#endif

#ifndef YY_INPUT
#define YY_INPUT(buf,result,max_size) \
	errno=0; \
	while ( (result = read( fileno(zconfin), (char *) buf, max_size )) < 0 ) \
	{ \
		if( errno != EINTR) \
		{ \
			YY_FATAL_ERROR( "input in flex scanner failed" ); \
			break; \
		} \
		errno=0; \
		clearerr(zconfin); \
	}\
\

#endif

#ifndef yyterminate
#define yyterminate() return YY_NULL
#endif

#ifndef YY_START_STACK_INCR
#define YY_START_STACK_INCR 25
#endif

#ifndef YY_FATAL_ERROR
#define YY_FATAL_ERROR(msg) yy_fatal_error( msg )
#endif


#ifndef YY_DECL
#define YY_DECL_IS_OURS 1

extern int zconflex (void);

#define YY_DECL int zconflex (void)
#endif 

#ifndef YY_USER_ACTION
#define YY_USER_ACTION
#endif

#ifndef YY_BREAK
#define YY_BREAK break;
#endif

#define YY_RULE_SETUP \
	YY_USER_ACTION

YY_DECL
{
	register yy_state_type yy_current_state;
	register char *yy_cp, *yy_bp;
	register int yy_act;
    
	int str = 0;
	int ts, i;

	if ( !(yy_init) )
		{
		(yy_init) = 1;

#ifdef YY_USER_INIT
		YY_USER_INIT;
#endif

		if ( ! (yy_start) )
			(yy_start) = 1;	

		if ( ! zconfin )
			zconfin = stdin;

		if ( ! zconfout )
			zconfout = stdout;

		if ( ! YY_CURRENT_BUFFER ) {
			zconfensure_buffer_stack ();
			YY_CURRENT_BUFFER_LVALUE =
				zconf_create_buffer(zconfin,YY_BUF_SIZE );
		}

		zconf_load_buffer_state( );
		}

	while ( 1 )		
		{
		yy_cp = (yy_c_buf_p);

		
		*yy_cp = (yy_hold_char);

		yy_bp = yy_cp;

		yy_current_state = (yy_start);
yy_match:
		while ( (yy_current_state = yy_nxt[yy_current_state][ yy_ec[YY_SC_TO_UI(*yy_cp)]  ]) > 0 )
			++yy_cp;

		yy_current_state = -yy_current_state;

yy_find_action:
		yy_act = yy_accept[yy_current_state];

		YY_DO_BEFORE_ACTION;

do_action:	

		switch ( yy_act )
	{ 
case 1:
case 2:
YY_RULE_SETUP
{
	current_file->lineno++;
	return T_EOL;
}
	YY_BREAK
case 3:
YY_RULE_SETUP

	YY_BREAK
case 4:
YY_RULE_SETUP
{
	BEGIN(COMMAND);
}
	YY_BREAK
case 5:
YY_RULE_SETUP
{
	unput(zconftext[0]);
	BEGIN(COMMAND);
}
	YY_BREAK

case 6:
YY_RULE_SETUP
{
		struct kconf_id *id = kconf_id_lookup(zconftext, zconfleng);
		BEGIN(PARAM);
		current_pos.file = current_file;
		current_pos.lineno = current_file->lineno;
		if (id && id->flags & TF_COMMAND) {
			zconflval.id = id;
			return id->token;
		}
		alloc_string(zconftext, zconfleng);
		zconflval.string = text;
		return T_WORD;
	}
	YY_BREAK
case 7:
YY_RULE_SETUP

	YY_BREAK
case 8:
YY_RULE_SETUP
{
		BEGIN(INITIAL);
		current_file->lineno++;
		return T_EOL;
	}
	YY_BREAK

case 9:
YY_RULE_SETUP
return T_AND;
	YY_BREAK
case 10:
YY_RULE_SETUP
return T_OR;
	YY_BREAK
case 11:
YY_RULE_SETUP
return T_OPEN_PAREN;
	YY_BREAK
case 12:
YY_RULE_SETUP
return T_CLOSE_PAREN;
	YY_BREAK
case 13:
YY_RULE_SETUP
return T_NOT;
	YY_BREAK
case 14:
YY_RULE_SETUP
return T_EQUAL;
	YY_BREAK
case 15:
YY_RULE_SETUP
return T_UNEQUAL;
	YY_BREAK
case 16:
YY_RULE_SETUP
{
		str = zconftext[0];
		new_string();
		BEGIN(STRING);
	}
	YY_BREAK
case 17:
YY_RULE_SETUP
BEGIN(INITIAL); current_file->lineno++; return T_EOL;
	YY_BREAK
case 18:
YY_RULE_SETUP
	YY_BREAK
case 19:
YY_RULE_SETUP
{
		struct kconf_id *id = kconf_id_lookup(zconftext, zconfleng);
		if (id && id->flags & TF_PARAM) {
			zconflval.id = id;
			return id->token;
		}
		alloc_string(zconftext, zconfleng);
		zconflval.string = text;
		return T_WORD;
	}
	YY_BREAK
case 20:
YY_RULE_SETUP
	YY_BREAK
case 21:
YY_RULE_SETUP
current_file->lineno++;
	YY_BREAK
case 22:
YY_RULE_SETUP

	YY_BREAK
case YY_STATE_EOF(PARAM):
{
		BEGIN(INITIAL);
	}
	YY_BREAK

case 23:
*yy_cp = (yy_hold_char); 
(yy_c_buf_p) = yy_cp -= 1;
YY_DO_BEFORE_ACTION; 
YY_RULE_SETUP
{
		append_string(zconftext, zconfleng);
		zconflval.string = text;
		return T_WORD_QUOTE;
	}
	YY_BREAK
case 24:
YY_RULE_SETUP
{
		append_string(zconftext, zconfleng);
	}
	YY_BREAK
case 25:
*yy_cp = (yy_hold_char); 
(yy_c_buf_p) = yy_cp -= 1;
YY_DO_BEFORE_ACTION; 
YY_RULE_SETUP
{
		append_string(zconftext + 1, zconfleng - 1);
		zconflval.string = text;
		return T_WORD_QUOTE;
	}
	YY_BREAK
case 26:
YY_RULE_SETUP
{
		append_string(zconftext + 1, zconfleng - 1);
	}
	YY_BREAK
case 27:
YY_RULE_SETUP
{
		if (str == zconftext[0]) {
			BEGIN(PARAM);
			zconflval.string = text;
			return T_WORD_QUOTE;
		} else
			append_string(zconftext, 1);
	}
	YY_BREAK
case 28:
YY_RULE_SETUP
{
		printf("%s:%d:warning: multi-line strings not supported\n", zconf_curname(), zconf_lineno());
		current_file->lineno++;
		BEGIN(INITIAL);
		return T_EOL;
	}
	YY_BREAK
case YY_STATE_EOF(STRING):
{
		BEGIN(INITIAL);
	}
	YY_BREAK

case 29:
YY_RULE_SETUP
{
		ts = 0;
		for (i = 0; i < zconfleng; i++) {
			if (zconftext[i] == '\t')
				ts = (ts & ~7) + 8;
			else
				ts++;
		}
		last_ts = ts;
		if (first_ts) {
			if (ts < first_ts) {
				zconf_endhelp();
				return T_HELPTEXT;
			}
			ts -= first_ts;
			while (ts > 8) {
				append_string("        ", 8);
				ts -= 8;
			}
			append_string("        ", ts);
		}
	}
	YY_BREAK
case 30:
*yy_cp = (yy_hold_char); 
(yy_c_buf_p) = yy_cp -= 1;
YY_DO_BEFORE_ACTION; 
YY_RULE_SETUP
{
		current_file->lineno++;
		zconf_endhelp();
		return T_HELPTEXT;
	}
	YY_BREAK
case 31:
YY_RULE_SETUP
{
		current_file->lineno++;
		append_string("\n", 1);
	}
	YY_BREAK
case 32:
YY_RULE_SETUP
{
		while (zconfleng) {
			if ((zconftext[zconfleng-1] != ' ') && (zconftext[zconfleng-1] != '\t'))
				break;
			zconfleng--;
		}
		append_string(zconftext, zconfleng);
		if (!first_ts)
			first_ts = last_ts;
	}
	YY_BREAK
case YY_STATE_EOF(HELP):
{
		zconf_endhelp();
		return T_HELPTEXT;
	}
	YY_BREAK

case YY_STATE_EOF(INITIAL):
case YY_STATE_EOF(COMMAND):
{
	if (current_file) {
		zconf_endfile();
		return T_EOL;
	}
	fclose(zconfin);
	yyterminate();
}
	YY_BREAK
case 33:
YY_RULE_SETUP
YY_FATAL_ERROR( "flex scanner jammed" );
	YY_BREAK

	case YY_END_OF_BUFFER:
		{
		
		int yy_amount_of_matched_text = (int) (yy_cp - (yytext_ptr)) - 1;

		
		*yy_cp = (yy_hold_char);
		YY_RESTORE_YY_MORE_OFFSET

		if ( YY_CURRENT_BUFFER_LVALUE->yy_buffer_status == YY_BUFFER_NEW )
			{
			(yy_n_chars) = YY_CURRENT_BUFFER_LVALUE->yy_n_chars;
			YY_CURRENT_BUFFER_LVALUE->yy_input_file = zconfin;
			YY_CURRENT_BUFFER_LVALUE->yy_buffer_status = YY_BUFFER_NORMAL;
			}

		if ( (yy_c_buf_p) <= &YY_CURRENT_BUFFER_LVALUE->yy_ch_buf[(yy_n_chars)] )
			{ 
			yy_state_type yy_next_state;

			(yy_c_buf_p) = (yytext_ptr) + yy_amount_of_matched_text;

			yy_current_state = yy_get_previous_state(  );


			yy_next_state = yy_try_NUL_trans( yy_current_state );

			yy_bp = (yytext_ptr) + YY_MORE_ADJ;

			if ( yy_next_state )
				{
				
				yy_cp = ++(yy_c_buf_p);
				yy_current_state = yy_next_state;
				goto yy_match;
				}

			else
				{
				yy_cp = (yy_c_buf_p);
				goto yy_find_action;
				}
			}

		else switch ( yy_get_next_buffer(  ) )
			{
			case EOB_ACT_END_OF_FILE:
				{
				(yy_did_buffer_switch_on_eof) = 0;

				if ( zconfwrap( ) )
					{
					(yy_c_buf_p) = (yytext_ptr) + YY_MORE_ADJ;

					yy_act = YY_STATE_EOF(YY_START);
					goto do_action;
					}

				else
					{
					if ( ! (yy_did_buffer_switch_on_eof) )
						YY_NEW_FILE;
					}
				break;
				}

			case EOB_ACT_CONTINUE_SCAN:
				(yy_c_buf_p) =
					(yytext_ptr) + yy_amount_of_matched_text;

				yy_current_state = yy_get_previous_state(  );

				yy_cp = (yy_c_buf_p);
				yy_bp = (yytext_ptr) + YY_MORE_ADJ;
				goto yy_match;

			case EOB_ACT_LAST_MATCH:
				(yy_c_buf_p) =
				&YY_CURRENT_BUFFER_LVALUE->yy_ch_buf[(yy_n_chars)];

				yy_current_state = yy_get_previous_state(  );

				yy_cp = (yy_c_buf_p);
				yy_bp = (yytext_ptr) + YY_MORE_ADJ;
				goto yy_find_action;
			}
		break;
		}

	default:
		YY_FATAL_ERROR(
			"fatal flex scanner internal error--no action found" );
	} 
		} 
} 

static int yy_get_next_buffer (void)
{
    	register char *dest = YY_CURRENT_BUFFER_LVALUE->yy_ch_buf;
	register char *source = (yytext_ptr);
	register int number_to_move, i;
	int ret_val;

	if ( (yy_c_buf_p) > &YY_CURRENT_BUFFER_LVALUE->yy_ch_buf[(yy_n_chars) + 1] )
		YY_FATAL_ERROR(
		"fatal flex scanner internal error--end of buffer missed" );

	if ( YY_CURRENT_BUFFER_LVALUE->yy_fill_buffer == 0 )
		{ 
		if ( (yy_c_buf_p) - (yytext_ptr) - YY_MORE_ADJ == 1 )
			{
			return EOB_ACT_END_OF_FILE;
			}

		else
			{
			return EOB_ACT_LAST_MATCH;
			}
		}

	

	
	number_to_move = (int) ((yy_c_buf_p) - (yytext_ptr)) - 1;

	for ( i = 0; i < number_to_move; ++i )
		*(dest++) = *(source++);

	if ( YY_CURRENT_BUFFER_LVALUE->yy_buffer_status == YY_BUFFER_EOF_PENDING )
		YY_CURRENT_BUFFER_LVALUE->yy_n_chars = (yy_n_chars) = 0;

	else
		{
			int num_to_read =
			YY_CURRENT_BUFFER_LVALUE->yy_buf_size - number_to_move - 1;

		while ( num_to_read <= 0 )
			{ 

			
			YY_BUFFER_STATE b = YY_CURRENT_BUFFER;

			int yy_c_buf_p_offset =
				(int) ((yy_c_buf_p) - b->yy_ch_buf);

			if ( b->yy_is_our_buffer )
				{
				int new_size = b->yy_buf_size * 2;

				if ( new_size <= 0 )
					b->yy_buf_size += b->yy_buf_size / 8;
				else
					b->yy_buf_size *= 2;

				b->yy_ch_buf = (char *)
					
					zconfrealloc((void *) b->yy_ch_buf,b->yy_buf_size + 2  );
				}
			else
				
				b->yy_ch_buf = 0;

			if ( ! b->yy_ch_buf )
				YY_FATAL_ERROR(
				"fatal error - scanner input buffer overflow" );

			(yy_c_buf_p) = &b->yy_ch_buf[yy_c_buf_p_offset];

			num_to_read = YY_CURRENT_BUFFER_LVALUE->yy_buf_size -
						number_to_move - 1;

			}

		if ( num_to_read > YY_READ_BUF_SIZE )
			num_to_read = YY_READ_BUF_SIZE;

		
		YY_INPUT( (&YY_CURRENT_BUFFER_LVALUE->yy_ch_buf[number_to_move]),
			(yy_n_chars), (size_t) num_to_read );

		YY_CURRENT_BUFFER_LVALUE->yy_n_chars = (yy_n_chars);
		}

	if ( (yy_n_chars) == 0 )
		{
		if ( number_to_move == YY_MORE_ADJ )
			{
			ret_val = EOB_ACT_END_OF_FILE;
			zconfrestart(zconfin  );
			}

		else
			{
			ret_val = EOB_ACT_LAST_MATCH;
			YY_CURRENT_BUFFER_LVALUE->yy_buffer_status =
				YY_BUFFER_EOF_PENDING;
			}
		}

	else
		ret_val = EOB_ACT_CONTINUE_SCAN;

	if ((yy_size_t) ((yy_n_chars) + number_to_move) > YY_CURRENT_BUFFER_LVALUE->yy_buf_size) {
		
		yy_size_t new_size = (yy_n_chars) + number_to_move + ((yy_n_chars) >> 1);
		YY_CURRENT_BUFFER_LVALUE->yy_ch_buf = (char *) zconfrealloc((void *) YY_CURRENT_BUFFER_LVALUE->yy_ch_buf,new_size  );
		if ( ! YY_CURRENT_BUFFER_LVALUE->yy_ch_buf )
			YY_FATAL_ERROR( "out of dynamic memory in yy_get_next_buffer()" );
	}

	(yy_n_chars) += number_to_move;
	YY_CURRENT_BUFFER_LVALUE->yy_ch_buf[(yy_n_chars)] = YY_END_OF_BUFFER_CHAR;
	YY_CURRENT_BUFFER_LVALUE->yy_ch_buf[(yy_n_chars) + 1] = YY_END_OF_BUFFER_CHAR;

	(yytext_ptr) = &YY_CURRENT_BUFFER_LVALUE->yy_ch_buf[0];

	return ret_val;
}


    static yy_state_type yy_get_previous_state (void)
{
	register yy_state_type yy_current_state;
	register char *yy_cp;
    
	yy_current_state = (yy_start);

	for ( yy_cp = (yytext_ptr) + YY_MORE_ADJ; yy_cp < (yy_c_buf_p); ++yy_cp )
		{
		yy_current_state = yy_nxt[yy_current_state][(*yy_cp ? yy_ec[YY_SC_TO_UI(*yy_cp)] : 1)];
		}

	return yy_current_state;
}

    static yy_state_type yy_try_NUL_trans  (yy_state_type yy_current_state )
{
	register int yy_is_jam;
    
	yy_current_state = yy_nxt[yy_current_state][1];
	yy_is_jam = (yy_current_state <= 0);

	return yy_is_jam ? 0 : yy_current_state;
}

    static void yyunput (int c, register char * yy_bp )
{
	register char *yy_cp;
    
    yy_cp = (yy_c_buf_p);

	
	*yy_cp = (yy_hold_char);

	if ( yy_cp < YY_CURRENT_BUFFER_LVALUE->yy_ch_buf + 2 )
		{ 
		
		register int number_to_move = (yy_n_chars) + 2;
		register char *dest = &YY_CURRENT_BUFFER_LVALUE->yy_ch_buf[
					YY_CURRENT_BUFFER_LVALUE->yy_buf_size + 2];
		register char *source =
				&YY_CURRENT_BUFFER_LVALUE->yy_ch_buf[number_to_move];

		while ( source > YY_CURRENT_BUFFER_LVALUE->yy_ch_buf )
			*--dest = *--source;

		yy_cp += (int) (dest - source);
		yy_bp += (int) (dest - source);
		YY_CURRENT_BUFFER_LVALUE->yy_n_chars =
			(yy_n_chars) = YY_CURRENT_BUFFER_LVALUE->yy_buf_size;

		if ( yy_cp < YY_CURRENT_BUFFER_LVALUE->yy_ch_buf + 2 )
			YY_FATAL_ERROR( "flex scanner push-back overflow" );
		}

	*--yy_cp = (char) c;

	(yytext_ptr) = yy_bp;
	(yy_hold_char) = *yy_cp;
	(yy_c_buf_p) = yy_cp;
}

#ifndef YY_NO_INPUT
#ifdef __cplusplus
    static int yyinput (void)
#else
    static int input  (void)
#endif

{
	int c;
    
	*(yy_c_buf_p) = (yy_hold_char);

	if ( *(yy_c_buf_p) == YY_END_OF_BUFFER_CHAR )
		{
		if ( (yy_c_buf_p) < &YY_CURRENT_BUFFER_LVALUE->yy_ch_buf[(yy_n_chars)] )
			
			*(yy_c_buf_p) = '\0';

		else
			{ 
			int offset = (yy_c_buf_p) - (yytext_ptr);
			++(yy_c_buf_p);

			switch ( yy_get_next_buffer(  ) )
				{
				case EOB_ACT_LAST_MATCH:

					
					zconfrestart(zconfin );

					

				case EOB_ACT_END_OF_FILE:
					{
					if ( zconfwrap( ) )
						return EOF;

					if ( ! (yy_did_buffer_switch_on_eof) )
						YY_NEW_FILE;
#ifdef __cplusplus
					return yyinput();
#else
					return input();
#endif
					}

				case EOB_ACT_CONTINUE_SCAN:
					(yy_c_buf_p) = (yytext_ptr) + offset;
					break;
				}
			}
		}

	c = *(unsigned char *) (yy_c_buf_p);	
	*(yy_c_buf_p) = '\0';	
	(yy_hold_char) = *++(yy_c_buf_p);

	return c;
}
#endif	

    void zconfrestart  (FILE * input_file )
{
    
	if ( ! YY_CURRENT_BUFFER ){
        zconfensure_buffer_stack ();
		YY_CURRENT_BUFFER_LVALUE =
            zconf_create_buffer(zconfin,YY_BUF_SIZE );
	}

	zconf_init_buffer(YY_CURRENT_BUFFER,input_file );
	zconf_load_buffer_state( );
}

    void zconf_switch_to_buffer  (YY_BUFFER_STATE  new_buffer )
{
    
	zconfensure_buffer_stack ();
	if ( YY_CURRENT_BUFFER == new_buffer )
		return;

	if ( YY_CURRENT_BUFFER )
		{
		
		*(yy_c_buf_p) = (yy_hold_char);
		YY_CURRENT_BUFFER_LVALUE->yy_buf_pos = (yy_c_buf_p);
		YY_CURRENT_BUFFER_LVALUE->yy_n_chars = (yy_n_chars);
		}

	YY_CURRENT_BUFFER_LVALUE = new_buffer;
	zconf_load_buffer_state( );

	(yy_did_buffer_switch_on_eof) = 1;
}

static void zconf_load_buffer_state  (void)
{
    	(yy_n_chars) = YY_CURRENT_BUFFER_LVALUE->yy_n_chars;
	(yytext_ptr) = (yy_c_buf_p) = YY_CURRENT_BUFFER_LVALUE->yy_buf_pos;
	zconfin = YY_CURRENT_BUFFER_LVALUE->yy_input_file;
	(yy_hold_char) = *(yy_c_buf_p);
}

    YY_BUFFER_STATE zconf_create_buffer  (FILE * file, int  size )
{
	YY_BUFFER_STATE b;
    
	b = (YY_BUFFER_STATE) zconfalloc(sizeof( struct yy_buffer_state )  );
	if ( ! b )
		YY_FATAL_ERROR( "out of dynamic memory in zconf_create_buffer()" );

	b->yy_buf_size = size;

	b->yy_ch_buf = (char *) zconfalloc(b->yy_buf_size + 2  );
	if ( ! b->yy_ch_buf )
		YY_FATAL_ERROR( "out of dynamic memory in zconf_create_buffer()" );

	b->yy_is_our_buffer = 1;

	zconf_init_buffer(b,file );

	return b;
}

    void zconf_delete_buffer (YY_BUFFER_STATE  b )
{
    
	if ( ! b )
		return;

	if ( b == YY_CURRENT_BUFFER ) 
		YY_CURRENT_BUFFER_LVALUE = (YY_BUFFER_STATE) 0;

	if ( b->yy_is_our_buffer )
		zconffree((void *) b->yy_ch_buf  );

	zconffree((void *) b  );
}

    static void zconf_init_buffer  (YY_BUFFER_STATE  b, FILE * file )

{
	int oerrno = errno;
    
	zconf_flush_buffer(b );

	b->yy_input_file = file;
	b->yy_fill_buffer = 1;

    if (b != YY_CURRENT_BUFFER){
        b->yy_bs_lineno = 1;
        b->yy_bs_column = 0;
    }

        b->yy_is_interactive = 0;
    
	errno = oerrno;
}

    void zconf_flush_buffer (YY_BUFFER_STATE  b )
{
    	if ( ! b )
		return;

	b->yy_n_chars = 0;

	b->yy_ch_buf[0] = YY_END_OF_BUFFER_CHAR;
	b->yy_ch_buf[1] = YY_END_OF_BUFFER_CHAR;

	b->yy_buf_pos = &b->yy_ch_buf[0];

	b->yy_at_bol = 1;
	b->yy_buffer_status = YY_BUFFER_NEW;

	if ( b == YY_CURRENT_BUFFER )
		zconf_load_buffer_state( );
}

void zconfpush_buffer_state (YY_BUFFER_STATE new_buffer )
{
    	if (new_buffer == NULL)
		return;

	zconfensure_buffer_stack();

	
	if ( YY_CURRENT_BUFFER )
		{
		
		*(yy_c_buf_p) = (yy_hold_char);
		YY_CURRENT_BUFFER_LVALUE->yy_buf_pos = (yy_c_buf_p);
		YY_CURRENT_BUFFER_LVALUE->yy_n_chars = (yy_n_chars);
		}

	
	if (YY_CURRENT_BUFFER)
		(yy_buffer_stack_top)++;
	YY_CURRENT_BUFFER_LVALUE = new_buffer;

	
	zconf_load_buffer_state( );
	(yy_did_buffer_switch_on_eof) = 1;
}

void zconfpop_buffer_state (void)
{
    	if (!YY_CURRENT_BUFFER)
		return;

	zconf_delete_buffer(YY_CURRENT_BUFFER );
	YY_CURRENT_BUFFER_LVALUE = NULL;
	if ((yy_buffer_stack_top) > 0)
		--(yy_buffer_stack_top);

	if (YY_CURRENT_BUFFER) {
		zconf_load_buffer_state( );
		(yy_did_buffer_switch_on_eof) = 1;
	}
}

static void zconfensure_buffer_stack (void)
{
	int num_to_alloc;
    
	if (!(yy_buffer_stack)) {

		num_to_alloc = 1;
		(yy_buffer_stack) = (struct yy_buffer_state**)zconfalloc
								(num_to_alloc * sizeof(struct yy_buffer_state*)
								);
		if ( ! (yy_buffer_stack) )
			YY_FATAL_ERROR( "out of dynamic memory in zconfensure_buffer_stack()" );
								  
		memset((yy_buffer_stack), 0, num_to_alloc * sizeof(struct yy_buffer_state*));
				
		(yy_buffer_stack_max) = num_to_alloc;
		(yy_buffer_stack_top) = 0;
		return;
	}

	if ((yy_buffer_stack_top) >= ((yy_buffer_stack_max)) - 1){

		
		int grow_size = 8 ;

		num_to_alloc = (yy_buffer_stack_max) + grow_size;
		(yy_buffer_stack) = (struct yy_buffer_state**)zconfrealloc
								((yy_buffer_stack),
								num_to_alloc * sizeof(struct yy_buffer_state*)
								);
		if ( ! (yy_buffer_stack) )
			YY_FATAL_ERROR( "out of dynamic memory in zconfensure_buffer_stack()" );

		
		memset((yy_buffer_stack) + (yy_buffer_stack_max), 0, grow_size * sizeof(struct yy_buffer_state*));
		(yy_buffer_stack_max) = num_to_alloc;
	}
}

YY_BUFFER_STATE zconf_scan_buffer  (char * base, yy_size_t  size )
{
	YY_BUFFER_STATE b;
    
	if ( size < 2 ||
	     base[size-2] != YY_END_OF_BUFFER_CHAR ||
	     base[size-1] != YY_END_OF_BUFFER_CHAR )
		
		return 0;

	b = (YY_BUFFER_STATE) zconfalloc(sizeof( struct yy_buffer_state )  );
	if ( ! b )
		YY_FATAL_ERROR( "out of dynamic memory in zconf_scan_buffer()" );

	b->yy_buf_size = size - 2;	
	b->yy_buf_pos = b->yy_ch_buf = base;
	b->yy_is_our_buffer = 0;
	b->yy_input_file = 0;
	b->yy_n_chars = b->yy_buf_size;
	b->yy_is_interactive = 0;
	b->yy_at_bol = 1;
	b->yy_fill_buffer = 0;
	b->yy_buffer_status = YY_BUFFER_NEW;

	zconf_switch_to_buffer(b  );

	return b;
}

YY_BUFFER_STATE zconf_scan_string (yyconst char * yystr )
{
    
	return zconf_scan_bytes(yystr,strlen(yystr) );
}

YY_BUFFER_STATE zconf_scan_bytes  (yyconst char * yybytes, int  _yybytes_len )
{
	YY_BUFFER_STATE b;
	char *buf;
	yy_size_t n;
	int i;
    
	
	n = _yybytes_len + 2;
	buf = (char *) zconfalloc(n  );
	if ( ! buf )
		YY_FATAL_ERROR( "out of dynamic memory in zconf_scan_bytes()" );

	for ( i = 0; i < _yybytes_len; ++i )
		buf[i] = yybytes[i];

	buf[_yybytes_len] = buf[_yybytes_len+1] = YY_END_OF_BUFFER_CHAR;

	b = zconf_scan_buffer(buf,n );
	if ( ! b )
		YY_FATAL_ERROR( "bad buffer in zconf_scan_bytes()" );

	b->yy_is_our_buffer = 1;

	return b;
}

#ifndef YY_EXIT_FAILURE
#define YY_EXIT_FAILURE 2
#endif

static void yy_fatal_error (yyconst char* msg )
{
    	(void) fprintf( stderr, "%s\n", msg );
	exit( YY_EXIT_FAILURE );
}


#undef yyless
#define yyless(n) \
	do \
		{ \
		 \
        int yyless_macro_arg = (n); \
        YY_LESS_LINENO(yyless_macro_arg);\
		zconftext[zconfleng] = (yy_hold_char); \
		(yy_c_buf_p) = zconftext + yyless_macro_arg; \
		(yy_hold_char) = *(yy_c_buf_p); \
		*(yy_c_buf_p) = '\0'; \
		zconfleng = yyless_macro_arg; \
		} \
	while ( 0 )


int zconfget_lineno  (void)
{
        
    return zconflineno;
}

FILE *zconfget_in  (void)
{
        return zconfin;
}

FILE *zconfget_out  (void)
{
        return zconfout;
}

int zconfget_leng  (void)
{
        return zconfleng;
}


char *zconfget_text  (void)
{
        return zconftext;
}

void zconfset_lineno (int  line_number )
{
    
    zconflineno = line_number;
}

void zconfset_in (FILE *  in_str )
{
        zconfin = in_str ;
}

void zconfset_out (FILE *  out_str )
{
        zconfout = out_str ;
}

int zconfget_debug  (void)
{
        return zconf_flex_debug;
}

void zconfset_debug (int  bdebug )
{
        zconf_flex_debug = bdebug ;
}

static int yy_init_globals (void)
{

    (yy_buffer_stack) = 0;
    (yy_buffer_stack_top) = 0;
    (yy_buffer_stack_max) = 0;
    (yy_c_buf_p) = (char *) 0;
    (yy_init) = 0;
    (yy_start) = 0;

#ifdef YY_STDINIT
    zconfin = stdin;
    zconfout = stdout;
#else
    zconfin = (FILE *) 0;
    zconfout = (FILE *) 0;
#endif

    return 0;
}

int zconflex_destroy  (void)
{
    
    
	while(YY_CURRENT_BUFFER){
		zconf_delete_buffer(YY_CURRENT_BUFFER  );
		YY_CURRENT_BUFFER_LVALUE = NULL;
		zconfpop_buffer_state();
	}

	
	zconffree((yy_buffer_stack) );
	(yy_buffer_stack) = NULL;

    yy_init_globals( );

    return 0;
}


#ifndef yytext_ptr
static void yy_flex_strncpy (char* s1, yyconst char * s2, int n )
{
	register int i;
	for ( i = 0; i < n; ++i )
		s1[i] = s2[i];
}
#endif

#ifdef YY_NEED_STRLEN
static int yy_flex_strlen (yyconst char * s )
{
	register int n;
	for ( n = 0; s[n]; ++n )
		;

	return n;
}
#endif

void *zconfalloc (yy_size_t  size )
{
	return (void *) malloc( size );
}

void *zconfrealloc  (void * ptr, yy_size_t  size )
{
	return (void *) realloc( (char *) ptr, size );
}

void zconffree (void * ptr )
{
	free( (char *) ptr );	
}

#define YYTABLES_NAME "yytables"

void zconf_starthelp(void)
{
	new_string();
	last_ts = first_ts = 0;
	BEGIN(HELP);
}

static void zconf_endhelp(void)
{
	zconflval.string = text;
	BEGIN(INITIAL);
}

FILE *zconf_fopen(const char *name)
{
	char *env, fullname[PATH_MAX+1];
	FILE *f;

	f = fopen(name, "r");
	if (!f && name != NULL && name[0] != '/') {
		env = getenv(SRCTREE);
		if (env) {
			sprintf(fullname, "%s/%s", env, name);
			f = fopen(fullname, "r");
		}
	}
	return f;
}

void zconf_initscan(const char *name)
{
	zconfin = zconf_fopen(name);
	if (!zconfin) {
		printf("can't find file %s\n", name);
		exit(1);
	}

	current_buf = malloc(sizeof(*current_buf));
	memset(current_buf, 0, sizeof(*current_buf));

	current_file = file_lookup(name);
	current_file->lineno = 1;
}

void zconf_nextfile(const char *name)
{
	struct file *iter;
	struct file *file = file_lookup(name);
	struct buffer *buf = malloc(sizeof(*buf));
	memset(buf, 0, sizeof(*buf));

	current_buf->state = YY_CURRENT_BUFFER;
	zconfin = zconf_fopen(file->name);
	if (!zconfin) {
		printf("%s:%d: can't open file \"%s\"\n",
		    zconf_curname(), zconf_lineno(), file->name);
		exit(1);
	}
	zconf_switch_to_buffer(zconf_create_buffer(zconfin,YY_BUF_SIZE));
	buf->parent = current_buf;
	current_buf = buf;

	for (iter = current_file->parent; iter; iter = iter->parent ) {
		if (!strcmp(current_file->name,iter->name) ) {
			printf("%s:%d: recursive inclusion detected. "
			       "Inclusion path:\n  current file : '%s'\n",
			       zconf_curname(), zconf_lineno(),
			       zconf_curname());
			iter = current_file->parent;
			while (iter && \
			       strcmp(iter->name,current_file->name)) {
				printf("  included from: '%s:%d'\n",
				       iter->name, iter->lineno-1);
				iter = iter->parent;
			}
			if (iter)
				printf("  included from: '%s:%d'\n",
				       iter->name, iter->lineno+1);
			exit(1);
		}
	}
	file->lineno = 1;
	file->parent = current_file;
	current_file = file;
}

static void zconf_endfile(void)
{
	struct buffer *parent;

	current_file = current_file->parent;

	parent = current_buf->parent;
	if (parent) {
		fclose(zconfin);
		zconf_delete_buffer(YY_CURRENT_BUFFER);
		zconf_switch_to_buffer(parent->state);
	}
	free(current_buf);
	current_buf = parent;
}

int zconf_lineno(void)
{
	return current_pos.lineno;
}

const char *zconf_curname(void)
{
	return current_pos.file ? current_pos.file->name : "<none>";
}

