//
//  Generated by the J2ObjC translator.  DO NOT EDIT!
//  source: /Users/marcussmith/HambroPerks/laundrapp_org/gherkin-java/src/main/java/gherkin/ast/GherkinDocument.java
//

#include "J2ObjC_header.h"

#pragma push_macro("INCLUDE_ALL_GherkinAstGherkinDocument")
#ifdef RESTRICT_GherkinAstGherkinDocument
#define INCLUDE_ALL_GherkinAstGherkinDocument 0
#else
#define INCLUDE_ALL_GherkinAstGherkinDocument 1
#endif
#undef RESTRICT_GherkinAstGherkinDocument

#if !defined (GherkinAstGherkinDocument_) && (INCLUDE_ALL_GherkinAstGherkinDocument || defined(INCLUDE_GherkinAstGherkinDocument))
#define GherkinAstGherkinDocument_

#define RESTRICT_GherkinAstNode 1
#define INCLUDE_GherkinAstNode 1
#include "gherkin/ast/Node.h"

@class GherkinAstFeature;
@class GherkinAstLocation;
@protocol JavaUtilList;

@interface GherkinAstGherkinDocument : GherkinAstNode

#pragma mark Public

- (instancetype)initWithGherkinAstFeature:(GherkinAstFeature *)feature
                         withJavaUtilList:(id<JavaUtilList>)comments;

- (id<JavaUtilList>)getComments;

- (GherkinAstFeature *)getFeature;

// Disallowed inherited constructors, do not use.

- (instancetype)initWithGherkinAstLocation:(GherkinAstLocation *)arg0 NS_UNAVAILABLE;

@end

J2OBJC_EMPTY_STATIC_INIT(GherkinAstGherkinDocument)

FOUNDATION_EXPORT void GherkinAstGherkinDocument_initWithGherkinAstFeature_withJavaUtilList_(GherkinAstGherkinDocument *self, GherkinAstFeature *feature, id<JavaUtilList> comments);

FOUNDATION_EXPORT GherkinAstGherkinDocument *new_GherkinAstGherkinDocument_initWithGherkinAstFeature_withJavaUtilList_(GherkinAstFeature *feature, id<JavaUtilList> comments) NS_RETURNS_RETAINED;

FOUNDATION_EXPORT GherkinAstGherkinDocument *create_GherkinAstGherkinDocument_initWithGherkinAstFeature_withJavaUtilList_(GherkinAstFeature *feature, id<JavaUtilList> comments);

J2OBJC_TYPE_LITERAL_HEADER(GherkinAstGherkinDocument)

#endif

#pragma pop_macro("INCLUDE_ALL_GherkinAstGherkinDocument")