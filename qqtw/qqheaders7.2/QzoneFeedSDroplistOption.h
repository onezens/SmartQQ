//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "QzoneModel.h"

@class NSDictionary, NSString;

@interface QzoneFeedSDroplistOption : QzoneModel
{
}

- (_Bool)isNewFeedBackDropItems;
- (_Bool)isNewFeedBackNeedOperation;
- (_Bool)needShowDialog;
- (_Bool)needShowToast;

// Remaining properties
@property(nonatomic) long long actionDetail; // @dynamic actionDetail;
@property(nonatomic) long long actionType; // @dynamic actionType;
@property(retain, nonatomic) NSDictionary *extendInfo; // @dynamic extendInfo;
@property(nonatomic) _Bool favouriteAdded; // @dynamic favouriteAdded;
@property(retain, nonatomic) NSString *iconUrl; // @dynamic iconUrl;
@property(retain, nonatomic) NSString *jumpUrl; // @dynamic jumpUrl;
@property(retain, nonatomic) NSString *opText; // @dynamic opText;
@property(retain, nonatomic) NSString *reportAttach; // @dynamic reportAttach;
@property(nonatomic) long long reportType; // @dynamic reportType;
@property(nonatomic) long long reportTypeV2; // @dynamic reportTypeV2;

@end

