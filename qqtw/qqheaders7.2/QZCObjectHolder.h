//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSMutableDictionary, NSObject<OS_dispatch_queue>;

@interface QZCObjectHolder : NSObject
{
    NSMutableDictionary *_dict;
    NSObject<OS_dispatch_queue> *_queue;
}

+ (void)hold:(id)arg1 withKey:(id)arg2;
+ (id)sharedInstance;
+ (void)unhold:(id)arg1;
- (void).cxx_destruct;
- (void)dealloc;
- (void)didReceiveMemoryWarning;
- (void)hold:(id)arg1 withKey:(id)arg2;
- (id)init;
- (void)unhold:(id)arg1;

@end

