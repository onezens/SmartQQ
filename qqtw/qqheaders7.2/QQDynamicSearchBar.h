//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "QQSearchBar.h"

@class UIButton;

@interface QQDynamicSearchBar : QQSearchBar
{
    UIButton *_customButton;
    id <QQDynamicSearchBarProtocol> _customDelegate;
}

@property(nonatomic) id <QQDynamicSearchBarProtocol> customDelegate; // @synthesize customDelegate=_customDelegate;
- (void)dealloc;
- (id)initWithFrame:(struct CGRect)arg1;
- (void)layoutSubviews;
- (void)reloadAppearance;
- (void)searchBarButtonDidClicked;

@end

