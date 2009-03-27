/** \file
 *  This C header file was generated by $ANTLR version 3.1.1
 *
 *     -  From the grammar source file : NMakeExpression.g3pl
 *     -                            On : 2009-01-28 18:57:13
 *     -                for the parser : NMakeExpressionParserParser *
 * Editing it, at least manually, is not wise. 
 *
 * C language generator and runtime by Jim Idle, jimi|hereisanat|idle|dotgoeshere|ws.
 *
 *
 * The parser NMakeExpressionParser has the callable functions (rules) shown below,
 * which will invoke the code for the associated rule in the source grammar
 * assuming that the input stream is pointing to a token/text stream that could begin
 * this rule.
 * 
 * For instance if you call the first (topmost) rule in a parser grammar, you will
 * get the results of a full parse, but calling a rule half way through the grammar will
 * allow you to pass part of a full token stream to the parser, such as for syntax checking
 * in editors and so on.
 *
 * The parser entry points are called indirectly (by function pointer to function) via
 * a parser context typedef pNMakeExpressionParser, which is returned from a call to NMakeExpressionParserNew().
 *
 * The methods in pNMakeExpressionParser are  as follows:
 *
 *  - int      pNMakeExpressionParser->expr(pNMakeExpressionParser)
 *  - int      pNMakeExpressionParser->term0(pNMakeExpressionParser)
 *  - int      pNMakeExpressionParser->term1(pNMakeExpressionParser)
 *  - int      pNMakeExpressionParser->term2(pNMakeExpressionParser)
 *  - int      pNMakeExpressionParser->term3(pNMakeExpressionParser)
 *  - int      pNMakeExpressionParser->term4(pNMakeExpressionParser)
 *  - int      pNMakeExpressionParser->term5(pNMakeExpressionParser)
 *  - int      pNMakeExpressionParser->primary(pNMakeExpressionParser)
 *
 * The return type for any particular rule is of course determined by the source
 * grammar file.
 */
#ifndef	_NMakeExpressionParser_H
#define _NMakeExpressionParser_H
/* =============================================================================
 * Standard antlr3 C runtime definitions
 */
#include    <antlr3.h>

/* End of standard antlr 3 runtime definitions
 * =============================================================================
 */
 
#ifdef __cplusplus
extern "C" {
#endif

// Forward declare the context typedef so that we can use it before it is
// properly defined. Delegators and delegates (from import statements) are
// interdependent and their context structures contain pointers to each other
// C only allows such things to be declared if you pre-declare the typedef.
//
typedef struct NMakeExpressionParser_Ctx_struct NMakeExpressionParser, * pNMakeExpressionParser;





#ifdef	ANTLR3_WINDOWS
// Disable: Unreferenced parameter,							- Rules with parameters that are not used
//          constant conditional,							- ANTLR realizes that a prediction is always true (synpred usually)
//          initialized but unused variable					- tree rewrite variables declared but not needed
//          Unreferenced local variable						- lexer rule declares but does not always use _type
//          potentially unitialized variable used			- retval always returned from a rule 
//			unreferenced local function has been removed	- susually getTokenNames or freeScope, they can go without warnigns
//
// These are only really displayed at warning level /W4 but that is the code ideal I am aiming at
// and the codegen must generate some of these warnings by necessity, apart from 4100, which is
// usually generated when a parser rule is given a parameter that it does not use. Mostly though
// this is a matter of orthogonality hence I disable that one.
//
#pragma warning( disable : 4100 )
#pragma warning( disable : 4101 )
#pragma warning( disable : 4127 )
#pragma warning( disable : 4189 )
#pragma warning( disable : 4505 )
#endif


/** Context tracking structure for NMakeExpressionParser
 */
struct NMakeExpressionParser_Ctx_struct
{
    /** Built in ANTLR3 context tracker contains all the generic elements
     *  required for context tracking.
     */
    pANTLR3_PARSER   pParser;


     int (*expr)	(struct NMakeExpressionParser_Ctx_struct * ctx, void* caller, void* cbIsMacroDefined, void* cbFileExisting);
     int (*term0)	(struct NMakeExpressionParser_Ctx_struct * ctx);
     int (*term1)	(struct NMakeExpressionParser_Ctx_struct * ctx);
     int (*term2)	(struct NMakeExpressionParser_Ctx_struct * ctx);
     int (*term3)	(struct NMakeExpressionParser_Ctx_struct * ctx);
     int (*term4)	(struct NMakeExpressionParser_Ctx_struct * ctx);
     int (*term5)	(struct NMakeExpressionParser_Ctx_struct * ctx);
     int (*primary)	(struct NMakeExpressionParser_Ctx_struct * ctx);
    // Delegated rules
    const char * (*getGrammarFileName)();
    void	    (*free)   (struct NMakeExpressionParser_Ctx_struct * ctx);
        
};

// Function protoypes for the constructor functions that external translation units
// such as delegators and delegates may wish to call.
//
ANTLR3_API pNMakeExpressionParser NMakeExpressionParserNew         (pANTLR3_COMMON_TOKEN_STREAM instream);
ANTLR3_API pNMakeExpressionParser NMakeExpressionParserNewSSD      (pANTLR3_COMMON_TOKEN_STREAM instream, pANTLR3_RECOGNIZER_SHARED_STATE state);

/** Symbolic definitions of all the tokens that the parser will work with.
 * \{
 *
 * Antlr will define EOF, but we can't use that as it it is too common in
 * in C header files and that would be confusing. There is no way to filter this out at the moment
 * so we just undef it here for now. That isn't the value we get back from C recognizers
 * anyway. We are looking for ANTLR3_TOKEN_EOF.
 */
#ifdef	EOF
#undef	EOF
#endif
#ifdef	Tokens
#undef	Tokens
#endif 
#define GREATER_THAN      11
#define EQUAL_OR_GREATER_THAN      13
#define BIT_AND      6
#define LETTER      31
#define MOD      20
#define DEFINED      25
#define NUMBER      24
#define WHITESPACE      30
#define MULT      18
#define MINUS      17
#define SPACE      29
#define BOOL_AND      4
#define EOF      -1
#define BOOL_OR      5
#define SHIFT_LEFT      14
#define T__32      32
#define T__33      33
#define SHIFT_RIGHT      15
#define BIT_OR      7
#define NOT_EQUAL      9
#define IDENTIFIER      26
#define EQUAL      8
#define BOOL_NOT      22
#define LESS_THAN      10
#define BIT_NOT      21
#define PLUS      16
#define DIGIT      28
#define DIV      19
#define EQUAL_OR_LESS_THAN      12
#define STRING      23
#define EXIST      27
#ifdef	EOF
#undef	EOF
#define	EOF	ANTLR3_TOKEN_EOF
#endif

#ifndef TOKENSOURCE
#define TOKENSOURCE(lxr) lxr->pLexer->rec->state->tokSource
#endif

/* End of token definitions for NMakeExpressionParser
 * =============================================================================
 */
/** \} */

#ifdef __cplusplus
}
#endif

#endif

/* END - Note:Keep extra line feed to satisfy UNIX systems */