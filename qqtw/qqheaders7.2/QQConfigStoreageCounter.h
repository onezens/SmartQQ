//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSMutableDictionary, NSString;

@interface QQConfigStoreageCounter : NSObject
{
    NSMutableDictionary *_loadDic;
    NSString *_lastKey;
}

- (void)dealloc;
- (id)getNextKey:(id)arg1;
- (id)getRecordPath;
- (id)init;
@property(retain) NSString *lastKey; // @synthesize lastKey=_lastKey;
- (void)load;
- (void)setCurrentRequestKey:(id)arg1;
- (void)syncData;

@end

