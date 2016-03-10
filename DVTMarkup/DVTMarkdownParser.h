//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@interface DVTMarkdownParser : NSObject
{
    struct cmark_node *documentNode;
    struct cmark_node *traversingNode;
}

+ (id)generateHTMLStringFromMarkdown:(id)arg1 variant:(unsigned long long)arg2 usingOptions:(unsigned long long)arg3;
+ (id)generateHTMLStringFromMarkdown:(id)arg1 usingOptions:(unsigned long long)arg2;
+ (id)generateHTMLStringFromMarkdown:(id)arg1;
- (void)traverseOutputWithDelegate:(id)arg1;
- (id)generateHTMLStringWithLanguageVariant:(unsigned long long)arg1 usingOptions:(unsigned long long)arg2;
- (id)generateHTMLStringUsingOptions:(unsigned long long)arg1;
- (id)generateHTMLString;
@property(readonly) CDStruct_33dcf794 currentSourcePosition;
- (void)dealloc;
- (id)initWithString:(id)arg1;
- (id)initWithData:(id)arg1;

@end

