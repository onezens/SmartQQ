//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "QQAIOTextModel.h"

@class SpriteActionMsgInfo;

@interface QQAIOSpriteActionModel : QQAIOTextModel
{
    short _taskID;
    int _spriteActionType;
    int _spriteMsgState;
    SpriteActionMsgInfo *_spriteMsgInfo;
}

+ (id)modelWithMessageModel:(id)arg1;
- (id)cellClassName;
- (double)cellHeight;
- (id)cellIdentifier;
- (id)cellViewClassName;
- (void)dealloc;
- (id)eventHandleClassName;
- (int)getCellShowType;
- (id)getLargeContent;
- (id)initWithMessageModel:(id)arg1;
- (int)isOpenApollo;
- (_Bool)isShowSprite;
@property(nonatomic) int spriteActionType; // @synthesize spriteActionType=_spriteActionType;
@property(retain, nonatomic) SpriteActionMsgInfo *spriteMsgInfo; // @synthesize spriteMsgInfo=_spriteMsgInfo;
@property(nonatomic) int spriteMsgState; // @synthesize spriteMsgState=_spriteMsgState;
@property(nonatomic) short taskID; // @synthesize taskID=_taskID;
- (void)updateSpriteMsgState:(int)arg1;

@end
