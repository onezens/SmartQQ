//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "QQFaceCell.h"

@class UIActivityIndicatorView, UIImageView;

@interface QQFaceAssociateFrameCell : QQFaceCell
{
    UIImageView *_storeImageView;
    UIActivityIndicatorView *_indicator;
}

- (void)addSoundIcon;
- (void)dealloc;
@property(retain, nonatomic) UIActivityIndicatorView *indicator; // @synthesize indicator=_indicator;
- (void)loadCellDataWithEmojiInfo:(id)arg1;
- (_Bool)localHasData;
@property(retain, nonatomic) UIImageView *storeImageView; // @synthesize storeImageView=_storeImageView;

@end

