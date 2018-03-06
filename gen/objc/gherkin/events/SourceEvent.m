//
//  Generated by the J2ObjC translator.  DO NOT EDIT!
//  source: /Users/marcussmith/HambroPerks/laundrapp_org/gherkin-java/src/main/java/gherkin/events/SourceEvent.java
//

#include "J2ObjC_source.h"
#include "gherkin/events/SourceEvent.h"

@interface GherkinEventsSourceEvent () {
 @public
  NSString *type_;
  GherkinEventsSourceEvent_Media *media_;
}

@end

J2OBJC_FIELD_SETTER(GherkinEventsSourceEvent, type_, NSString *)
J2OBJC_FIELD_SETTER(GherkinEventsSourceEvent, media_, GherkinEventsSourceEvent_Media *)

@interface GherkinEventsSourceEvent_Media () {
 @public
  NSString *encoding_;
  NSString *type_;
}

@end

J2OBJC_FIELD_SETTER(GherkinEventsSourceEvent_Media, encoding_, NSString *)
J2OBJC_FIELD_SETTER(GherkinEventsSourceEvent_Media, type_, NSString *)

@implementation GherkinEventsSourceEvent

- (instancetype)initWithNSString:(NSString *)uri
                    withNSString:(NSString *)data {
  GherkinEventsSourceEvent_initWithNSString_withNSString_(self, uri, data);
  return self;
}

- (void)dealloc {
  RELEASE_(type_);
  RELEASE_(uri_);
  RELEASE_(data_);
  RELEASE_(media_);
  [super dealloc];
}

@end

void GherkinEventsSourceEvent_initWithNSString_withNSString_(GherkinEventsSourceEvent *self, NSString *uri, NSString *data) {
  NSObject_init(self);
  JreStrongAssign(&self->type_, @"source");
  JreStrongAssignAndConsume(&self->media_, new_GherkinEventsSourceEvent_Media_init());
  JreStrongAssign(&self->uri_, uri);
  JreStrongAssign(&self->data_, data);
}

GherkinEventsSourceEvent *new_GherkinEventsSourceEvent_initWithNSString_withNSString_(NSString *uri, NSString *data) {
  J2OBJC_NEW_IMPL(GherkinEventsSourceEvent, initWithNSString_withNSString_, uri, data)
}

GherkinEventsSourceEvent *create_GherkinEventsSourceEvent_initWithNSString_withNSString_(NSString *uri, NSString *data) {
  J2OBJC_CREATE_IMPL(GherkinEventsSourceEvent, initWithNSString_withNSString_, uri, data)
}

J2OBJC_CLASS_TYPE_LITERAL_SOURCE(GherkinEventsSourceEvent)

@implementation GherkinEventsSourceEvent_Media

J2OBJC_IGNORE_DESIGNATED_BEGIN
- (instancetype)init {
  GherkinEventsSourceEvent_Media_init(self);
  return self;
}
J2OBJC_IGNORE_DESIGNATED_END

- (void)dealloc {
  RELEASE_(encoding_);
  RELEASE_(type_);
  [super dealloc];
}

@end

void GherkinEventsSourceEvent_Media_init(GherkinEventsSourceEvent_Media *self) {
  NSObject_init(self);
  JreStrongAssign(&self->encoding_, @"utf-8");
  JreStrongAssign(&self->type_, @"text/x.cucumber.gherkin+plain");
}

GherkinEventsSourceEvent_Media *new_GherkinEventsSourceEvent_Media_init() {
  J2OBJC_NEW_IMPL(GherkinEventsSourceEvent_Media, init)
}

GherkinEventsSourceEvent_Media *create_GherkinEventsSourceEvent_Media_init() {
  J2OBJC_CREATE_IMPL(GherkinEventsSourceEvent_Media, init)
}

J2OBJC_CLASS_TYPE_LITERAL_SOURCE(GherkinEventsSourceEvent_Media)
