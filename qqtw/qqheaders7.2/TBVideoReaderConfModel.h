//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "QQModel.h"

@class NSArray;

@interface TBVideoReaderConfModel : QQModel
{
    unsigned int _videoLimit;
    NSArray *_userList;
    NSArray *_userUnionIdList;
}

+ (id)createWithQQStory:(struct CPBMessageDecoder *)arg1;
- (_Bool)converQQStory:(struct CPBMessageEncoder *)arg1;
- (void)dealloc;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
@property(retain, nonatomic) NSArray *userList; // @synthesize userList=_userList;
@property(retain, nonatomic) NSArray *userUnionIdList; // @synthesize userUnionIdList=_userUnionIdList;
@property(nonatomic) unsigned int videoLimit; // @synthesize videoLimit=_videoLimit;

@end

