//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSString;

@interface WXCardItem : NSObject
{
    unsigned int cardState;
    NSString *cardId;
    NSString *extMsg;
    NSString *encryptCode;
    NSString *appID;
}

@property(retain, nonatomic) NSString *appID; // @synthesize appID;
@property(retain, nonatomic) NSString *cardId; // @synthesize cardId;
@property(nonatomic) unsigned int cardState; // @synthesize cardState;
- (void)dealloc;
@property(retain, nonatomic) NSString *encryptCode; // @synthesize encryptCode;
@property(retain, nonatomic) NSString *extMsg; // @synthesize extMsg;

@end

