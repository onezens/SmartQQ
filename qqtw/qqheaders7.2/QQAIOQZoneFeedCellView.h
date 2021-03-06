//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "QQAIOCellView.h"

@class QQAIOModelQZoneFeed, QZCImageView, QzoneFeedLayoutView, UIImageView;

@interface QQAIOQZoneFeedCellView : QQAIOCellView
{
    QZCImageView *_leftIconView;
    UIImageView *_bubbleBgView;
    QzoneFeedLayoutView *_detailView;
}

- (void).cxx_destruct;
- (struct CGRect)bubbleBounds;
@property(retain, nonatomic) QzoneFeedLayoutView *detailView; // @synthesize detailView=_detailView;
- (id)initWithFrame:(struct CGRect)arg1 chatViewTable:(id)arg2;
- (void)layoutSubviews;
- (void)refreshDetail;
- (void)refreshLeftIcon;
- (void)refreshUI;
@property(nonatomic) __weak QQAIOModelQZoneFeed *aioModel; // @dynamic aioModel;
- (void)setNeedsDisplay;

@end

