//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSMutableArray, NSString, QQGroupChatViewController;

@interface GroupGhostVideo : NSObject
{
    QQGroupChatViewController *_parentVC;
    NSMutableArray *_videoPathArray;
    NSString *_musicPath;
}

- (void)addVideoMusic:(id)arg1 completeHandle:(CDUnknownBlockType)arg2;
- (_Bool)checkParameters:(id)arg1 openVC:(id)arg2;
- (void)dealloc;
- (void)download:(id)arg1 path:(id)arg2 completeHandle:(CDUnknownBlockType)arg3;
- (void)downloadVideo:(id)arg1 backMusic:(id)arg2 completeHandle:(CDUnknownBlockType)arg3;
- (id)getImage:(id)arg1 videoWidth:(double)arg2;
- (void)jointVideo:(CDUnknownBlockType)arg1;
- (void)makeGroupGhostVideo:(id)arg1 backMusic:(id)arg2 wording:(id)arg3 troopUin:(id)arg4 completeHandle:(CDUnknownBlockType)arg5;
@property(retain, nonatomic) NSString *musicPath; // @synthesize musicPath=_musicPath;
- (void)openGroupGhostVideo:(id)arg1 openVC:(id)arg2 completeHandle:(CDUnknownBlockType)arg3;
- (void)sendVideo:(id)arg1 completeHandle:(CDUnknownBlockType)arg2;
@property(retain, nonatomic) NSMutableArray *videoPathArray; // @synthesize videoPathArray=_videoPathArray;
- (void)subtitleVideo:(id)arg1 wording:(id)arg2 completeHandle:(CDUnknownBlockType)arg3;
- (struct CGSize)textLength:(id)arg1 font:(id)arg2 maxWidth:(double)arg3;
- (void)transformVideo:(id)arg1 completeHandle:(CDUnknownBlockType)arg2;

@end

