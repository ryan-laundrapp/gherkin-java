//
//  Generated by the J2ObjC translator.  DO NOT EDIT!
//  source: /Users/marcussmith/HambroPerks/laundrapp_org/gherkin-java/src/main/java/gherkin/pickles/PickleLocation.java
//

#include "J2ObjC_header.h"

#pragma push_macro("INCLUDE_ALL_GherkinPicklesPickleLocation")
#ifdef RESTRICT_GherkinPicklesPickleLocation
#define INCLUDE_ALL_GherkinPicklesPickleLocation 0
#else
#define INCLUDE_ALL_GherkinPicklesPickleLocation 1
#endif
#undef RESTRICT_GherkinPicklesPickleLocation

#if __has_feature(nullability)
#pragma clang diagnostic push
#pragma GCC diagnostic ignored "-Wnullability-completeness"
#endif

#if !defined (GherkinPicklesPickleLocation_) && (INCLUDE_ALL_GherkinPicklesPickleLocation || defined(INCLUDE_GherkinPicklesPickleLocation))
#define GherkinPicklesPickleLocation_

@interface GherkinPicklesPickleLocation : NSObject

#pragma mark Public

- (instancetype __nonnull)initWithInt:(jint)line
                              withInt:(jint)column;

- (jint)getColumn;

- (jint)getLine;

// Disallowed inherited constructors, do not use.

- (instancetype __nonnull)init NS_UNAVAILABLE;

@end

J2OBJC_EMPTY_STATIC_INIT(GherkinPicklesPickleLocation)

FOUNDATION_EXPORT void GherkinPicklesPickleLocation_initWithInt_withInt_(GherkinPicklesPickleLocation *self, jint line, jint column);

FOUNDATION_EXPORT GherkinPicklesPickleLocation *new_GherkinPicklesPickleLocation_initWithInt_withInt_(jint line, jint column) NS_RETURNS_RETAINED;

FOUNDATION_EXPORT GherkinPicklesPickleLocation *create_GherkinPicklesPickleLocation_initWithInt_withInt_(jint line, jint column);

J2OBJC_TYPE_LITERAL_HEADER(GherkinPicklesPickleLocation)

#endif


#if __has_feature(nullability)
#pragma clang diagnostic pop
#endif
#pragma pop_macro("INCLUDE_ALL_GherkinPicklesPickleLocation")
