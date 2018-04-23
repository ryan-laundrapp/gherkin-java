//
//  Generated by the J2ObjC translator.  DO NOT EDIT!
//  source: /Users/marcussmith/HambroPerks/laundrapp_org/gherkin-java/src/main/java/gherkin/ast/Scenario.java
//

#include "J2ObjC_source.h"
#include "gherkin/ast/Location.h"
#include "gherkin/ast/Scenario.h"
#include "gherkin/ast/ScenarioDefinition.h"
#include "java/util/Collections.h"
#include "java/util/List.h"

@interface GherkinAstScenario () {
 @public
  id<JavaUtilList> tags_;
}

@end

J2OBJC_FIELD_SETTER(GherkinAstScenario, tags_, id<JavaUtilList>)

@implementation GherkinAstScenario

- (instancetype)initWithJavaUtilList:(id<JavaUtilList>)tags
              withGherkinAstLocation:(GherkinAstLocation *)location
                        withNSString:(NSString *)keyword
                        withNSString:(NSString *)name
                        withNSString:(NSString *)description_
                    withJavaUtilList:(id<JavaUtilList>)steps {
  GherkinAstScenario_initWithJavaUtilList_withGherkinAstLocation_withNSString_withNSString_withNSString_withJavaUtilList_(self, tags, location, keyword, name, description_, steps);
  return self;
}

- (id<JavaUtilList>)getTags {
  return tags_;
}

- (void)dealloc {
  RELEASE_(tags_);
  [super dealloc];
}

@end

void GherkinAstScenario_initWithJavaUtilList_withGherkinAstLocation_withNSString_withNSString_withNSString_withJavaUtilList_(GherkinAstScenario *self, id<JavaUtilList> tags, GherkinAstLocation *location, NSString *keyword, NSString *name, NSString *description_, id<JavaUtilList> steps) {
  GherkinAstScenarioDefinition_initWithGherkinAstLocation_withNSString_withNSString_withNSString_withJavaUtilList_(self, location, keyword, name, description_, steps);
  JreStrongAssign(&self->tags_, JavaUtilCollections_unmodifiableListWithJavaUtilList_(tags));
}

GherkinAstScenario *new_GherkinAstScenario_initWithJavaUtilList_withGherkinAstLocation_withNSString_withNSString_withNSString_withJavaUtilList_(id<JavaUtilList> tags, GherkinAstLocation *location, NSString *keyword, NSString *name, NSString *description_, id<JavaUtilList> steps) {
  J2OBJC_NEW_IMPL(GherkinAstScenario, initWithJavaUtilList_withGherkinAstLocation_withNSString_withNSString_withNSString_withJavaUtilList_, tags, location, keyword, name, description_, steps)
}

GherkinAstScenario *create_GherkinAstScenario_initWithJavaUtilList_withGherkinAstLocation_withNSString_withNSString_withNSString_withJavaUtilList_(id<JavaUtilList> tags, GherkinAstLocation *location, NSString *keyword, NSString *name, NSString *description_, id<JavaUtilList> steps) {
  J2OBJC_CREATE_IMPL(GherkinAstScenario, initWithJavaUtilList_withGherkinAstLocation_withNSString_withNSString_withNSString_withJavaUtilList_, tags, location, keyword, name, description_, steps)
}

J2OBJC_CLASS_TYPE_LITERAL_SOURCE(GherkinAstScenario)