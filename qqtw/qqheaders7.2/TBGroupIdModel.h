//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "QQModel.h"

@class NSString;

@interface TBGroupIdModel : QQModel
{
    unsigned int _errCode;
    unsigned long long _groupUin;
    NSString *_groupUnionID;
}

+ (id)createWithGroupId:(struct CPBMessageDecoder *)arg1;
- (_Bool)convertGroupId:(struct CPBMessageEncoder *)arg1;
- (void)dealloc;
@property(nonatomic) unsigned int errCode; // @synthesize errCode=_errCode;
@property(nonatomic) unsigned long long groupUin; // @synthesize groupUin=_groupUin;
@property(retain, nonatomic) NSString *groupUnionID; // @synthesize groupUnionID=_groupUnionID;

@end

