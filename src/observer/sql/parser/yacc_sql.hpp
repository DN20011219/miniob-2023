/* A Bison parser, made by GNU Bison 2.3.  */

/* Skeleton interface for Bison's Yacc-like parsers in C

   Copyright (C) 1984, 1989, 1990, 2000, 2001, 2002, 2003, 2004, 2005, 2006
   Free Software Foundation, Inc.

   This program is free software; you can redistribute it and/or modify
   it under the terms of the GNU General Public License as published by
   the Free Software Foundation; either version 2, or (at your option)
   any later version.

   This program is distributed in the hope that it will be useful,
   but WITHOUT ANY WARRANTY; without even the implied warranty of
   MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
   GNU General Public License for more details.

   You should have received a copy of the GNU General Public License
   along with this program; if not, write to the Free Software
   Foundation, Inc., 51 Franklin Street, Fifth Floor,
   Boston, MA 02110-1301, USA.  */

/* As a special exception, you may create a larger work that contains
   part or all of the Bison parser skeleton and distribute that work
   under terms of your choice, so long as that work isn't itself a
   parser generator using the skeleton or a modified version thereof
   as a parser skeleton.  Alternatively, if you modify or redistribute
   the parser skeleton itself, you may (at your option) remove this
   special exception, which will cause the skeleton and the resulting
   Bison output files to be licensed under the GNU General Public
   License without this special exception.

   This special exception was added by the Free Software Foundation in
   version 2.2 of Bison.  */

/* Tokens.  */
#ifndef YYTOKENTYPE
# define YYTOKENTYPE
   /* Put the tokens into the symbol table, so that GDB and other debuggers
      know about them.  */
   enum yytokentype {
     SEMICOLON = 258,
     CREATE = 259,
     DROP = 260,
     TABLE = 261,
     TABLES = 262,
     INDEX = 263,
     CALC = 264,
     SELECT = 265,
     DESC = 266,
     SHOW = 267,
     SYNC = 268,
     INSERT = 269,
     DELETE = 270,
     UPDATE = 271,
     LBRACE = 272,
     RBRACE = 273,
     COMMA = 274,
     TRX_BEGIN = 275,
     TRX_COMMIT = 276,
     TRX_ROLLBACK = 277,
     INT_T = 278,
     STRING_T = 279,
     FLOAT_T = 280,
     DATE_T = 281,
     HELP = 282,
     EXIT = 283,
     DOT = 284,
     INTO = 285,
     VALUES = 286,
     FROM = 287,
     WHERE = 288,
     AND = 289,
     SET = 290,
     ON = 291,
     LOAD = 292,
     DATA = 293,
     INFILE = 294,
     EXPLAIN = 295,
     EQ = 296,
     LT = 297,
     GT = 298,
     LE = 299,
     GE = 300,
     NE = 301,
     NUMBER = 302,
     FLOAT = 303,
     ID = 304,
     DATE_STR = 305,
     SSS = 306,
     UMINUS = 307
   };
#endif
/* Tokens.  */
// #define SEMICOLON 258
// #define CREATE 259
// #define DROP 260
// #define TABLE 261
// #define TABLES 262
// #define INDEX 263
// #define CALC 264
// #define SELECT 265
// #define DESC 266
// #define SHOW 267
// #define SYNC 268
// #define INSERT 269
// #define DELETE 270
// #define UPDATE 271
// #define LBRACE 272
// #define RBRACE 273
// #define COMMA 274
// #define TRX_BEGIN 275
// #define TRX_COMMIT 276
// #define TRX_ROLLBACK 277
// #define INT_T 278
// #define STRING_T 279
// #define FLOAT_T 280
// #define DATE_T 281
// #define HELP 282
// #define EXIT 283
// #define DOT 284
// #define INTO 285
// #define VALUES 286
// #define FROM 287
// #define WHERE 288
// #define AND 289
// #define SET 290
// #define ON 291
// #define LOAD 292
// #define DATA 293
// #define INFILE 294
// #define EXPLAIN 295
// #define EQ 296
// #define LT 297
// #define GT 298
// #define LE 299
// #define GE 300
// #define NE 301
// #define NUMBER 302
// #define FLOAT 303
// #define ID 304
// #define DATE_STR 305
// #define SSS 306
// #define UMINUS 307




#if ! defined YYSTYPE && ! defined YYSTYPE_IS_DECLARED
typedef union YYSTYPE
#line 101 "yacc_sql.y"
{
  ParsedSqlNode *                   sql_node;
  ConditionSqlNode *                condition;
  Value *                           value;
  enum CompOp                       comp;
  RelAttrSqlNode *                  rel_attr;
  std::vector<AttrInfoSqlNode> *    attr_infos;
  AttrInfoSqlNode *                 attr_info;
  Expression *                      expression;
  std::vector<Expression *> *       expression_list;
  std::vector<Value> *              value_list;
  std::vector<ConditionSqlNode> *   condition_list;
  std::vector<RelAttrSqlNode> *     rel_attr_list;
  std::vector<std::string> *        relation_list;
  char *                            string;
  int                               number;
  float                             floats;
}
/* Line 1529 of yacc.c.  */
#line 172 "yacc_sql.hpp"
	YYSTYPE;
# define yystype YYSTYPE /* obsolescent; will be withdrawn */
# define YYSTYPE_IS_DECLARED 1
# define YYSTYPE_IS_TRIVIAL 1
#endif

extern YYSTYPE yylval;

#if ! defined YYLTYPE && ! defined YYLTYPE_IS_DECLARED
typedef struct YYLTYPE
{
  int first_line;
  int first_column;
  int last_line;
  int last_column;
} YYLTYPE;
# define yyltype YYLTYPE /* obsolescent; will be withdrawn */
# define YYLTYPE_IS_DECLARED 1
# define YYLTYPE_IS_TRIVIAL 1
#endif

extern YYLTYPE yylloc;
