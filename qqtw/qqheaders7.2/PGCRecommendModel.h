//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "QQModel.h"

#import "NSCoding.h"

@class PGCStoryModel, TBQQUserInfoModel;

@interface PGCRecommendModel : QQModel <NSCoding>
{
    TBQQUserInfoModel *_user;
    PGCStoryModel *_storyInfo;
}

- (void).cxx_destruct;
@property(retain, nonatomic) PGCStoryModel *storyInfo; // @synthesize storyInfo=_storyInfo;
@property(retain, nonatomic) TBQQUserInfoModel *user; // @synthesize user=_user;

@end

