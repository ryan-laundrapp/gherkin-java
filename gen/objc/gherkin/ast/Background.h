//
//  Generated by the J2ObjC translator.  DO NOT EDIT!
//  source: /Users/marcussmith/HambroPerks/laundrapp_org/gherkin-java/src/main/java/gherkin/ast/Background.java
//

#include "J2ObjC_header.h"

#pragma push_macro("INCLUDE_ALL_GherkinAstBackground")
#ifdef RESTRICT_GherkinAstBackground
#define INCLUDE_ALL_GherkinAstBackground 0
#else
#define INCLUDE_ALL_GherkinAstBackground 1
#endif
#undef RESTRICT_GherkinAstBackground

#if __has_feature(nullability)
#pragma clang diagnostic push
#pragma GCC diagnostic ignored "-Wnullability-completeness"
#endif

#if !defined (GherkinAstBackground_) && (INCLUDE_ALL_GherkinAstBackground || defined(INCLUDE_GherkinAstBackground))
#define GherkinAstBackground_

#define RESTRICT_GherkinAstScenarioDefinition 1
#define INCLUDE_GherkinAstScenarioDefinition 1
#include "gherkin/ast/ScenarioDefinition.h"

@class GherkinAstLocation;
@protocol JavaUtilList;

@interface GherkinAstBackground : GherkinAstScenarioDefinition

#pragma mark Public

- (instancetype __nonnull)initWithGherkinAstLocation:(GherkinAstLocation *)location
                                        withNSString:(NSString *)keyword
                                        withNSString:(NSString *)name
                                        withNSString:(NSString *)description_
                                    withJavaUtilList:(id<JavaUtilList>)steps;

@end

J2OBJC_EMPTY_STATIC_INIT(GherkinAstBackground)

FOUNDATION_EXPORT void GherkinAstBackground_initWithGherkinAstLocation_withNSString_withNSString_withNSString_withJavaUtilList_(GherkinAstBackground *self, GherkinAstLocation *location, NSString *keyword, NSString *name, NSString *description_, id<JavaUtilList> steps);

FOUNDATION_EXPORT GherkinAstBackground *new_GherkinAstBackground_initWithGherkinAstLocation_withNSString_withNSString_withNSString_withJavaUtilList_(GherkinAstLocation *location, NSString *keyword, NSString *name, NSString *description_, id<JavaUtilList> steps) NS_RETURNS_RETAINED;

FOUNDATION_EXPORT GherkinAstBackground *create_GherkinAstBackground_initWithGherkinAstLocation_withNSString_withNSString_withNSString_withJavaUtilList_(GherkinAstLocation *location, NSString *keyword, NSString *name, NSString *description_, id<JavaUtilList> steps);

J2OBJC_TYPE_LITERAL_HEADER(GherkinAstBackground)

#endif


#if __has_feature(nullability)
#pragma clang diagnostic pop
#endif
#pragma pop_macro("INCLUDE_ALL_GherkinAstBackground")
