//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UITableViewCell.h"

@class FLLabel, QQStoryUserIconView, TBAvatarView;

@interface TBStoryVisitorCell : UITableViewCell
{
    TBAvatarView *_avatar;
    QQStoryUserIconView *_plateIcon;
    FLLabel *_nick;
}

- (void)dealloc;
- (id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2 size:(struct CGSize)arg3;
- (void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void *)arg4;
- (void)refreshWithUserInfo:(id)arg1;

@end

