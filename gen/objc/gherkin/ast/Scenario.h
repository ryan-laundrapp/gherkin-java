//
//  Generated by the J2ObjC translator.  DO NOT EDIT!
//  source: /Users/marcussmith/HambroPerks/laundrapp_org/gherkin-java/src/main/java/gherkin/ast/Scenario.java
//

#include "J2ObjC_header.h"

#pragma push_macro("INCLUDE_ALL_GherkinAstScenario")
#ifdef RESTRICT_GherkinAstScenario
#define INCLUDE_ALL_GherkinAstScenario 0
#else
#define INCLUDE_ALL_GherkinAstScenario 1
#endif
#undef RESTRICT_GherkinAstScenario

#if __has_feature(nullability)
#pragma clang diagnostic push
#pragma GCC diagnostic ignored "-Wnullability-completeness"
#endif

#if !defined (GherkinAstScenario_) && (INCLUDE_ALL_GherkinAstScenario || defined(INCLUDE_GherkinAstScenario))
#define GherkinAstScenario_

#define RESTRICT_GherkinAstScenarioDefinition 1
#define INCLUDE_GherkinAstScenarioDefinition 1
#include "gherkin/ast/ScenarioDefinition.h"

@class GherkinAstLocation;
@protocol JavaUtilList;

@interface GherkinAstScenario : GherkinAstScenarioDefinition

#pragma mark Public

- (instancetype __nonnull)initWithJavaUtilList:(id<JavaUtilList>)tags
                        withGherkinAstLocation:(GherkinAstLocation *)location
                                  withNSString:(NSString *)keyword
                                  withNSString:(NSString *)name
                                  withNSString:(NSString *)description_
                              withJavaUtilList:(id<JavaUtilList>)steps;

- (id<JavaUtilList>)getTags;

// Disallowed inherited constructors, do not use.

- (instancetype __nonnull)initWithGherkinAstLocation:(GherkinAstLocation *)arg0
                                        withNSString:(NSString *)arg1
                                        withNSString:(NSString *)arg2
                                        withNSString:(NSString *)arg3
                                    withJavaUtilList:(id<JavaUtilList>)arg4 NS_UNAVAILABLE;

@end

J2OBJC_EMPTY_STATIC_INIT(GherkinAstScenario)

FOUNDATION_EXPORT void GherkinAstScenario_initWithJavaUtilList_withGherkinAstLocation_withNSString_withNSString_withNSString_withJavaUtilList_(GherkinAstScenario *self, id<JavaUtilList> tags, GherkinAstLocation *location, NSString *keyword, NSString *name, NSString *description_, id<JavaUtilList> steps);

FOUNDATION_EXPORT GherkinAstScenario *new_GherkinAstScenario_initWithJavaUtilList_withGherkinAstLocation_withNSString_withNSString_withNSString_withJavaUtilList_(id<JavaUtilList> tags, GherkinAstLocation *location, NSString *keyword, NSString *name, NSString *description_, id<JavaUtilList> steps) NS_RETURNS_RETAINED;

FOUNDATION_EXPORT GherkinAstScenario *create_GherkinAstScenario_initWithJavaUtilList_withGherkinAstLocation_withNSString_withNSString_withNSString_withJavaUtilList_(id<JavaUtilList> tags, GherkinAstLocation *location, NSString *keyword, NSString *name, NSString *description_, id<JavaUtilList> steps);

J2OBJC_TYPE_LITERAL_HEADER(GherkinAstScenario)

#endif


#if __has_feature(nullability)
#pragma clang diagnostic pop
#endif
#pragma pop_macro("INCLUDE_ALL_GherkinAstScenario")
