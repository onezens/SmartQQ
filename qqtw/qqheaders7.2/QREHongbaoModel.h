//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSString, PackModel, QREAwardModel;

@interface QREHongbaoModel : NSObject
{
    _Bool _followPublicAccount;
    _Bool _showPublic;
    int _hongbaoType;
    long long _publicId;
    NSString *_publicText;
    PackModel *_awardPack;
    QREAwardModel *_awardModel;
}

- (void).cxx_destruct;
@property(retain, nonatomic) QREAwardModel *awardModel; // @synthesize awardModel=_awardModel;
@property(retain, nonatomic) PackModel *awardPack; // @synthesize awardPack=_awardPack;
@property(nonatomic) _Bool followPublicAccount; // @synthesize followPublicAccount=_followPublicAccount;
@property(nonatomic) int hongbaoType; // @synthesize hongbaoType=_hongbaoType;
@property(nonatomic) long long publicId; // @synthesize publicId=_publicId;
@property(retain, nonatomic) NSString *publicText; // @synthesize publicText=_publicText;
@property(nonatomic) _Bool showPublic; // @synthesize showPublic=_showPublic;

@end

