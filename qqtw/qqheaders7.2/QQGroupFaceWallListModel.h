//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "QQGroupPropertyModel.h"

@class NSMutableArray;

@interface QQGroupFaceWallListModel : QQGroupPropertyModel
{
    NSMutableArray *_arryDeleteInfo;
}

- (void).cxx_destruct;
@property(retain, nonatomic) NSMutableArray *arryDeleteInfo; // @synthesize arryDeleteInfo=_arryDeleteInfo;
- (void)copyFromAnother:(id)arg1;
- (id)init;

// Remaining properties
@property(retain, nonatomic) NSMutableArray *arryMsgInfo; // @dynamic arryMsgInfo;
@property(retain, nonatomic) NSMutableArray *arryVerifyingInfo; // @dynamic arryVerifyingInfo;
@property(nonatomic) int defaultId; // @dynamic defaultId;
@property(nonatomic) int errorCode; // @dynamic errorCode;
@property(nonatomic) long long groupCode; // @dynamic groupCode;
@property(nonatomic) long long groupUin; // @dynamic groupUin;
@property(nonatomic) int headPortraitSeq; // @dynamic headPortraitSeq;
@property(nonatomic) int picCount; // @dynamic picCount;
@property(nonatomic) int subCmd; // @dynamic subCmd;

@end
