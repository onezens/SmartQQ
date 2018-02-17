//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "QUICustomViewPositionCell.h"

@class NSIndexPath, QQAccountItem, QQSwitch, UIImageView, UILabel;

@interface QQSetupRelatedTableViewCell : QUICustomViewPositionCell
{
    UIImageView *_newTipView;
    UILabel *_contentTitle;
    QQAccountItem *_item;
    NSIndexPath *_indexPath;
    QQSwitch *_switchBtn;
    id _callObject;
    id _viewController;
    int _xo;
}

- (id)GetValueForKey:(id)arg1;
- (void)clickSwitch:(id)arg1;
- (void)dealloc;
- (void)drawViewCell;
- (id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2 object:(id)arg3 viewController:(id)arg4 Item:(id)arg5;
- (void)layoutSubviews;
- (void)refreshCVIcon;

// Remaining properties
@property(retain, nonatomic) NSIndexPath *indexPath; // @dynamic indexPath;
@property(retain, nonatomic) QQAccountItem *item; // @dynamic item;
@property(retain, nonatomic) QQSwitch *switchBtn; // @dynamic switchBtn;
@property(nonatomic) id viewController; // @dynamic viewController;

@end

