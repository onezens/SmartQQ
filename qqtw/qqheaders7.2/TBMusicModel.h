//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class TBStoryMusicModel;

@interface TBMusicModel : NSObject
{
    TBStoryMusicModel *_storyMusicModel;
    id _playDelegate;
    id _showDelegate;
}

- (void).cxx_destruct;
- (void)dealloc;
- (id)init;
@property(nonatomic) __weak id playDelegate; // @synthesize playDelegate=_playDelegate;
@property(nonatomic) __weak id showDelegate; // @synthesize showDelegate=_showDelegate;
@property(retain, nonatomic) TBStoryMusicModel *storyMusicModel; // @synthesize storyMusicModel=_storyMusicModel;

@end

