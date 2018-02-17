//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSData, NSString, VoipPushExInfo;

@interface VoipPushItem : NSObject
{
    struct pushItemExInfo exInfo;
    NSString *_pushCmd;
    NSData *_pushBuffer;
    NSString *_sound;
    unsigned int _badgeNum;
    NSString *_nickName;
    VoipPushExInfo *_exInfo;
    _Bool _hasBadge;
}

@property(nonatomic) unsigned int badgeNum; // @synthesize badgeNum=_badgeNum;
- (void)dealloc;
@property(retain, nonatomic) VoipPushExInfo *exInfo; // @synthesize exInfo=_exInfo;
@property(nonatomic) _Bool hasBadge; // @synthesize hasBadge=_hasBadge;
- (id)initWithPayloadDic:(id)arg1;
@property(retain, nonatomic) NSString *nickName; // @synthesize nickName=_nickName;
- (void)parseAlert:(id)arg1;
- (_Bool)parseExStr:(id)arg1;
@property(retain, nonatomic) NSData *pushBuffer; // @synthesize pushBuffer=_pushBuffer;
@property(retain, nonatomic) NSString *pushCmd; // @synthesize pushCmd=_pushCmd;
@property(retain, nonatomic) NSString *sound; // @synthesize sound=_sound;

@end
