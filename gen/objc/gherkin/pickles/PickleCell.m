//
//  Generated by the J2ObjC translator.  DO NOT EDIT!
//  source: /Users/marcussmith/HambroPerks/laundrapp_org/gherkin-java/src/main/java/gherkin/pickles/PickleCell.java
//

#include "J2ObjC_source.h"
#include "gherkin/pickles/PickleCell.h"
#include "gherkin/pickles/PickleLocation.h"

@interface GherkinPicklesPickleCell () {
 @public
  GherkinPicklesPickleLocation *location_;
  NSString *value_;
}

@end

J2OBJC_FIELD_SETTER(GherkinPicklesPickleCell, location_, GherkinPicklesPickleLocation *)
J2OBJC_FIELD_SETTER(GherkinPicklesPickleCell, value_, NSString *)

@implementation GherkinPicklesPickleCell

- (instancetype __nonnull)initWithGherkinPicklesPickleLocation:(GherkinPicklesPickleLocation *)location
                                                  withNSString:(NSString *)value {
  GherkinPicklesPickleCell_initWithGherkinPicklesPickleLocation_withNSString_(self, location, value);
  return self;
}

- (NSString *)getValue {
  return value_;
}

- (GherkinPicklesPickleLocation *)getLocation {
  return location_;
}

- (void)dealloc {
  RELEASE_(location_);
  RELEASE_(value_);
  [super dealloc];
}

@end

void GherkinPicklesPickleCell_initWithGherkinPicklesPickleLocation_withNSString_(GherkinPicklesPickleCell *self, GherkinPicklesPickleLocation *location, NSString *value) {
  NSObject_init(self);
  JreStrongAssign(&self->location_, location);
  JreStrongAssign(&self->value_, value);
}

GherkinPicklesPickleCell *new_GherkinPicklesPickleCell_initWithGherkinPicklesPickleLocation_withNSString_(GherkinPicklesPickleLocation *location, NSString *value) {
  J2OBJC_NEW_IMPL(GherkinPicklesPickleCell, initWithGherkinPicklesPickleLocation_withNSString_, location, value)
}

GherkinPicklesPickleCell *create_GherkinPicklesPickleCell_initWithGherkinPicklesPickleLocation_withNSString_(GherkinPicklesPickleLocation *location, NSString *value) {
  J2OBJC_CREATE_IMPL(GherkinPicklesPickleCell, initWithGherkinPicklesPickleLocation_withNSString_, location, value)
}

J2OBJC_CLASS_TYPE_LITERAL_SOURCE(GherkinPicklesPickleCell)
