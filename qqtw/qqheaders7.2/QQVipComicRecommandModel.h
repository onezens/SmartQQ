//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSString;

@interface QQVipComicRecommandModel : NSObject
{
    NSString *_rComicID;
    NSString *_rComicName;
    NSString *_rComicCoverUrl;
    NSString *_rComicDetailUrl;
    long long _type;
    long long _isFree;
    long long _isRead;
    NSString *_algoId;
}

- (void).cxx_destruct;
@property(retain, nonatomic) NSString *algoId; // @synthesize algoId=_algoId;
- (id)description;
@property(nonatomic) long long isFree; // @synthesize isFree=_isFree;
@property(nonatomic) long long isRead; // @synthesize isRead=_isRead;
@property(retain, nonatomic) NSString *rComicCoverUrl; // @synthesize rComicCoverUrl=_rComicCoverUrl;
@property(retain, nonatomic) NSString *rComicDetailUrl; // @synthesize rComicDetailUrl=_rComicDetailUrl;
@property(retain, nonatomic) NSString *rComicID; // @synthesize rComicID=_rComicID;
@property(retain, nonatomic) NSString *rComicName; // @synthesize rComicName=_rComicName;
@property(nonatomic) long long type; // @synthesize type=_type;

@end

