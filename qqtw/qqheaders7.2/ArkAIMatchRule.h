//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "QQModel.h"

@class NSString;

@interface ArkAIMatchRule : QQModel
{
    _Bool _enabled;
    NSString *_type;
    NSString *_context;
    NSString *_tips;
    NSString *_regex;
}

+ (id)cachedRules;
+ (id)ruleInCacheWithContext:(id)arg1;
+ (void)setCachedRules:(id)arg1;
@property(copy, nonatomic) NSString *context; // @synthesize context=_context;
- (void)dealloc;
@property(nonatomic) _Bool enabled; // @synthesize enabled=_enabled;
@property(copy, nonatomic) NSString *regex; // @synthesize regex=_regex;
@property(copy, nonatomic) NSString *tips; // @synthesize tips=_tips;
@property(copy, nonatomic) NSString *type; // @synthesize type=_type;

@end

