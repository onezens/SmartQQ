//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UITableViewCell.h"

@class QQAsynUrlImageView, QZAutoPlayGifView, UIImageView, UILabel;

@interface NearbyCustomActionSheetCell : UITableViewCell
{
    QQAsynUrlImageView *_leftIcon;
    QZAutoPlayGifView *_leftGifView;
    UILabel *_headLabel;
    UILabel *_timeLabel;
    UILabel *_middleLabel;
    UIImageView *_rightSelectedIcon;
    double _rightSelectedIconMarginRight;
}

- (void).cxx_destruct;
- (id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2;
- (void)setCellUIAtIndexPath:(id)arg1 cellCount:(unsigned long long)arg2 width:(double)arg3;
- (void)setDatasource:(id)arg1;
- (void)updateCellIsSelected:(_Bool)arg1;

@end

