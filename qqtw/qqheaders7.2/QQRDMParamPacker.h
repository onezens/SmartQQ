//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSMutableDictionary, NSMutableString;

@interface QQRDMParamPacker : NSObject
{
    NSMutableString *_str;
    NSMutableDictionary *_dict;
}

- (void)dealloc;
- (BOOL)getChar:(id)arg1 pos:(unsigned long long)arg2 nextPos:(unsigned long long *)arg3;
- (int)getInt:(id)arg1 pos:(unsigned long long)arg2 nextPos:(unsigned long long *)arg3;
- (id)getString:(id)arg1 pos:(unsigned long long)arg2 nextPos:(unsigned long long *)arg3;
- (id)pack:(id)arg1;
- (id)unpack:(id)arg1;

@end

