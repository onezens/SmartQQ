//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UITableViewCell.h"

#import "QQWalletImageDownloaderDelegate.h"

@class NSMutableArray, NSString, QQWalletEntry, QQWalletImageDownloader, UIButton, UIImageView, UITapGestureRecognizer;

@interface QQWalletRSCell : UITableViewCell <QQWalletImageDownloaderDelegate>
{
    int _cellType;
    QQWalletEntry *_entry;
    UIImageView *_cornerView;
    UIImageView *_bgImageView;
    UITapGestureRecognizer *_tapGesture;
    UIButton *_leftButton;
    UIButton *_rightButton;
    NSMutableArray *_entryCellViews;
    QQWalletRSCell *_creditPointCell;
    QQWalletImageDownloader *_downloader;
    NSString *_iconUrl;
    NSString *_cornerUrl;
    NSString *_rightBtnImgUrl;
    id <QQWalletRSCellClickedDelegate> _delegate;
    long long _marketType;
}

- (void).cxx_destruct;
- (id)accessibilityLabel;
- (id)buttonWithImage:(id)arg1 title:(id)arg2;
- (void)commonInit;
- (void)dealloc;
@property(nonatomic) __weak id <QQWalletRSCellClickedDelegate> delegate; // @synthesize delegate=_delegate;
- (void)didCellTapped:(id)arg1;
- (void)downloader:(id)arg1 didDownloadImage:(id)arg2 forURL:(id)arg3;
- (void)downloader:(id)arg1 didFailWithError:(id)arg2 forURL:(id)arg3;
- (id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2;
- (void)layoutSubviews;
- (void)leftButtonClick:(id)arg1;
@property(nonatomic) long long marketType; // @synthesize marketType=_marketType;
- (void)rightButtonClick:(id)arg1;
- (void)setCellSelectedOrHighlighted:(_Bool)arg1;
- (void)setRSCellInfo:(id)arg1 forCellType:(int)arg2;
- (_Bool)subviewHasRPContentView;
- (void)touchesBegan:(id)arg1 withEvent:(id)arg2;
- (void)touchesCancelled:(id)arg1 withEvent:(id)arg2;
- (void)touchesEnded:(id)arg1 withEvent:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
