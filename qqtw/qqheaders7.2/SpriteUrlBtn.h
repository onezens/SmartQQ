//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIControl.h"

#import "IAsynDownloadImageObserver.h"

@class NSString, UIImageView, UILabel;

@interface SpriteUrlBtn : UIControl <IAsynDownloadImageObserver>
{
    UILabel *_label;
    UIImageView *_bgView;
    UIImageView *_imageView;
    NSString *_imgUrl;
}

- (void)dealloc;
- (void)downLoadImageFail:(id)arg1;
- (void)downloadImageFinished:(id)arg1;
- (id)initWithOrigin:(struct CGPoint)arg1 title:(id)arg2 defaultImg:(id)arg3;
- (void)layoutSubviews;
- (void)loadImgUrl:(id)arg1;
- (void)setSpriteWidth:(double)arg1;
- (void)setText:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

