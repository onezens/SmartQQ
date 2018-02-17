//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "MLPlayerItem.h"

@class QQFlashPicturePlayer, UIImage;

@interface MLPlayerFlashPicItem : MLPlayerItem
{
    UIImage *_image;
    long long _eID;
    QQFlashPicturePlayer *_playView;
    _Bool _isPreview;
    CDUnknownBlockType _finishBlock;
}

- (id)contentView;
- (void)dealloc;
- (void)didFinishPlayInPlayerView:(id)arg1;
@property(copy, nonatomic) CDUnknownBlockType finishBlock; // @synthesize finishBlock=_finishBlock;
- (id)initWithImage:(id)arg1 effectID:(long long)arg2;
@property(nonatomic) _Bool isPreview; // @synthesize isPreview=_isPreview;
- (void)willPlayInPlayerView:(id)arg1;

@end

