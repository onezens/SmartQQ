//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UICollectionViewCell.h"

@class MCGridVideoItem, QQCircularLoadingProgressView, UIImageView, UIView;

@interface QQReadInJoyVideoRecordDecorationCollectionViewCell : UICollectionViewCell
{
    UIImageView *_thumbnailImageView;
    UIImageView *_selectedImageView;
    UIImageView *_tobeDownloadImageView;
    UIView *_selectedMaskView;
    QQCircularLoadingProgressView *_progressView;
    MCGridVideoItem *_item;
    unsigned long long _itemState;
}

- (void).cxx_destruct;
- (void)awakeFromNib;
- (void)downloadTemplate;
@property(retain, nonatomic) MCGridVideoItem *item; // @synthesize item=_item;
@property(nonatomic) unsigned long long itemState; // @synthesize itemState=_itemState;
- (void)layoutSubviews;
@property(retain, nonatomic) QQCircularLoadingProgressView *progressView; // @synthesize progressView=_progressView;
@property(nonatomic) __weak UIImageView *selectedImageView; // @synthesize selectedImageView=_selectedImageView;
@property(nonatomic) __weak UIView *selectedMaskView; // @synthesize selectedMaskView=_selectedMaskView;
- (void)setSelected:(_Bool)arg1;
@property(nonatomic) __weak UIImageView *thumbnailImageView; // @synthesize thumbnailImageView=_thumbnailImageView;
@property(nonatomic) __weak UIImageView *tobeDownloadImageView; // @synthesize tobeDownloadImageView=_tobeDownloadImageView;

@end

