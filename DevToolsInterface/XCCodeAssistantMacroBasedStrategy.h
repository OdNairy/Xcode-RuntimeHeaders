//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <DevToolsInterface/PBXCodeAssistantStrategy.h>

@interface XCCodeAssistantMacroBasedStrategy : PBXCodeAssistantStrategy
{
}

- (BOOL)getItems:(id *)arg1 withInfoString:(id)arg2;
- (void)addLang:(id)arg1 toExcludeSet:(id)arg2;
- (id)macrosForLang:(id)arg1 excluding:(id)arg2 isAtBOL:(BOOL)arg3;
- (id)nonWordChars;
- (id)initWithTextView:(id)arg1 languageSpec:(id)arg2;

@end

