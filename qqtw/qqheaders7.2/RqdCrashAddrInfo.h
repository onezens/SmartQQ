//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSNumber, NSString;

@interface RqdCrashAddrInfo : NSObject
{
    int index;
    NSNumber *addr;
    NSString *moduleName;
    NSString *lineStr;
    unsigned long long offset;
}

@property(retain, nonatomic) NSNumber *addr; // @synthesize addr;
- (void)dealloc;
- (id)description;
- (id)getFullStackLine;
@property(nonatomic) int index; // @synthesize index;
@property(retain, nonatomic) NSString *lineStr; // @synthesize lineStr;
@property(retain, nonatomic) NSString *moduleName; // @synthesize moduleName;
@property(nonatomic) unsigned long long offset; // @synthesize offset;

@end
