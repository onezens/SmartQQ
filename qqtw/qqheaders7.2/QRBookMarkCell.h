//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UITableViewCell.h"

@class QRBookMark, UILabel, UIView;

@interface QRBookMarkCell : UITableViewCell
{
    UILabel *_progressLabel;
    UILabel *_dateLabel;
    UILabel *_topStringLabel;
    UIView *_separatorView;
    int _xo;
    _Bool _isLastCell;
    QRBookMark *_bookMark;
}

+ (double)cellHeight;
- (void).cxx_destruct;
@property(retain, nonatomic) QRBookMark *bookMark; // @synthesize bookMark=_bookMark;
@property(retain, nonatomic) UILabel *dateLabel; // @dynamic dateLabel;
- (id)init;
@property(nonatomic) _Bool isLastCell; // @synthesize isLastCell=_isLastCell;
- (void)layoutSubViews;
- (void)layoutTopStringText:(id)arg1;
@property(retain, nonatomic) UILabel *progressLabel; // @dynamic progressLabel;
@property(retain, nonatomic) UIView *separatorView; // @dynamic separatorView;
@property(retain, nonatomic) UILabel *topStringLabel; // @dynamic topStringLabel;

@end

