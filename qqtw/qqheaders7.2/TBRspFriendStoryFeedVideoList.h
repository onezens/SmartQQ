//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "TBRspGeneralListModel.h"

@class NSArray, NSString;

@interface TBRspFriendStoryFeedVideoList : TBRspGeneralListModel
{
    NSString *_unionID;
    NSArray *_shareGroupVideoInfoList;
}

- (void)dealloc;
- (id)description;
- (_Bool)parsePBData:(char *)arg1 withLength:(int)arg2;
@property(retain, nonatomic) NSArray *shareGroupVideoInfoList; // @synthesize shareGroupVideoInfoList=_shareGroupVideoInfoList;
@property(retain, nonatomic) NSString *unionID; // @synthesize unionID=_unionID;

@end

