//
//  Generated by the J2ObjC translator.  DO NOT EDIT!
//  source: /Users/marcussmith/HambroPerks/laundrapp_org/gherkin-java/src/main/java/gherkin/ParserException.java
//

#include "IOSClass.h"
#include "IOSObjectArray.h"
#include "J2ObjC_source.h"
#include "gherkin/IGherkinLine.h"
#include "gherkin/ParserException.h"
#include "gherkin/StringUtils.h"
#include "gherkin/Token.h"
#include "gherkin/ast/Location.h"
#include "java/lang/Integer.h"
#include "java/lang/NullPointerException.h"
#include "java/lang/RuntimeException.h"
#include "java/util/Collections.h"
#include "java/util/List.h"

__attribute__((unused)) static NSString *GherkinParserException_getMessageWithNSString_withGherkinAstLocation_(NSString *message, GherkinAstLocation *location);

__attribute__((unused)) static NSString *GherkinParserException_UnexpectedTokenException_getMessageWithGherkinToken_withJavaUtilList_(GherkinToken *receivedToken, id<JavaUtilList> expectedTokenTypes);

__attribute__((unused)) static GherkinAstLocation *GherkinParserException_UnexpectedTokenException_getLocationWithGherkinToken_(GherkinToken *receivedToken);

__attribute__((unused)) static NSString *GherkinParserException_UnexpectedEOFException_getMessageWithJavaUtilList_(id<JavaUtilList> expectedTokenTypes);

__attribute__((unused)) static NSString *GherkinParserException_CompositeParserException_getMessageWithJavaUtilList_(id<JavaUtilList> errors);

@interface GherkinParserException_CompositeParserException_1 : NSObject < GherkinStringUtils_ToString >

- (NSString *)toStringWithId:(GherkinParserException *)e;

@end

J2OBJC_EMPTY_STATIC_INIT(GherkinParserException_CompositeParserException_1)

__attribute__((unused)) static void GherkinParserException_CompositeParserException_1_init(GherkinParserException_CompositeParserException_1 *self);

__attribute__((unused)) static GherkinParserException_CompositeParserException_1 *new_GherkinParserException_CompositeParserException_1_init(void) NS_RETURNS_RETAINED;

__attribute__((unused)) static GherkinParserException_CompositeParserException_1 *create_GherkinParserException_CompositeParserException_1_init(void);

@implementation GherkinParserException

- (instancetype __nonnull)initWithNSString:(NSString *)message {
  GherkinParserException_initWithNSString_(self, message);
  return self;
}

- (instancetype __nonnull)initWithNSString:(NSString *)message
                    withGherkinAstLocation:(GherkinAstLocation *)location {
  GherkinParserException_initWithNSString_withGherkinAstLocation_(self, message, location);
  return self;
}

- (void)dealloc {
  RELEASE_(location_);
  [super dealloc];
}

@end

void GherkinParserException_initWithNSString_(GherkinParserException *self, NSString *message) {
  JavaLangRuntimeException_initWithNSString_(self, message);
  JreStrongAssign(&self->location_, nil);
}

GherkinParserException *new_GherkinParserException_initWithNSString_(NSString *message) {
  J2OBJC_NEW_IMPL(GherkinParserException, initWithNSString_, message)
}

GherkinParserException *create_GherkinParserException_initWithNSString_(NSString *message) {
  J2OBJC_CREATE_IMPL(GherkinParserException, initWithNSString_, message)
}

void GherkinParserException_initWithNSString_withGherkinAstLocation_(GherkinParserException *self, NSString *message, GherkinAstLocation *location) {
  JavaLangRuntimeException_initWithNSString_(self, GherkinParserException_getMessageWithNSString_withGherkinAstLocation_(message, location));
  JreStrongAssign(&self->location_, location);
}

GherkinParserException *new_GherkinParserException_initWithNSString_withGherkinAstLocation_(NSString *message, GherkinAstLocation *location) {
  J2OBJC_NEW_IMPL(GherkinParserException, initWithNSString_withGherkinAstLocation_, message, location)
}

GherkinParserException *create_GherkinParserException_initWithNSString_withGherkinAstLocation_(NSString *message, GherkinAstLocation *location) {
  J2OBJC_CREATE_IMPL(GherkinParserException, initWithNSString_withGherkinAstLocation_, message, location)
}

NSString *GherkinParserException_getMessageWithNSString_withGherkinAstLocation_(NSString *message, GherkinAstLocation *location) {
  GherkinParserException_initialize();
  return NSString_java_formatWithNSString_withNSObjectArray_(@"(%s:%s): %s", [IOSObjectArray arrayWithObjects:(id[]){ JavaLangInteger_valueOfWithInt_([((GherkinAstLocation *) nil_chk(location)) getLine]), JavaLangInteger_valueOfWithInt_([location getColumn]), message } count:3 type:NSObject_class_()]);
}

J2OBJC_CLASS_TYPE_LITERAL_SOURCE(GherkinParserException)

@implementation GherkinParserException_AstBuilderException

- (instancetype __nonnull)initWithNSString:(NSString *)message
                    withGherkinAstLocation:(GherkinAstLocation *)location {
  GherkinParserException_AstBuilderException_initWithNSString_withGherkinAstLocation_(self, message, location);
  return self;
}

@end

void GherkinParserException_AstBuilderException_initWithNSString_withGherkinAstLocation_(GherkinParserException_AstBuilderException *self, NSString *message, GherkinAstLocation *location) {
  GherkinParserException_initWithNSString_withGherkinAstLocation_(self, message, location);
}

GherkinParserException_AstBuilderException *new_GherkinParserException_AstBuilderException_initWithNSString_withGherkinAstLocation_(NSString *message, GherkinAstLocation *location) {
  J2OBJC_NEW_IMPL(GherkinParserException_AstBuilderException, initWithNSString_withGherkinAstLocation_, message, location)
}

GherkinParserException_AstBuilderException *create_GherkinParserException_AstBuilderException_initWithNSString_withGherkinAstLocation_(NSString *message, GherkinAstLocation *location) {
  J2OBJC_CREATE_IMPL(GherkinParserException_AstBuilderException, initWithNSString_withGherkinAstLocation_, message, location)
}

J2OBJC_CLASS_TYPE_LITERAL_SOURCE(GherkinParserException_AstBuilderException)

@implementation GherkinParserException_NoSuchLanguageException

- (instancetype __nonnull)initWithNSString:(NSString *)language
                    withGherkinAstLocation:(GherkinAstLocation *)location {
  GherkinParserException_NoSuchLanguageException_initWithNSString_withGherkinAstLocation_(self, language, location);
  return self;
}

@end

void GherkinParserException_NoSuchLanguageException_initWithNSString_withGherkinAstLocation_(GherkinParserException_NoSuchLanguageException *self, NSString *language, GherkinAstLocation *location) {
  GherkinParserException_initWithNSString_withGherkinAstLocation_(self, JreStrcat("$$", @"Language not supported: ", language), location);
}

GherkinParserException_NoSuchLanguageException *new_GherkinParserException_NoSuchLanguageException_initWithNSString_withGherkinAstLocation_(NSString *language, GherkinAstLocation *location) {
  J2OBJC_NEW_IMPL(GherkinParserException_NoSuchLanguageException, initWithNSString_withGherkinAstLocation_, language, location)
}

GherkinParserException_NoSuchLanguageException *create_GherkinParserException_NoSuchLanguageException_initWithNSString_withGherkinAstLocation_(NSString *language, GherkinAstLocation *location) {
  J2OBJC_CREATE_IMPL(GherkinParserException_NoSuchLanguageException, initWithNSString_withGherkinAstLocation_, language, location)
}

J2OBJC_CLASS_TYPE_LITERAL_SOURCE(GherkinParserException_NoSuchLanguageException)

@implementation GherkinParserException_UnexpectedTokenException

- (instancetype __nonnull)initWithGherkinToken:(GherkinToken *)receivedToken
                              withJavaUtilList:(id<JavaUtilList>)expectedTokenTypes
                                  withNSString:(NSString *)stateComment {
  GherkinParserException_UnexpectedTokenException_initWithGherkinToken_withJavaUtilList_withNSString_(self, receivedToken, expectedTokenTypes, stateComment);
  return self;
}

- (void)dealloc {
  RELEASE_(stateComment_);
  RELEASE_(receivedToken_);
  RELEASE_(expectedTokenTypes_);
  [super dealloc];
}

@end

void GherkinParserException_UnexpectedTokenException_initWithGherkinToken_withJavaUtilList_withNSString_(GherkinParserException_UnexpectedTokenException *self, GherkinToken *receivedToken, id<JavaUtilList> expectedTokenTypes, NSString *stateComment) {
  GherkinParserException_initWithNSString_withGherkinAstLocation_(self, GherkinParserException_UnexpectedTokenException_getMessageWithGherkinToken_withJavaUtilList_(receivedToken, expectedTokenTypes), GherkinParserException_UnexpectedTokenException_getLocationWithGherkinToken_(receivedToken));
  JreStrongAssign(&self->receivedToken_, receivedToken);
  JreStrongAssign(&self->expectedTokenTypes_, expectedTokenTypes);
  JreStrongAssign(&self->stateComment_, stateComment);
}

GherkinParserException_UnexpectedTokenException *new_GherkinParserException_UnexpectedTokenException_initWithGherkinToken_withJavaUtilList_withNSString_(GherkinToken *receivedToken, id<JavaUtilList> expectedTokenTypes, NSString *stateComment) {
  J2OBJC_NEW_IMPL(GherkinParserException_UnexpectedTokenException, initWithGherkinToken_withJavaUtilList_withNSString_, receivedToken, expectedTokenTypes, stateComment)
}

GherkinParserException_UnexpectedTokenException *create_GherkinParserException_UnexpectedTokenException_initWithGherkinToken_withJavaUtilList_withNSString_(GherkinToken *receivedToken, id<JavaUtilList> expectedTokenTypes, NSString *stateComment) {
  J2OBJC_CREATE_IMPL(GherkinParserException_UnexpectedTokenException, initWithGherkinToken_withJavaUtilList_withNSString_, receivedToken, expectedTokenTypes, stateComment)
}

NSString *GherkinParserException_UnexpectedTokenException_getMessageWithGherkinToken_withJavaUtilList_(GherkinToken *receivedToken, id<JavaUtilList> expectedTokenTypes) {
  GherkinParserException_UnexpectedTokenException_initialize();
  return NSString_java_formatWithNSString_withNSObjectArray_(@"expected: %s, got '%s'", [IOSObjectArray arrayWithObjects:(id[]){ GherkinStringUtils_joinWithNSString_withJavaUtilList_(@", ", expectedTokenTypes), [((NSString *) nil_chk([((GherkinToken *) nil_chk(receivedToken)) getTokenValue])) java_trim] } count:2 type:NSObject_class_()]);
}

GherkinAstLocation *GherkinParserException_UnexpectedTokenException_getLocationWithGherkinToken_(GherkinToken *receivedToken) {
  GherkinParserException_UnexpectedTokenException_initialize();
  return [((GherkinAstLocation *) nil_chk(((GherkinToken *) nil_chk(receivedToken))->location_)) getColumn] > 1 ? receivedToken->location_ : create_GherkinAstLocation_initWithInt_withInt_([((GherkinAstLocation *) nil_chk(receivedToken->location_)) getLine], [((JavaLangInteger *) nil_chk([((id<GherkinIGherkinLine>) nil_chk(receivedToken->line_)) indent])) intValue] + 1);
}

J2OBJC_CLASS_TYPE_LITERAL_SOURCE(GherkinParserException_UnexpectedTokenException)

@implementation GherkinParserException_UnexpectedEOFException

- (instancetype __nonnull)initWithGherkinToken:(GherkinToken *)receivedToken
                              withJavaUtilList:(id<JavaUtilList>)expectedTokenTypes
                                  withNSString:(NSString *)stateComment {
  GherkinParserException_UnexpectedEOFException_initWithGherkinToken_withJavaUtilList_withNSString_(self, receivedToken, expectedTokenTypes, stateComment);
  return self;
}

- (void)dealloc {
  RELEASE_(stateComment_);
  RELEASE_(expectedTokenTypes_);
  [super dealloc];
}

@end

void GherkinParserException_UnexpectedEOFException_initWithGherkinToken_withJavaUtilList_withNSString_(GherkinParserException_UnexpectedEOFException *self, GherkinToken *receivedToken, id<JavaUtilList> expectedTokenTypes, NSString *stateComment) {
  GherkinParserException_initWithNSString_withGherkinAstLocation_(self, GherkinParserException_UnexpectedEOFException_getMessageWithJavaUtilList_(expectedTokenTypes), ((GherkinToken *) nil_chk(receivedToken))->location_);
  JreStrongAssign(&self->expectedTokenTypes_, expectedTokenTypes);
  JreStrongAssign(&self->stateComment_, stateComment);
}

GherkinParserException_UnexpectedEOFException *new_GherkinParserException_UnexpectedEOFException_initWithGherkinToken_withJavaUtilList_withNSString_(GherkinToken *receivedToken, id<JavaUtilList> expectedTokenTypes, NSString *stateComment) {
  J2OBJC_NEW_IMPL(GherkinParserException_UnexpectedEOFException, initWithGherkinToken_withJavaUtilList_withNSString_, receivedToken, expectedTokenTypes, stateComment)
}

GherkinParserException_UnexpectedEOFException *create_GherkinParserException_UnexpectedEOFException_initWithGherkinToken_withJavaUtilList_withNSString_(GherkinToken *receivedToken, id<JavaUtilList> expectedTokenTypes, NSString *stateComment) {
  J2OBJC_CREATE_IMPL(GherkinParserException_UnexpectedEOFException, initWithGherkinToken_withJavaUtilList_withNSString_, receivedToken, expectedTokenTypes, stateComment)
}

NSString *GherkinParserException_UnexpectedEOFException_getMessageWithJavaUtilList_(id<JavaUtilList> expectedTokenTypes) {
  GherkinParserException_UnexpectedEOFException_initialize();
  return NSString_java_formatWithNSString_withNSObjectArray_(@"unexpected end of file, expected: %s", [IOSObjectArray arrayWithObjects:(id[]){ GherkinStringUtils_joinWithNSString_withJavaUtilList_(@", ", expectedTokenTypes) } count:1 type:NSObject_class_()]);
}

J2OBJC_CLASS_TYPE_LITERAL_SOURCE(GherkinParserException_UnexpectedEOFException)

@implementation GherkinParserException_CompositeParserException

- (instancetype __nonnull)initWithJavaUtilList:(id<JavaUtilList>)errors {
  GherkinParserException_CompositeParserException_initWithJavaUtilList_(self, errors);
  return self;
}

- (void)dealloc {
  RELEASE_(errors_);
  [super dealloc];
}

@end

void GherkinParserException_CompositeParserException_initWithJavaUtilList_(GherkinParserException_CompositeParserException *self, id<JavaUtilList> errors) {
  GherkinParserException_initWithNSString_(self, GherkinParserException_CompositeParserException_getMessageWithJavaUtilList_(errors));
  JreStrongAssign(&self->errors_, JavaUtilCollections_unmodifiableListWithJavaUtilList_(errors));
}

GherkinParserException_CompositeParserException *new_GherkinParserException_CompositeParserException_initWithJavaUtilList_(id<JavaUtilList> errors) {
  J2OBJC_NEW_IMPL(GherkinParserException_CompositeParserException, initWithJavaUtilList_, errors)
}

GherkinParserException_CompositeParserException *create_GherkinParserException_CompositeParserException_initWithJavaUtilList_(id<JavaUtilList> errors) {
  J2OBJC_CREATE_IMPL(GherkinParserException_CompositeParserException, initWithJavaUtilList_, errors)
}

NSString *GherkinParserException_CompositeParserException_getMessageWithJavaUtilList_(id<JavaUtilList> errors) {
  GherkinParserException_CompositeParserException_initialize();
  if (errors == nil) @throw create_JavaLangNullPointerException_initWithNSString_(@"errors");
  id<GherkinStringUtils_ToString> exceptionToString = create_GherkinParserException_CompositeParserException_1_init();
  return JreStrcat("$$", @"Parser errors:\n", GherkinStringUtils_joinWithGherkinStringUtils_ToString_withNSString_withJavaLangIterable_(exceptionToString, @"\n", errors));
}

J2OBJC_CLASS_TYPE_LITERAL_SOURCE(GherkinParserException_CompositeParserException)

@implementation GherkinParserException_CompositeParserException_1

- (NSString *)toStringWithId:(GherkinParserException *)e {
  return [((GherkinParserException *) nil_chk(e)) getMessage];
}

@end

void GherkinParserException_CompositeParserException_1_init(GherkinParserException_CompositeParserException_1 *self) {
  NSObject_init(self);
}

GherkinParserException_CompositeParserException_1 *new_GherkinParserException_CompositeParserException_1_init() {
  J2OBJC_NEW_IMPL(GherkinParserException_CompositeParserException_1, init)
}

GherkinParserException_CompositeParserException_1 *create_GherkinParserException_CompositeParserException_1_init() {
  J2OBJC_CREATE_IMPL(GherkinParserException_CompositeParserException_1, init)
}
