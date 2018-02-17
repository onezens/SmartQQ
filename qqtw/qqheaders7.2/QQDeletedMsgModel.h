//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "QQModel.h"

@interface QQDeletedMsgModel : QQModel
{
    _Bool _inOut;
    unsigned long long _peerUin;
    unsigned long long _sessionType;
    long long _msgSeq;
    long long _msgRandom;
    long long _msgId;
    double _msgTime;
    BOOL _pkgNum;
    BOOL _pkgIndex;
    short _divSeq;
    int _msgType;
    unsigned int _ssoMsgTime;
    int _xo;
}

+ (id)cacheModelWithMessage:(id)arg1;
- (id)description;
- (id)initWithMessage:(id)arg1;

// Remaining properties
@property(nonatomic) short divSeq; // @dynamic divSeq;
@property(nonatomic) _Bool inOut; // @dynamic inOut;
@property(nonatomic) long long msgId; // @dynamic msgId;
@property(nonatomic) long long msgRandom; // @dynamic msgRandom;
@property(nonatomic) long long msgSeq; // @dynamic msgSeq;
@property(nonatomic) double msgTime; // @dynamic msgTime;
@property(nonatomic) int msgType; // @dynamic msgType;
@property(nonatomic) unsigned long long peerUin; // @dynamic peerUin;
@property(nonatomic) BOOL pkgIndex; // @dynamic pkgIndex;
@property(nonatomic) BOOL pkgNum; // @dynamic pkgNum;
@property(nonatomic) unsigned long long sessionType; // @dynamic sessionType;
@property(nonatomic) unsigned int ssoMsgTime; // @dynamic ssoMsgTime;

@end

