//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSMutableArray;

@interface VideoViewInfoModel : NSObject
{
    NSMutableArray *_viewInfoArray;
    _Bool _isGroupVideo;
    id <ViewRequestInfoChangeProtocal> _delegate;
}

- (void)addRequestViewInfo:(unsigned long long)arg1 withType:(int)arg2 isLocalView:(_Bool)arg3 isNeedraw:(_Bool)arg4 withTerminalType:(int)arg5;
- (unsigned long long)countOfViewInfo;
- (void)dealloc;
@property(nonatomic) id <ViewRequestInfoChangeProtocal> delegate; // @synthesize delegate=_delegate;
- (int)getViewCountWithLocal:(_Bool)arg1;
- (int)indexOfViewInfo:(unsigned long long)arg1 withType:(int)arg2;
- (id)init;
@property(nonatomic) _Bool isGroupVideo; // @synthesize isGroupVideo=_isGroupVideo;
- (void)removeRequestViewInfoAtIndex:(int)arg1;
- (void)setViewBigAtIndex:(int)arg1;
- (id)viewInfoAtIndex:(int)arg1;
- (id)viewInfowithUin:(unsigned long long)arg1 withType:(int)arg2;

@end

