//
//  Generated by the J2ObjC translator.  DO NOT EDIT!
//  source: /Users/marcussmith/HambroPerks/laundrapp_org/gherkin-java/src/main/java/gherkin/GherkinLineSpan.java
//

#include "J2ObjC_header.h"

#pragma push_macro("INCLUDE_ALL_GherkinGherkinLineSpan")
#ifdef RESTRICT_GherkinGherkinLineSpan
#define INCLUDE_ALL_GherkinGherkinLineSpan 0
#else
#define INCLUDE_ALL_GherkinGherkinLineSpan 1
#endif
#undef RESTRICT_GherkinGherkinLineSpan

#if __has_feature(nullability)
#pragma clang diagnostic push
#pragma GCC diagnostic ignored "-Wnullability-completeness"
#endif

#if !defined (GherkinGherkinLineSpan_) && (INCLUDE_ALL_GherkinGherkinLineSpan || defined(INCLUDE_GherkinGherkinLineSpan))
#define GherkinGherkinLineSpan_

@interface GherkinGherkinLineSpan : NSObject {
 @public
  jint column_;
  NSString *text_;
}

#pragma mark Public

- (instancetype __nonnull)initWithInt:(jint)column
                         withNSString:(NSString *)text;

- (jboolean)isEqual:(id)o;

- (NSUInteger)hash;

// Disallowed inherited constructors, do not use.

- (instancetype __nonnull)init NS_UNAVAILABLE;

@end

J2OBJC_EMPTY_STATIC_INIT(GherkinGherkinLineSpan)

J2OBJC_FIELD_SETTER(GherkinGherkinLineSpan, text_, NSString *)

FOUNDATION_EXPORT void GherkinGherkinLineSpan_initWithInt_withNSString_(GherkinGherkinLineSpan *self, jint column, NSString *text);

FOUNDATION_EXPORT GherkinGherkinLineSpan *new_GherkinGherkinLineSpan_initWithInt_withNSString_(jint column, NSString *text) NS_RETURNS_RETAINED;

FOUNDATION_EXPORT GherkinGherkinLineSpan *create_GherkinGherkinLineSpan_initWithInt_withNSString_(jint column, NSString *text);

J2OBJC_TYPE_LITERAL_HEADER(GherkinGherkinLineSpan)

#endif


#if __has_feature(nullability)
#pragma clang diagnostic pop
#endif
#pragma pop_macro("INCLUDE_ALL_GherkinGherkinLineSpan")
