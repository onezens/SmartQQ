//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSArray, NSDate, NSString;

@interface purchaseAction : NSObject
{
    NSString *_buyerUIN;
    NSDate *_buyDate;
    unsigned long long _buyState;
    unsigned long long _buyType;
    NSString *_comicID;
    NSArray *_sectionIDs;
    long long _seq;
    unsigned long long _retCode;
    int _xo;
}

+ (id)purchaseActionWith:(id)arg1 andType:(unsigned long long)arg2 andSectionIDs:(id)arg3;
- (void).cxx_destruct;
- (id)description;
- (id)init;
- (_Bool)isEqual:(id)arg1;
- (void)notifyState;

// Remaining properties
@property(retain, nonatomic) NSDate *buyDate; // @dynamic buyDate;
@property(nonatomic) unsigned long long buyState; // @dynamic buyState;
@property(nonatomic) unsigned long long buyType; // @dynamic buyType;
@property(copy, nonatomic) NSString *buyerUIN; // @dynamic buyerUIN;
@property(retain, nonatomic) NSString *comicID; // @dynamic comicID;
@property(nonatomic) unsigned long long retCode; // @dynamic retCode;
@property(retain, nonatomic) NSArray *sectionIDs; // @dynamic sectionIDs;
@property(nonatomic) long long seq; // @dynamic seq;

@end

