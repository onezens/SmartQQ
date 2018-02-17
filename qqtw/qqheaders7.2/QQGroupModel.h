//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "QQModel.h"

#import "IQQModelLabel.h"
#import "NSCopying.h"
#import "NSMutableCopying.h"

@class NSMutableArray, NSString;

@interface QQGroupModel : QQModel <NSCopying, NSMutableCopying, IQQModelLabel>
{
    NSString *_groupId;
    NSString *_groupName;
    NSString *_count;
    NSString *_onlineCount;
    BOOL _sortId;
    _Bool expand;
    _Bool _isMsfGroup;
    NSMutableArray *_friendList;
    struct _NSRange _matchRange;
    NSString *_groupUin;
    _Bool _certified;
    unsigned int _certificationType;
    unsigned int _cmdUinUinFlag;
    unsigned int _additionalFlag;
    unsigned int _groupFlagExt;
    int _xo;
    _Bool _upFlag;
    NSString *memo;
}

+ (void)setSearchModelPriority:(int)arg1;
@property(nonatomic) unsigned int additionalFlag; // @synthesize additionalFlag=_additionalFlag;
- (id)allPropertMD5;
@property(nonatomic) unsigned int certificationType; // @synthesize certificationType=_certificationType;
@property(nonatomic) _Bool certified; // @synthesize certified=_certified;
@property(nonatomic) unsigned int cmdUinUinFlag; // @synthesize cmdUinUinFlag=_cmdUinUinFlag;
- (long long)compareByTimeAsc:(id)arg1;
- (long long)compareLabel:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
@property(copy, nonatomic) NSString *count; // @synthesize count=_count;
- (void)dealloc;
@property(readonly, copy) NSString *description;
@property(nonatomic) _Bool expand; // @synthesize expand;
@property(retain, nonatomic) NSMutableArray *friendList; // @synthesize friendList=_friendList;
- (id)getModelLabel;
- (struct _NSRange)getModelLabelMatchRange;
- (id)getRemarkLabel;
- (int)getSearchModelPriority;
- (int)getSearchModelType;
@property(nonatomic) unsigned int groupFlagExt; // @synthesize groupFlagExt=_groupFlagExt;
@property(copy, nonatomic) NSString *groupId; // @synthesize groupId=_groupId;
@property(copy, nonatomic) NSString *groupName; // @synthesize groupName=_groupName;
@property(copy, nonatomic) NSString *groupUin; // @synthesize groupUin=_groupUin;
- (id)init;
- (id)init:(id)arg1:(id)arg2:(id)arg3:(id)arg4:(BOOL)arg5;
- (_Bool)isMatchString:(id)arg1;
@property(nonatomic) _Bool isMsfGroup; // @synthesize isMsfGroup=_isMsfGroup;
@property(nonatomic) struct _NSRange matchRange; // @synthesize matchRange=_matchRange;
@property(retain, nonatomic) NSString *memo; // @synthesize memo;
- (id)mutableCopyWithZone:(struct _NSZone *)arg1;
@property(copy, nonatomic) NSString *onlineCount; // @synthesize onlineCount=_onlineCount;
@property BOOL sortId; // @synthesize sortId=_sortId;
@property(nonatomic) _Bool upFlag; // @synthesize upFlag=_upFlag;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

