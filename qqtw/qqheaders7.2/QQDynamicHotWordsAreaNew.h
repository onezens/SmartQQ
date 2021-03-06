//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIView.h"

@class NSMutableArray, QQDynamicSearchHotWordJumpInfo, UILabel;

@interface QQDynamicHotWordsAreaNew : UIView
{
    UIView *_headerView;
    NSMutableArray *_btnItemArray;
    UIView *_hotwordView;
    UILabel *_hotIndexLabel;
    UIView *_hotwordsTopLine;
    UIView *_hotwordsBottomLine;
    QQDynamicSearchHotWordJumpInfo *_hotIndexJumpInfo;
    _Bool _showHotIndex;
    _Bool _showBottomLine;
    _Bool _showHeaderView;
    id <QQDynamicHotWordsAreaDelegate> _delegate;
    UIView *_contentView;
    UILabel *_titleLabel;
}

@property(retain, nonatomic) UIView *contentView; // @synthesize contentView=_contentView;
- (void)dealloc;
@property(nonatomic) id <QQDynamicHotWordsAreaDelegate> delegate; // @synthesize delegate=_delegate;
- (id)getOnePixLine:(double)arg1;
- (void)hotWordItemClicked:(id)arg1;
- (id)initWithFrame:(struct CGRect)arg1;
- (void)onHotIndexClicked;
- (void)setHotIndexDatasource:(id)arg1;
- (void)setHotWordsDatasource:(id)arg1;
@property(nonatomic) _Bool showBottomLine; // @synthesize showBottomLine=_showBottomLine;
@property(nonatomic) _Bool showHeaderView; // @synthesize showHeaderView=_showHeaderView;
@property(nonatomic) _Bool showHotIndex; // @synthesize showHotIndex=_showHotIndex;
@property(retain, nonatomic) UILabel *titleLabel; // @synthesize titleLabel=_titleLabel;

@end

