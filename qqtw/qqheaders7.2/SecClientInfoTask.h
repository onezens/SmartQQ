//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSData, NSMutableDictionary;

@interface SecClientInfoTask : NSObject
{
    NSData *_guid;
    basic_string_075b6133 _guidStrData;
    basic_string_075b6133 _guidString;
    NSMutableDictionary *_reportCache;
}

+ (id)shareInstance;
- (id).cxx_construct;
- (void).cxx_destruct;
- (void)doStep:(unsigned long long)arg1;
- (id)init;
- (void)onTimerA:(id)arg1;
- (void)onTimerB:(id)arg1;

@end

