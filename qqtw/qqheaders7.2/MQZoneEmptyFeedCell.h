//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UITableViewCell.h"

@class NSString, UIImageView, UILabel;

@interface MQZoneEmptyFeedCell : UITableViewCell
{
    long long _state;
    double _topOffset;
    UIImageView *_logoView;
    UILabel *_label;
    NSString *_emptyTitle;
    NSString *_noPermitTitle;
    NSString *_deletedTitle;
    int _xo;
}

- (void).cxx_destruct;
- (id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2;
@property(nonatomic) long long state; // @dynamic state;
@property(nonatomic) double topOffset; // @dynamic topOffset;

// Remaining properties
@property(retain, nonatomic) NSString *deletedTitle; // @dynamic deletedTitle;
@property(retain, nonatomic) NSString *emptyTitle; // @dynamic emptyTitle;
@property(retain, nonatomic) UILabel *label; // @dynamic label;
@property(retain, nonatomic) NSString *noPermitTitle; // @dynamic noPermitTitle;

@end

