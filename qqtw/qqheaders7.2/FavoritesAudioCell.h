//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "FavoritesCell.h"

@class FavAudioButton, UILabel;

@interface FavoritesAudioCell : FavoritesCell
{
    FavAudioButton *_audioBtn;
    UILabel *_note;
}

@property(retain, nonatomic) FavAudioButton *audioBtn; // @synthesize audioBtn=_audioBtn;
- (void)dealloc;
- (id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2;
- (double)layoutContent:(_Bool)arg1;
- (void)layoutSubviews;
- (void)setModel:(id)arg1;

@end

