//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UICollectionViewCell.h"

@class QQAsynUrlImageView, UIImageView, UILabel, UIView;

@interface SpriteGameListCollectionViewCell : UICollectionViewCell
{
    QQAsynUrlImageView *_gameImageView;
    UIImageView *_leftTopImgView;
    UILabel *_gameNameLbl;
    _Bool _isRecommended;
    UIView *_redPointView;
}

+ (double)bottomLabelHeight;
+ (struct CGSize)sizeOfCell;
+ (struct CGSize)sizeOfGameImage;
- (void)dealloc;
- (id)initWithFrame:(struct CGRect)arg1;
@property(readonly, nonatomic) _Bool isRecommended; // @synthesize isRecommended=_isRecommended;
- (void)layoutSubviews;
- (id)newRedPointView;
@property(retain, nonatomic) UIView *redPointView; // @synthesize redPointView=_redPointView;
- (void)reloadUIWith:(id)arg1 isRecommend:(_Bool)arg2 needShowRedPoint:(_Bool)arg3;

@end
