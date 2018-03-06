//
//  Generated by the J2ObjC translator.  DO NOT EDIT!
//  source: /Users/marcussmith/HambroPerks/laundrapp_org/gherkin-java/src/main/java/gherkin/GherkinDialectProvider.java
//

#include "J2ObjC_header.h"

#pragma push_macro("INCLUDE_ALL_GherkinGherkinDialectProvider")
#ifdef RESTRICT_GherkinGherkinDialectProvider
#define INCLUDE_ALL_GherkinGherkinDialectProvider 0
#else
#define INCLUDE_ALL_GherkinGherkinDialectProvider 1
#endif
#undef RESTRICT_GherkinGherkinDialectProvider

#if !defined (GherkinGherkinDialectProvider_) && (INCLUDE_ALL_GherkinGherkinDialectProvider || defined(INCLUDE_GherkinGherkinDialectProvider))
#define GherkinGherkinDialectProvider_

#define RESTRICT_GherkinIGherkinDialectProvider 1
#define INCLUDE_GherkinIGherkinDialectProvider 1
#include "gherkin/IGherkinDialectProvider.h"

@class GherkinAstLocation;
@class GherkinGherkinDialect;
@protocol JavaUtilList;

@interface GherkinGherkinDialectProvider : NSObject < GherkinIGherkinDialectProvider >

#pragma mark Public

- (instancetype)init;

- (instancetype)initWithNSString:(NSString *)default_dialect_name;

- (GherkinGherkinDialect *)getDefaultDialect;

- (GherkinGherkinDialect *)getDialectWithNSString:(NSString *)language
                           withGherkinAstLocation:(GherkinAstLocation *)location;

- (id<JavaUtilList>)getLanguages;

@end

J2OBJC_STATIC_INIT(GherkinGherkinDialectProvider)

FOUNDATION_EXPORT void GherkinGherkinDialectProvider_initWithNSString_(GherkinGherkinDialectProvider *self, NSString *default_dialect_name);

FOUNDATION_EXPORT GherkinGherkinDialectProvider *new_GherkinGherkinDialectProvider_initWithNSString_(NSString *default_dialect_name) NS_RETURNS_RETAINED;

FOUNDATION_EXPORT GherkinGherkinDialectProvider *create_GherkinGherkinDialectProvider_initWithNSString_(NSString *default_dialect_name);

FOUNDATION_EXPORT void GherkinGherkinDialectProvider_init(GherkinGherkinDialectProvider *self);

FOUNDATION_EXPORT GherkinGherkinDialectProvider *new_GherkinGherkinDialectProvider_init(void) NS_RETURNS_RETAINED;

FOUNDATION_EXPORT GherkinGherkinDialectProvider *create_GherkinGherkinDialectProvider_init(void);

J2OBJC_TYPE_LITERAL_HEADER(GherkinGherkinDialectProvider)

#endif

#pragma pop_macro("INCLUDE_ALL_GherkinGherkinDialectProvider")
