//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "QQModel.h"

#import "NSCopying.h"

@class NSArray, NSString;

@interface TBShareGroupBasicInfo : QQModel <NSCopying>
{
    _Bool _allowStrangerVisitAndPost;
    _Bool _hasDisband;
    unsigned int _type;
    NSString *_sharedGroupId;
    NSString *_name;
    NSString *_owner;
    NSArray *_header_unionid_list;
    NSString *_backGroundUrl;
    unsigned long long _groupCode;
}

+ (id)createWithData:(struct CPBMessageDecoder *)arg1;
@property(nonatomic) _Bool allowStrangerVisitAndPost; // @synthesize allowStrangerVisitAndPost=_allowStrangerVisitAndPost;
@property(retain, nonatomic) NSString *backGroundUrl; // @synthesize backGroundUrl=_backGroundUrl;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)dealloc;
@property(nonatomic) unsigned long long groupCode; // @synthesize groupCode=_groupCode;
@property(nonatomic) _Bool hasDisband; // @synthesize hasDisband=_hasDisband;
@property(retain, nonatomic) NSArray *header_unionid_list; // @synthesize header_unionid_list=_header_unionid_list;
- (_Bool)isValid;
@property(retain, nonatomic) NSString *name; // @synthesize name=_name;
@property(retain, nonatomic) NSString *owner; // @synthesize owner=_owner;
@property(retain, nonatomic) NSString *sharedGroupId; // @synthesize sharedGroupId=_sharedGroupId;
@property(nonatomic) unsigned int type; // @synthesize type=_type;

@end

