//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSData, NSString;

@interface QQYPMsgStruct : NSObject
{
    int seq;
    NSData *buffer;
    NSString *cmd;
}

@property(retain, nonatomic) NSData *buffer; // @synthesize buffer;
@property(copy, nonatomic) NSString *cmd; // @synthesize cmd;
@property(nonatomic) int seq; // @synthesize seq;

@end

