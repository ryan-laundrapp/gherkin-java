//
//  Generated by the J2ObjC translator.  DO NOT EDIT!
//  source: /Users/marcussmith/HambroPerks/laundrapp_org/gherkin-java/src/main/java/gherkin/events/GherkinDocumentEvent.java
//

#include "J2ObjC_header.h"

#pragma push_macro("INCLUDE_ALL_GherkinEventsGherkinDocumentEvent")
#ifdef RESTRICT_GherkinEventsGherkinDocumentEvent
#define INCLUDE_ALL_GherkinEventsGherkinDocumentEvent 0
#else
#define INCLUDE_ALL_GherkinEventsGherkinDocumentEvent 1
#endif
#undef RESTRICT_GherkinEventsGherkinDocumentEvent

#if !defined (GherkinEventsGherkinDocumentEvent_) && (INCLUDE_ALL_GherkinEventsGherkinDocumentEvent || defined(INCLUDE_GherkinEventsGherkinDocumentEvent))
#define GherkinEventsGherkinDocumentEvent_

#define RESTRICT_GherkinEventsCucumberEvent 1
#define INCLUDE_GherkinEventsCucumberEvent 1
#include "gherkin/events/CucumberEvent.h"

@class GherkinAstGherkinDocument;

@interface GherkinEventsGherkinDocumentEvent : NSObject < GherkinEventsCucumberEvent > {
 @public
  NSString *uri_;
  GherkinAstGherkinDocument *document_;
}

#pragma mark Public

- (instancetype)initWithNSString:(NSString *)uri
   withGherkinAstGherkinDocument:(GherkinAstGherkinDocument *)document;

// Disallowed inherited constructors, do not use.

- (instancetype)init NS_UNAVAILABLE;

@end

J2OBJC_EMPTY_STATIC_INIT(GherkinEventsGherkinDocumentEvent)

J2OBJC_FIELD_SETTER(GherkinEventsGherkinDocumentEvent, uri_, NSString *)
J2OBJC_FIELD_SETTER(GherkinEventsGherkinDocumentEvent, document_, GherkinAstGherkinDocument *)

FOUNDATION_EXPORT void GherkinEventsGherkinDocumentEvent_initWithNSString_withGherkinAstGherkinDocument_(GherkinEventsGherkinDocumentEvent *self, NSString *uri, GherkinAstGherkinDocument *document);

FOUNDATION_EXPORT GherkinEventsGherkinDocumentEvent *new_GherkinEventsGherkinDocumentEvent_initWithNSString_withGherkinAstGherkinDocument_(NSString *uri, GherkinAstGherkinDocument *document) NS_RETURNS_RETAINED;

FOUNDATION_EXPORT GherkinEventsGherkinDocumentEvent *create_GherkinEventsGherkinDocumentEvent_initWithNSString_withGherkinAstGherkinDocument_(NSString *uri, GherkinAstGherkinDocument *document);

J2OBJC_TYPE_LITERAL_HEADER(GherkinEventsGherkinDocumentEvent)

#endif

#pragma pop_macro("INCLUDE_ALL_GherkinEventsGherkinDocumentEvent")
