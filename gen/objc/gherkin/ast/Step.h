//
//  Generated by the J2ObjC translator.  DO NOT EDIT!
//  source: /Users/marcussmith/HambroPerks/laundrapp_org/gherkin-java/src/main/java/gherkin/ast/Step.java
//

#include "J2ObjC_header.h"

#pragma push_macro("INCLUDE_ALL_GherkinAstStep")
#ifdef RESTRICT_GherkinAstStep
#define INCLUDE_ALL_GherkinAstStep 0
#else
#define INCLUDE_ALL_GherkinAstStep 1
#endif
#undef RESTRICT_GherkinAstStep

#if !defined (GherkinAstStep_) && (INCLUDE_ALL_GherkinAstStep || defined(INCLUDE_GherkinAstStep))
#define GherkinAstStep_

#define RESTRICT_GherkinAstNode 1
#define INCLUDE_GherkinAstNode 1
#include "gherkin/ast/Node.h"

@class GherkinAstLocation;

@interface GherkinAstStep : GherkinAstNode

#pragma mark Public

- (instancetype)initWithGherkinAstLocation:(GherkinAstLocation *)location
                              withNSString:(NSString *)keyword
                              withNSString:(NSString *)text
                        withGherkinAstNode:(GherkinAstNode *)argument;

- (GherkinAstNode *)getArgument;

- (NSString *)getKeyword;

- (NSString *)getText;

// Disallowed inherited constructors, do not use.

- (instancetype)initWithGherkinAstLocation:(GherkinAstLocation *)arg0 NS_UNAVAILABLE;

@end

J2OBJC_EMPTY_STATIC_INIT(GherkinAstStep)

FOUNDATION_EXPORT void GherkinAstStep_initWithGherkinAstLocation_withNSString_withNSString_withGherkinAstNode_(GherkinAstStep *self, GherkinAstLocation *location, NSString *keyword, NSString *text, GherkinAstNode *argument);

FOUNDATION_EXPORT GherkinAstStep *new_GherkinAstStep_initWithGherkinAstLocation_withNSString_withNSString_withGherkinAstNode_(GherkinAstLocation *location, NSString *keyword, NSString *text, GherkinAstNode *argument) NS_RETURNS_RETAINED;

FOUNDATION_EXPORT GherkinAstStep *create_GherkinAstStep_initWithGherkinAstLocation_withNSString_withNSString_withGherkinAstNode_(GherkinAstLocation *location, NSString *keyword, NSString *text, GherkinAstNode *argument);

J2OBJC_TYPE_LITERAL_HEADER(GherkinAstStep)

#endif

#pragma pop_macro("INCLUDE_ALL_GherkinAstStep")
