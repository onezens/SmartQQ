//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSOperationQueue, NSString, QQLockDictionary;

@interface QQGroupAssistantDataManger : NSObject
{
    NSOperationQueue *_operationQueue;
    QQLockDictionary *_cacheDict;
    NSString *_currentCacheUin;
}

+ (id)sharedInstance;
@property(retain, nonatomic) QQLockDictionary *cacheDict; // @synthesize cacheDict=_cacheDict;
@property(copy, nonatomic) NSString *currentCacheUin; // @synthesize currentCacheUin=_currentCacheUin;
- (void)dealloc;
- (id)groupAssistantInfoDict:(id)arg1;
- (id)groupAssistantPolicy:(id)arg1;
- (id)init;
- (void)onAccountChanged:(id)arg1;
- (id)pathForGroupAssistantInfo:(id)arg1;
- (void)reloadGroupAssistantInfoCacheDict;
- (void)saveGroupAssistantCacheToFile:(id)arg1 path:(id)arg2;
- (void)saveGroupAssistantCacheToFileDelay;
- (void)setGroupAssistantPolicy:(id)arg1 groupCode:(id)arg2;

@end

