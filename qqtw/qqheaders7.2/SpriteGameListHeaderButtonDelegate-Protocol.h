//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class SpriteGameModel;

@protocol SpriteGameListHeaderButtonDelegate <NSObject>
- (void)onGameActivityClicked;
- (void)onGameCoinClicked;
- (void)onGoBackToListClicked;
- (void)onRankClicked;
- (void)onSettingClicked;

@optional
- (void)onGamePropsButtonClicked:(SpriteGameModel *)arg1;
@end

