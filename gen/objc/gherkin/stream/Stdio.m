//
//  Generated by the J2ObjC translator.  DO NOT EDIT!
//  source: /Users/marcussmith/HambroPerks/laundrapp_org/gherkin-java/src/main/java/gherkin/stream/Stdio.java
//

#include "J2ObjC_source.h"
#include "gherkin/stream/Stdio.h"
#include "java/io/OutputStreamWriter.h"
#include "java/io/PrintStream.h"
#include "java/io/PrintWriter.h"
#include "java/lang/System.h"
#include "java/nio/charset/Charset.h"

J2OBJC_INITIALIZED_DEFN(GherkinStreamStdio)

JavaIoPrintWriter *GherkinStreamStdio_out;
JavaIoPrintWriter *GherkinStreamStdio_err;

@implementation GherkinStreamStdio

J2OBJC_IGNORE_DESIGNATED_BEGIN
- (instancetype __nonnull)init {
  GherkinStreamStdio_init(self);
  return self;
}
J2OBJC_IGNORE_DESIGNATED_END

+ (void)initialize {
  if (self == [GherkinStreamStdio class]) {
    JreStrongAssignAndConsume(&GherkinStreamStdio_out, new_JavaIoPrintWriter_initWithJavaIoWriter_withBoolean_(create_JavaIoOutputStreamWriter_initWithJavaIoOutputStream_withJavaNioCharsetCharset_(JreLoadStatic(JavaLangSystem, out), JavaNioCharsetCharset_forNameWithNSString_(@"UTF-8")), true));
    JreStrongAssignAndConsume(&GherkinStreamStdio_err, new_JavaIoPrintWriter_initWithJavaIoWriter_withBoolean_(create_JavaIoOutputStreamWriter_initWithJavaIoOutputStream_withJavaNioCharsetCharset_(JreLoadStatic(JavaLangSystem, err), JavaNioCharsetCharset_forNameWithNSString_(@"UTF-8")), true));
    J2OBJC_SET_INITIALIZED(GherkinStreamStdio)
  }
}

@end

void GherkinStreamStdio_init(GherkinStreamStdio *self) {
  NSObject_init(self);
}

GherkinStreamStdio *new_GherkinStreamStdio_init() {
  J2OBJC_NEW_IMPL(GherkinStreamStdio, init)
}

GherkinStreamStdio *create_GherkinStreamStdio_init() {
  J2OBJC_CREATE_IMPL(GherkinStreamStdio, init)
}

J2OBJC_CLASS_TYPE_LITERAL_SOURCE(GherkinStreamStdio)
