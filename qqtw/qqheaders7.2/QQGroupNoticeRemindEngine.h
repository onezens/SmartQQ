//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSMutableArray;

@interface QQGroupNoticeRemindEngine : NSObject
{
    _Bool _hasRequest;
    NSMutableArray *_noticeDataSource;
    CDUnknownBlockType _noticeBlock;
}

- (void)dealloc;
- (id)getFirstNoticeModel:(CDUnknownBlockType)arg1;
- (id)initWithGroupUin:(unsigned long long *)arg1;
@property(copy, nonatomic) CDUnknownBlockType noticeBlock; // @synthesize noticeBlock=_noticeBlock;
@property(retain, nonatomic) NSMutableArray *noticeDataSource; // @synthesize noticeDataSource=_noticeDataSource;
- (void)recieveNoticeData;
- (void)removeFirstModel;
- (void)requestGroupNotice;

@end

