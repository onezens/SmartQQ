//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "QZoneStorageBase.h"

@class NSMutableDictionary;

@interface QZoneMiniFeedCache : QZoneStorageBase
{
    NSMutableDictionary *_timstampWithUin;
}

+ (id)instance;
- (void).cxx_destruct;
- (void)flush;
- (long long)getLastestTimestamp:(long long)arg1;
- (void)load;
- (void)setLastestTimestamp:(long long)arg1 uin:(long long)arg2;

@end
