//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "SpritePackageModel.h"

@class NSMutableArray;

@interface SpriteGamePkgModel : SpritePackageModel
{
    NSMutableArray *_gameSet;
    NSMutableArray *_gameButtonArray;
}

- (id)actionsInPageIndex:(int)arg1;
- (void)arrrangeData;
- (void)dealloc;
- (id)filterNotShowGameModel;
@property(retain, nonatomic) NSMutableArray *gameButtonArray; // @synthesize gameButtonArray=_gameButtonArray;
@property(retain, nonatomic) NSMutableArray *gameSet; // @synthesize gameSet=_gameSet;
- (id)getGameModelWithGameId:(id)arg1;
- (id)initWithGameJsonDic:(id)arg1;
- (id)initWithGamePkgModel:(id)arg1;

@end
