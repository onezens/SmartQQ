//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIView.h"

@class NSArray;

@interface QQVIPFunctionComicReaderTabBarView : UIView
{
    NSArray *_items;
    unsigned long long _selectedIndex;
    id <QQVIPFunctionComicReaderTabBarViewDelegate> _delegate;
    int _xo;
    long long _mode;
}

- (void).cxx_destruct;
- (void)dealloc;
- (void)layoutSubviews;
@property long long mode; // @synthesize mode=_mode;
- (void)setItems:(id)arg1;

// Remaining properties
@property(nonatomic) __weak id <QQVIPFunctionComicReaderTabBarViewDelegate> delegate; // @dynamic delegate;
@property(nonatomic) unsigned long long selectedIndex; // @dynamic selectedIndex;

@end

