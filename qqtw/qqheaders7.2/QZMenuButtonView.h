//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIButton.h"

@class QZMenuButtonModel, QZMenuItem;

@interface QZMenuButtonView : UIButton
{
    QZMenuButtonModel *_model;
    QZMenuItem *_item;
    double _iconSize;
    id <QZMenuViewDelegate> _delegate;
}

- (void).cxx_destruct;
@property(nonatomic) __weak id <QZMenuViewDelegate> delegate; // @synthesize delegate=_delegate;
@property(nonatomic) double iconSize; // @synthesize iconSize=_iconSize;
- (id)initWithFrame:(struct CGRect)arg1;
- (void)layoutItem:(id)arg1;
- (void)onClickButton;

@end
