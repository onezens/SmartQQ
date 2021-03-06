//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "ReadInJoyModelBase.h"

@interface ReadInJoyChannelModel : ReadInJoyModelBase
{
}

+ (id)createTableString;
+ (id)tableName;
- (id)channelListFromResultSet:(id)arg1;
- (void)createTableIfNeeded;
- (void)createTableIfNeededInDb:(id)arg1;
- (id)getOldChannelInfo:(unsigned int)arg1;
- (id)getOldChannelInfo:(unsigned int)arg1 inDB:(id)arg2;
- (_Bool)loadChannelList:(_Bool)arg1 completionBlock:(CDUnknownBlockType)arg2;
- (id)loadChannelList:(_Bool)arg1 inDb:(id)arg2;
- (void)setDefaultChannel;
- (void)setDefaultChannelInDb:(id)arg1;
- (void)updateChannelCookie:(id)arg1 channelId:(unsigned int)arg2;
- (void)updateChannelCookie:(id)arg1 channelId:(unsigned int)arg2 InDb:(id)arg3;
- (_Bool)updateFollowedChannelList:(id)arg1 isLocalCityChanged:(_Bool)arg2 completionBlock:(CDUnknownBlockType)arg3;
- (id)updateFollowedChannelList:(id)arg1 isLocalCityChanged:(_Bool)arg2 inDb:(id)arg3;
- (_Bool)updateNewChannelIdList:(id)arg1 isNew:(_Bool)arg2 completionBlock:(CDUnknownBlockType)arg3;
- (id)updateNewChannelIdList:(id)arg1 isNew:(_Bool)arg2 inDB:(id)arg3;

@end

