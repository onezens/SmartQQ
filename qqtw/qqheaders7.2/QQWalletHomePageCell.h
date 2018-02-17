//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UITableViewCell.h"

#import "CAAnimationDelegate.h"
#import "QQWalletServiceGridCellDelegate.h"

@class NSMutableArray, NSString, UITapGestureRecognizer;

@interface QQWalletHomePageCell : UITableViewCell <QQWalletServiceGridCellDelegate, CAAnimationDelegate>
{
    NSMutableArray *_gridCells;
    NSMutableArray *_cellFrames;
    int _aniTimes;
    UITapGestureRecognizer *_tapGuester;
    id <QQWalletHomePageCellDelegate> _delegate;
    unsigned long long _drawBorder;
}

- (void).cxx_destruct;
- (void)animationDidStop:(id)arg1 finished:(_Bool)arg2;
- (void)cellsStartAnimating;
- (void)clearUselessGridCells:(unsigned long long)arg1;
- (void)commonInit;
- (id)createGridCellForIndex:(long long)arg1;
@property(nonatomic) __weak id <QQWalletHomePageCellDelegate> delegate; // @synthesize delegate=_delegate;
- (void)didDownloadZipImages;
@property(nonatomic) unsigned long long drawBorder; // @synthesize drawBorder=_drawBorder;
- (void)drawRect:(struct CGRect)arg1;
- (void)handleTapGesture:(id)arg1;
- (id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2;
- (void)prepareForReuse;
- (void)setAppList:(id)arg1 forType:(int)arg2;
- (void)setupStateForGridCell:(id)arg1 app:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

