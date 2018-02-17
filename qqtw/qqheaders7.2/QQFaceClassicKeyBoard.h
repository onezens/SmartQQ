//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIFaceKeyBoard.h"

@class DrageFace, NSMutableArray, QQPageControl, UIImageView;

@interface QQFaceClassicKeyBoard : UIFaceKeyBoard
{
    DrageFace *_showEmojiView;
    unsigned long long _maxEmojiCount;
    NSMutableArray *_emjoList;
    QQPageControl *_emojiPageControll;
    QQPageControl *_qqFacePageControll;
    UIImageView *_pageControlImage_emoji;
    UIImageView *_pageControlImage_qq;
    _Bool _showTabBar;
    _Bool _showPageControlImage;
}

+ (id)getInstance;
- (id)GetCurrentIOSEmoji;
- (unsigned long long)GetFaceKeyBoardCol;
- (unsigned long long)GetFaceKeyBoardRow;
- (unsigned long long)GetMaxEmojiPageNum;
- (unsigned long long)GetMaxFaceIDCount;
- (id)createEmojiListWith:(id)arg1;
- (void)dealloc;
- (void)drawFaceFrame:(struct CGRect)arg1;
- (int)faceIdFromTouchPoint:(struct CGPoint)arg1;
- (id)initWithFrame:(struct CGRect)arg1;
- (_Bool)isSupportRightDragToGoBack;
- (void)layoutScrollImages;
- (void)moveDragPanelToCGPoint:(struct CGPoint)arg1;
- (void)pageControlDidChange:(id)arg1;
- (void)resetKeyBoard;
- (void)scrollViewDidScroll:(id)arg1;
@property(nonatomic) _Bool showPageControlImage; // @dynamic showPageControlImage;
@property(nonatomic) _Bool showTabBar; // @dynamic showTabBar;
- (void)touchesBegan:(id)arg1 withEvent:(id)arg2;
- (void)touchesCancelled:(id)arg1 withEvent:(id)arg2;
- (void)touchesEnded:(id)arg1 withEvent:(id)arg2;
- (void)touchesMoved:(id)arg1 withEvent:(id)arg2;

// Remaining properties
@property(nonatomic) unsigned long long maxEmojiCount; // @dynamic maxEmojiCount;

@end

