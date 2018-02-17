//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIView.h"

@class ARMapItemInfo, NSString, UIButton, UIImageView, UILabel;

@interface QTreasureResultView : UIView
{
    UIView *_mask;
    UIImageView *_bg;
    UIButton *_closeButton;
    UIImageView *_logo;
    UILabel *_line1;
    UILabel *_line2;
    UILabel *_line3;
    UIButton *_bottomButton;
    NSString *_busiName;
    NSString *_logoUrl;
    ARMapItemInfo *_item;
    unsigned long long _poiID;
    unsigned long long _taskID;
    id <QTreasureResultDelegate> _delegate;
}

- (void).cxx_destruct;
- (void)animate;
@property(copy, nonatomic) NSString *busiName; // @synthesize busiName=_busiName;
- (void)closeWithoutQuitVc;
@property(nonatomic) __weak id <QTreasureResultDelegate> delegate; // @synthesize delegate=_delegate;
- (void)doLayout;
- (id)initWithFrame:(struct CGRect)arg1;
@property(retain, nonatomic) ARMapItemInfo *item; // @synthesize item=_item;
@property(copy, nonatomic) NSString *logoUrl; // @synthesize logoUrl=_logoUrl;
- (void)onOKButtonClick;
@property(nonatomic) unsigned long long poiID; // @synthesize poiID=_poiID;
- (void)quit;
@property(nonatomic) unsigned long long taskID; // @synthesize taskID=_taskID;

@end

