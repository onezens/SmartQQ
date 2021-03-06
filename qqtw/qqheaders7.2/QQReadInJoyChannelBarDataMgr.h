//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class QQReadInJoyChannelBarModel;

@interface QQReadInJoyChannelBarDataMgr : NSObject
{
    QQReadInJoyChannelBarModel *_kanDianChannelBarData;
    QQReadInJoyChannelBarModel *_videoChannelBarData;
    QQReadInJoyChannelBarModel *_subscribeTabBarData;
}

+ (void)asyncSaveUserChannelBarModel:(id)arg1;
+ (unsigned int)getChannelBarShowStyle:(unsigned int)arg1;
+ (id)shareInstance;
- (void).cxx_destruct;
- (void)clearTopicUpdateUnReadNumber:(unsigned long long)arg1;
- (unsigned long long)getChannelBarSeqWithType:(unsigned int)arg1;
- (id)getTopicUpdateLeftTitle;
- (id)getTopicUpdateRightTitle;
- (id)getUserChannelBarDataWithType:(unsigned int)arg1;
- (void)initData;
@property(retain, nonatomic) QQReadInJoyChannelBarModel *kanDianChannelBarData; // @synthesize kanDianChannelBarData=_kanDianChannelBarData;
- (void)mergeChannelListInfoWithReceivedModel:(id)arg1 localModel:(id)arg2;
- (void)postUpdateDataNotification:(unsigned int)arg1;
- (void)saveSubscribeTabBarData;
@property(retain, nonatomic) QQReadInJoyChannelBarModel *subscribeTabBarData; // @synthesize subscribeTabBarData=_subscribeTabBarData;
- (void)setTopicUpdateInfo:(id)arg1;
@property(retain, nonatomic) QQReadInJoyChannelBarModel *videoChannelBarData; // @synthesize videoChannelBarData=_videoChannelBarData;
- (void)updateChannelBarDataWithType:(unsigned int)arg1;
- (void)updateChannelBarDataWithType:(unsigned int)arg1 isForPage:(_Bool)arg2;
- (void)updateChannelItemDataWithItemModel:(id)arg1;

@end

