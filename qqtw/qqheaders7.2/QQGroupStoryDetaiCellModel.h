//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class TBGroupStoryItem, TBPublishStoryVideoModel;

@interface QQGroupStoryDetaiCellModel : NSObject
{
    TBGroupStoryItem *_item;
    TBPublishStoryVideoModel *_publishModel;
    unsigned long long _type;
    unsigned long long _groupId;
}

+ (id)creatCellModelWithPublishStoryVideoModel:(id)arg1;
- (void)dealloc;
@property(nonatomic) unsigned long long groupId; // @synthesize groupId=_groupId;
@property(retain, nonatomic) TBGroupStoryItem *item; // @synthesize item=_item;
@property(retain, nonatomic) TBPublishStoryVideoModel *publishModel; // @synthesize publishModel=_publishModel;
@property(nonatomic) unsigned long long type; // @synthesize type=_type;

@end
