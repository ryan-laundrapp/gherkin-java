//
//  Generated by the J2ObjC translator.  DO NOT EDIT!
//  source: /Users/marcussmith/HambroPerks/laundrapp_org/gherkin-java/src/main/java/gherkin/Parser.java
//

#include "J2ObjC_header.h"

#pragma push_macro("INCLUDE_ALL_GherkinParser")
#ifdef RESTRICT_GherkinParser
#define INCLUDE_ALL_GherkinParser 0
#else
#define INCLUDE_ALL_GherkinParser 1
#endif
#undef RESTRICT_GherkinParser

#if __has_feature(nullability)
#pragma clang diagnostic push
#pragma GCC diagnostic ignored "-Wnullability-completeness"
#endif

#if !defined (GherkinParser_) && (INCLUDE_ALL_GherkinParser || defined(INCLUDE_GherkinParser))
#define GherkinParser_

@class JavaIoReader;
@protocol GherkinParser_Builder;
@protocol GherkinParser_ITokenMatcher;
@protocol GherkinParser_ITokenScanner;

@interface GherkinParser : NSObject {
 @public
  jboolean stopAtFirstError_;
}

#pragma mark Public

- (instancetype)initWithGherkinParser_Builder:(id<GherkinParser_Builder>)builder;

- (id)parseWithGherkinParser_ITokenScanner:(id<GherkinParser_ITokenScanner>)tokenScanner;

- (id)parseWithGherkinParser_ITokenScanner:(id<GherkinParser_ITokenScanner>)tokenScanner
           withGherkinParser_ITokenMatcher:(id<GherkinParser_ITokenMatcher>)tokenMatcher;

- (id)parseWithJavaIoReader:(JavaIoReader *)source;

- (id)parseWithJavaIoReader:(JavaIoReader *)source
withGherkinParser_ITokenMatcher:(id<GherkinParser_ITokenMatcher>)tokenMatcher;

- (id)parseWithNSString:(NSString *)source;

- (id)parseWithNSString:(NSString *)source
withGherkinParser_ITokenMatcher:(id<GherkinParser_ITokenMatcher>)tokenMatcher;

// Disallowed inherited constructors, do not use.

- (instancetype)init NS_UNAVAILABLE;

@end

J2OBJC_EMPTY_STATIC_INIT(GherkinParser)

FOUNDATION_EXPORT void GherkinParser_initWithGherkinParser_Builder_(GherkinParser *self, id<GherkinParser_Builder> builder);

FOUNDATION_EXPORT GherkinParser *new_GherkinParser_initWithGherkinParser_Builder_(id<GherkinParser_Builder> builder) NS_RETURNS_RETAINED;

FOUNDATION_EXPORT GherkinParser *create_GherkinParser_initWithGherkinParser_Builder_(id<GherkinParser_Builder> builder);

J2OBJC_TYPE_LITERAL_HEADER(GherkinParser)

#endif

#if !defined (GherkinParser_TokenType_) && (INCLUDE_ALL_GherkinParser || defined(INCLUDE_GherkinParser_TokenType))
#define GherkinParser_TokenType_

#define RESTRICT_JavaLangEnum 1
#define INCLUDE_JavaLangEnum 1
#include "java/lang/Enum.h"

@class IOSObjectArray;

typedef NS_ENUM(NSUInteger, GherkinParser_TokenType_Enum) {
  GherkinParser_TokenType_Enum_None = 0,
  GherkinParser_TokenType_Enum_EOF = 1,
  GherkinParser_TokenType_Enum_Empty = 2,
  GherkinParser_TokenType_Enum_Comment = 3,
  GherkinParser_TokenType_Enum_TagLine = 4,
  GherkinParser_TokenType_Enum_FeatureLine = 5,
  GherkinParser_TokenType_Enum_BackgroundLine = 6,
  GherkinParser_TokenType_Enum_ScenarioLine = 7,
  GherkinParser_TokenType_Enum_ScenarioOutlineLine = 8,
  GherkinParser_TokenType_Enum_ExamplesLine = 9,
  GherkinParser_TokenType_Enum_StepLine = 10,
  GherkinParser_TokenType_Enum_DocStringSeparator = 11,
  GherkinParser_TokenType_Enum_TableRow = 12,
  GherkinParser_TokenType_Enum_Language = 13,
  GherkinParser_TokenType_Enum_Other = 14,
};

@interface GherkinParser_TokenType : JavaLangEnum

#pragma mark Public

+ (GherkinParser_TokenType *)valueOfWithNSString:(NSString *)name;

+ (IOSObjectArray *)values;

@end

J2OBJC_STATIC_INIT(GherkinParser_TokenType)

/*! INTERNAL ONLY - Use enum accessors declared below. */
FOUNDATION_EXPORT GherkinParser_TokenType *GherkinParser_TokenType_values_[];

inline GherkinParser_TokenType *GherkinParser_TokenType_get_None(void);
J2OBJC_ENUM_CONSTANT(GherkinParser_TokenType, None)

inline GherkinParser_TokenType *GherkinParser_TokenType_get_EOF(void);
J2OBJC_ENUM_CONSTANT(GherkinParser_TokenType, EOF)

inline GherkinParser_TokenType *GherkinParser_TokenType_get_Empty(void);
J2OBJC_ENUM_CONSTANT(GherkinParser_TokenType, Empty)

inline GherkinParser_TokenType *GherkinParser_TokenType_get_Comment(void);
J2OBJC_ENUM_CONSTANT(GherkinParser_TokenType, Comment)

inline GherkinParser_TokenType *GherkinParser_TokenType_get_TagLine(void);
J2OBJC_ENUM_CONSTANT(GherkinParser_TokenType, TagLine)

inline GherkinParser_TokenType *GherkinParser_TokenType_get_FeatureLine(void);
J2OBJC_ENUM_CONSTANT(GherkinParser_TokenType, FeatureLine)

inline GherkinParser_TokenType *GherkinParser_TokenType_get_BackgroundLine(void);
J2OBJC_ENUM_CONSTANT(GherkinParser_TokenType, BackgroundLine)

inline GherkinParser_TokenType *GherkinParser_TokenType_get_ScenarioLine(void);
J2OBJC_ENUM_CONSTANT(GherkinParser_TokenType, ScenarioLine)

inline GherkinParser_TokenType *GherkinParser_TokenType_get_ScenarioOutlineLine(void);
J2OBJC_ENUM_CONSTANT(GherkinParser_TokenType, ScenarioOutlineLine)

inline GherkinParser_TokenType *GherkinParser_TokenType_get_ExamplesLine(void);
J2OBJC_ENUM_CONSTANT(GherkinParser_TokenType, ExamplesLine)

inline GherkinParser_TokenType *GherkinParser_TokenType_get_StepLine(void);
J2OBJC_ENUM_CONSTANT(GherkinParser_TokenType, StepLine)

inline GherkinParser_TokenType *GherkinParser_TokenType_get_DocStringSeparator(void);
J2OBJC_ENUM_CONSTANT(GherkinParser_TokenType, DocStringSeparator)

inline GherkinParser_TokenType *GherkinParser_TokenType_get_TableRow(void);
J2OBJC_ENUM_CONSTANT(GherkinParser_TokenType, TableRow)

inline GherkinParser_TokenType *GherkinParser_TokenType_get_Language(void);
J2OBJC_ENUM_CONSTANT(GherkinParser_TokenType, Language)

inline GherkinParser_TokenType *GherkinParser_TokenType_get_Other(void);
J2OBJC_ENUM_CONSTANT(GherkinParser_TokenType, Other)

FOUNDATION_EXPORT IOSObjectArray *GherkinParser_TokenType_values(void);

FOUNDATION_EXPORT GherkinParser_TokenType *GherkinParser_TokenType_valueOfWithNSString_(NSString *name);

FOUNDATION_EXPORT GherkinParser_TokenType *GherkinParser_TokenType_fromOrdinal(NSUInteger ordinal);

J2OBJC_TYPE_LITERAL_HEADER(GherkinParser_TokenType)

#endif

#if !defined (GherkinParser_RuleType_) && (INCLUDE_ALL_GherkinParser || defined(INCLUDE_GherkinParser_RuleType))
#define GherkinParser_RuleType_

#define RESTRICT_JavaLangEnum 1
#define INCLUDE_JavaLangEnum 1
#include "java/lang/Enum.h"

@class GherkinParser_TokenType;
@class IOSObjectArray;

typedef NS_ENUM(NSUInteger, GherkinParser_RuleType_Enum) {
  GherkinParser_RuleType_Enum_None = 0,
  GherkinParser_RuleType_Enum__EOF = 1,
  GherkinParser_RuleType_Enum__Empty = 2,
  GherkinParser_RuleType_Enum__Comment = 3,
  GherkinParser_RuleType_Enum__TagLine = 4,
  GherkinParser_RuleType_Enum__FeatureLine = 5,
  GherkinParser_RuleType_Enum__BackgroundLine = 6,
  GherkinParser_RuleType_Enum__ScenarioLine = 7,
  GherkinParser_RuleType_Enum__ScenarioOutlineLine = 8,
  GherkinParser_RuleType_Enum__ExamplesLine = 9,
  GherkinParser_RuleType_Enum__StepLine = 10,
  GherkinParser_RuleType_Enum__DocStringSeparator = 11,
  GherkinParser_RuleType_Enum__TableRow = 12,
  GherkinParser_RuleType_Enum__Language = 13,
  GherkinParser_RuleType_Enum__Other = 14,
  GherkinParser_RuleType_Enum_GherkinDocument = 15,
  GherkinParser_RuleType_Enum_Feature = 16,
  GherkinParser_RuleType_Enum_Feature_Header = 17,
  GherkinParser_RuleType_Enum_Background = 18,
  GherkinParser_RuleType_Enum_Scenario_Definition = 19,
  GherkinParser_RuleType_Enum_Scenario = 20,
  GherkinParser_RuleType_Enum_ScenarioOutline = 21,
  GherkinParser_RuleType_Enum_Examples_Definition = 22,
  GherkinParser_RuleType_Enum_Examples = 23,
  GherkinParser_RuleType_Enum_Examples_Table = 24,
  GherkinParser_RuleType_Enum_Step = 25,
  GherkinParser_RuleType_Enum_Step_Arg = 26,
  GherkinParser_RuleType_Enum_DataTable = 27,
  GherkinParser_RuleType_Enum_DocString = 28,
  GherkinParser_RuleType_Enum_Tags = 29,
  GherkinParser_RuleType_Enum_Description_Helper = 30,
  GherkinParser_RuleType_Enum_Description = 31,
};

@interface GherkinParser_RuleType : JavaLangEnum

#pragma mark Public

+ (GherkinParser_RuleType *)castWithGherkinParser_TokenType:(GherkinParser_TokenType *)tokenType;

+ (GherkinParser_RuleType *)valueOfWithNSString:(NSString *)name;

+ (IOSObjectArray *)values;

@end

J2OBJC_STATIC_INIT(GherkinParser_RuleType)

/*! INTERNAL ONLY - Use enum accessors declared below. */
FOUNDATION_EXPORT GherkinParser_RuleType *GherkinParser_RuleType_values_[];

inline GherkinParser_RuleType *GherkinParser_RuleType_get_None(void);
J2OBJC_ENUM_CONSTANT(GherkinParser_RuleType, None)

inline GherkinParser_RuleType *GherkinParser_RuleType_get__EOF(void);
J2OBJC_ENUM_CONSTANT(GherkinParser_RuleType, _EOF)

inline GherkinParser_RuleType *GherkinParser_RuleType_get__Empty(void);
J2OBJC_ENUM_CONSTANT(GherkinParser_RuleType, _Empty)

inline GherkinParser_RuleType *GherkinParser_RuleType_get__Comment(void);
J2OBJC_ENUM_CONSTANT(GherkinParser_RuleType, _Comment)

inline GherkinParser_RuleType *GherkinParser_RuleType_get__TagLine(void);
J2OBJC_ENUM_CONSTANT(GherkinParser_RuleType, _TagLine)

inline GherkinParser_RuleType *GherkinParser_RuleType_get__FeatureLine(void);
J2OBJC_ENUM_CONSTANT(GherkinParser_RuleType, _FeatureLine)

inline GherkinParser_RuleType *GherkinParser_RuleType_get__BackgroundLine(void);
J2OBJC_ENUM_CONSTANT(GherkinParser_RuleType, _BackgroundLine)

inline GherkinParser_RuleType *GherkinParser_RuleType_get__ScenarioLine(void);
J2OBJC_ENUM_CONSTANT(GherkinParser_RuleType, _ScenarioLine)

inline GherkinParser_RuleType *GherkinParser_RuleType_get__ScenarioOutlineLine(void);
J2OBJC_ENUM_CONSTANT(GherkinParser_RuleType, _ScenarioOutlineLine)

inline GherkinParser_RuleType *GherkinParser_RuleType_get__ExamplesLine(void);
J2OBJC_ENUM_CONSTANT(GherkinParser_RuleType, _ExamplesLine)

inline GherkinParser_RuleType *GherkinParser_RuleType_get__StepLine(void);
J2OBJC_ENUM_CONSTANT(GherkinParser_RuleType, _StepLine)

inline GherkinParser_RuleType *GherkinParser_RuleType_get__DocStringSeparator(void);
J2OBJC_ENUM_CONSTANT(GherkinParser_RuleType, _DocStringSeparator)

inline GherkinParser_RuleType *GherkinParser_RuleType_get__TableRow(void);
J2OBJC_ENUM_CONSTANT(GherkinParser_RuleType, _TableRow)

inline GherkinParser_RuleType *GherkinParser_RuleType_get__Language(void);
J2OBJC_ENUM_CONSTANT(GherkinParser_RuleType, _Language)

inline GherkinParser_RuleType *GherkinParser_RuleType_get__Other(void);
J2OBJC_ENUM_CONSTANT(GherkinParser_RuleType, _Other)

inline GherkinParser_RuleType *GherkinParser_RuleType_get_GherkinDocument(void);
J2OBJC_ENUM_CONSTANT(GherkinParser_RuleType, GherkinDocument)

inline GherkinParser_RuleType *GherkinParser_RuleType_get_Feature(void);
J2OBJC_ENUM_CONSTANT(GherkinParser_RuleType, Feature)

inline GherkinParser_RuleType *GherkinParser_RuleType_get_Feature_Header(void);
J2OBJC_ENUM_CONSTANT(GherkinParser_RuleType, Feature_Header)

inline GherkinParser_RuleType *GherkinParser_RuleType_get_Background(void);
J2OBJC_ENUM_CONSTANT(GherkinParser_RuleType, Background)

inline GherkinParser_RuleType *GherkinParser_RuleType_get_Scenario_Definition(void);
J2OBJC_ENUM_CONSTANT(GherkinParser_RuleType, Scenario_Definition)

inline GherkinParser_RuleType *GherkinParser_RuleType_get_Scenario(void);
J2OBJC_ENUM_CONSTANT(GherkinParser_RuleType, Scenario)

inline GherkinParser_RuleType *GherkinParser_RuleType_get_ScenarioOutline(void);
J2OBJC_ENUM_CONSTANT(GherkinParser_RuleType, ScenarioOutline)

inline GherkinParser_RuleType *GherkinParser_RuleType_get_Examples_Definition(void);
J2OBJC_ENUM_CONSTANT(GherkinParser_RuleType, Examples_Definition)

inline GherkinParser_RuleType *GherkinParser_RuleType_get_Examples(void);
J2OBJC_ENUM_CONSTANT(GherkinParser_RuleType, Examples)

inline GherkinParser_RuleType *GherkinParser_RuleType_get_Examples_Table(void);
J2OBJC_ENUM_CONSTANT(GherkinParser_RuleType, Examples_Table)

inline GherkinParser_RuleType *GherkinParser_RuleType_get_Step(void);
J2OBJC_ENUM_CONSTANT(GherkinParser_RuleType, Step)

inline GherkinParser_RuleType *GherkinParser_RuleType_get_Step_Arg(void);
J2OBJC_ENUM_CONSTANT(GherkinParser_RuleType, Step_Arg)

inline GherkinParser_RuleType *GherkinParser_RuleType_get_DataTable(void);
J2OBJC_ENUM_CONSTANT(GherkinParser_RuleType, DataTable)

inline GherkinParser_RuleType *GherkinParser_RuleType_get_DocString(void);
J2OBJC_ENUM_CONSTANT(GherkinParser_RuleType, DocString)

inline GherkinParser_RuleType *GherkinParser_RuleType_get_Tags(void);
J2OBJC_ENUM_CONSTANT(GherkinParser_RuleType, Tags)

inline GherkinParser_RuleType *GherkinParser_RuleType_get_Description_Helper(void);
J2OBJC_ENUM_CONSTANT(GherkinParser_RuleType, Description_Helper)

inline GherkinParser_RuleType *GherkinParser_RuleType_get_Description(void);
J2OBJC_ENUM_CONSTANT(GherkinParser_RuleType, Description)

FOUNDATION_EXPORT GherkinParser_RuleType *GherkinParser_RuleType_castWithGherkinParser_TokenType_(GherkinParser_TokenType *tokenType);

FOUNDATION_EXPORT IOSObjectArray *GherkinParser_RuleType_values(void);

FOUNDATION_EXPORT GherkinParser_RuleType *GherkinParser_RuleType_valueOfWithNSString_(NSString *name);

FOUNDATION_EXPORT GherkinParser_RuleType *GherkinParser_RuleType_fromOrdinal(NSUInteger ordinal);

J2OBJC_TYPE_LITERAL_HEADER(GherkinParser_RuleType)

#endif

#if !defined (GherkinParser_ParserContext_) && (INCLUDE_ALL_GherkinParser || defined(INCLUDE_GherkinParser_ParserContext))
#define GherkinParser_ParserContext_

@class GherkinParser;
@protocol GherkinParser_ITokenMatcher;
@protocol GherkinParser_ITokenScanner;
@protocol JavaUtilList;
@protocol JavaUtilQueue;

@interface GherkinParser_ParserContext : NSObject {
 @public
  id<GherkinParser_ITokenScanner> tokenScanner_;
  id<GherkinParser_ITokenMatcher> tokenMatcher_;
  id<JavaUtilQueue> tokenQueue_;
  id<JavaUtilList> errors_;
}

#pragma mark Package-Private

- (instancetype)initWithGherkinParser:(GherkinParser *)outer$
      withGherkinParser_ITokenScanner:(id<GherkinParser_ITokenScanner>)tokenScanner
      withGherkinParser_ITokenMatcher:(id<GherkinParser_ITokenMatcher>)tokenMatcher
                    withJavaUtilQueue:(id<JavaUtilQueue>)tokenQueue
                     withJavaUtilList:(id<JavaUtilList>)errors;

// Disallowed inherited constructors, do not use.

- (instancetype)init NS_UNAVAILABLE;

@end

J2OBJC_EMPTY_STATIC_INIT(GherkinParser_ParserContext)

J2OBJC_FIELD_SETTER(GherkinParser_ParserContext, tokenScanner_, id<GherkinParser_ITokenScanner>)
J2OBJC_FIELD_SETTER(GherkinParser_ParserContext, tokenMatcher_, id<GherkinParser_ITokenMatcher>)
J2OBJC_FIELD_SETTER(GherkinParser_ParserContext, tokenQueue_, id<JavaUtilQueue>)
J2OBJC_FIELD_SETTER(GherkinParser_ParserContext, errors_, id<JavaUtilList>)

FOUNDATION_EXPORT void GherkinParser_ParserContext_initWithGherkinParser_withGherkinParser_ITokenScanner_withGherkinParser_ITokenMatcher_withJavaUtilQueue_withJavaUtilList_(GherkinParser_ParserContext *self, GherkinParser *outer$, id<GherkinParser_ITokenScanner> tokenScanner, id<GherkinParser_ITokenMatcher> tokenMatcher, id<JavaUtilQueue> tokenQueue, id<JavaUtilList> errors);

FOUNDATION_EXPORT GherkinParser_ParserContext *new_GherkinParser_ParserContext_initWithGherkinParser_withGherkinParser_ITokenScanner_withGherkinParser_ITokenMatcher_withJavaUtilQueue_withJavaUtilList_(GherkinParser *outer$, id<GherkinParser_ITokenScanner> tokenScanner, id<GherkinParser_ITokenMatcher> tokenMatcher, id<JavaUtilQueue> tokenQueue, id<JavaUtilList> errors) NS_RETURNS_RETAINED;

FOUNDATION_EXPORT GherkinParser_ParserContext *create_GherkinParser_ParserContext_initWithGherkinParser_withGherkinParser_ITokenScanner_withGherkinParser_ITokenMatcher_withJavaUtilQueue_withJavaUtilList_(GherkinParser *outer$, id<GherkinParser_ITokenScanner> tokenScanner, id<GherkinParser_ITokenMatcher> tokenMatcher, id<JavaUtilQueue> tokenQueue, id<JavaUtilList> errors);

J2OBJC_TYPE_LITERAL_HEADER(GherkinParser_ParserContext)

#endif

#if !defined (GherkinParser_Builder_) && (INCLUDE_ALL_GherkinParser || defined(INCLUDE_GherkinParser_Builder))
#define GherkinParser_Builder_

@class GherkinParser_RuleType;
@class GherkinToken;

@protocol GherkinParser_Builder < JavaObject >

- (void)buildWithGherkinToken:(GherkinToken *)token;

- (void)startRuleWithGherkinParser_RuleType:(GherkinParser_RuleType *)ruleType;

- (void)endRuleWithGherkinParser_RuleType:(GherkinParser_RuleType *)ruleType;

- (id)getResult;

- (void)reset;

@end

J2OBJC_EMPTY_STATIC_INIT(GherkinParser_Builder)

J2OBJC_TYPE_LITERAL_HEADER(GherkinParser_Builder)

#endif

#if !defined (GherkinParser_ITokenScanner_) && (INCLUDE_ALL_GherkinParser || defined(INCLUDE_GherkinParser_ITokenScanner))
#define GherkinParser_ITokenScanner_

@class GherkinToken;

@protocol GherkinParser_ITokenScanner < JavaObject >

- (GherkinToken *)read;

@end

J2OBJC_EMPTY_STATIC_INIT(GherkinParser_ITokenScanner)

J2OBJC_TYPE_LITERAL_HEADER(GherkinParser_ITokenScanner)

#endif

#if !defined (GherkinParser_ITokenMatcher_) && (INCLUDE_ALL_GherkinParser || defined(INCLUDE_GherkinParser_ITokenMatcher))
#define GherkinParser_ITokenMatcher_

@class GherkinToken;

@protocol GherkinParser_ITokenMatcher < JavaObject >

- (jboolean)match_EOFWithGherkinToken:(GherkinToken *)token;

- (jboolean)match_EmptyWithGherkinToken:(GherkinToken *)token;

- (jboolean)match_CommentWithGherkinToken:(GherkinToken *)token;

- (jboolean)match_TagLineWithGherkinToken:(GherkinToken *)token;

- (jboolean)match_FeatureLineWithGherkinToken:(GherkinToken *)token;

- (jboolean)match_BackgroundLineWithGherkinToken:(GherkinToken *)token;

- (jboolean)match_ScenarioLineWithGherkinToken:(GherkinToken *)token;

- (jboolean)match_ScenarioOutlineLineWithGherkinToken:(GherkinToken *)token;

- (jboolean)match_ExamplesLineWithGherkinToken:(GherkinToken *)token;

- (jboolean)match_StepLineWithGherkinToken:(GherkinToken *)token;

- (jboolean)match_DocStringSeparatorWithGherkinToken:(GherkinToken *)token;

- (jboolean)match_TableRowWithGherkinToken:(GherkinToken *)token;

- (jboolean)match_LanguageWithGherkinToken:(GherkinToken *)token;

- (jboolean)match_OtherWithGherkinToken:(GherkinToken *)token;

- (void)reset;

@end

J2OBJC_EMPTY_STATIC_INIT(GherkinParser_ITokenMatcher)

J2OBJC_TYPE_LITERAL_HEADER(GherkinParser_ITokenMatcher)

#endif


#if __has_feature(nullability)
#pragma clang diagnostic pop
#endif
#pragma pop_macro("INCLUDE_ALL_GherkinParser")
