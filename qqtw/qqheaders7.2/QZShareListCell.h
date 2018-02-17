//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "QZEditAlbumCell.h"

@class NSDate, NSMutableArray, QZShareHintLabel, UILabel, UIView;

@interface QZShareListCell : QZEditAlbumCell
{
    UILabel *_titleLabel;
    QZShareHintLabel *_descLabel;
    UIView *_birthDayView;
    UIView *_shareBgView;
    UILabel *_dateLabel;
    NSMutableArray *_headViewArray;
    long long _albumThemeType;
    id <QZEditAlbumCellDelegate> _delegate;
    NSDate *_displayDate;
}

+ (long long)numberOfHeadCountPerRow;
- (void).cxx_destruct;
@property(retain, nonatomic) UIView *birthDayView; // @synthesize birthDayView=_birthDayView;
@property(retain, nonatomic) UILabel *dateLabel; // @synthesize dateLabel=_dateLabel;
@property(retain, nonatomic) QZShareHintLabel *descLabel; // @synthesize descLabel=_descLabel;
@property(retain, nonatomic) NSDate *displayDate; // @synthesize displayDate=_displayDate;
@property(retain, nonatomic) NSMutableArray *headViewArray; // @synthesize headViewArray=_headViewArray;
@property(retain, nonatomic) UIView *shareBgView; // @synthesize shareBgView=_shareBgView;
@property(retain, nonatomic) UILabel *titleLabel; // @synthesize titleLabel=_titleLabel;

@end
