//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "NSCoding.h"

@class NSArray, NSData, NSMutableDictionary, NSString;

@interface QSideAccount : NSObject <NSCoding>
{
    NSString *_nick;
    long long _uin;
    NSData *_A2;
    NSData *_cookie;
    int _lastestTime;
    _Bool _isSyncMsg;
    long long _seq;
    int _accountStatus;
    NSMutableDictionary *_chatList;
    NSArray *_favoritList;
    int _msgSeq;
}

@property(retain, nonatomic) NSData *A2; // @synthesize A2=_A2;
@property(nonatomic) int _msgSeq; // @synthesize _msgSeq;
@property(nonatomic) int accountSatus; // @synthesize accountSatus=_accountStatus;
@property(retain, nonatomic) NSMutableDictionary *chatList; // @synthesize chatList=_chatList;
@property(retain, nonatomic) NSData *cookie; // @synthesize cookie=_cookie;
- (void)dealloc;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
@property(retain, nonatomic) NSArray *favoritList; // @synthesize favoritList=_favoritList;
- (id)initWithCoder:(id)arg1;
@property(nonatomic) _Bool isSyncMsg; // @synthesize isSyncMsg=_isSyncMsg;
@property(nonatomic) int lastestTime; // @synthesize lastestTime=_lastestTime;
@property(retain, nonatomic) NSString *nick; // @synthesize nick=_nick;
- (long long)seq;
- (long long *)seqAddr;
@property(nonatomic) long long uin; // @synthesize uin=_uin;

@end
