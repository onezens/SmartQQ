//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "QQAIOMsgModel.h"

#import "ArkCardModelsOperationDelegate.h"

@class ArkAppMsgConfig, ArkCardsListView, NSArray, NSMutableArray, NSString;

@interface QQAIOArkMutilpleCardsAppModel : QQAIOMsgModel <ArkCardModelsOperationDelegate>
{
    NSMutableArray *_cardModels;
    _Bool _showSender;
    _Bool _cardListViewExpanded;
    NSString *_errorText;
    ArkAppMsgConfig *_messageConfig;
    ArkCardsListView *_cardListView;
    CDStruct_f9c2ea2a _cardPosition;
}

- (void).cxx_destruct;
- (void)addCardModel:(id)arg1 afterCardModel:(id)arg2;
@property(nonatomic) __weak ArkCardsListView *cardListView; // @synthesize cardListView=_cardListView;
@property(nonatomic) _Bool cardListViewExpanded; // @synthesize cardListViewExpanded=_cardListViewExpanded;
@property(retain, nonatomic) NSArray *cardModels;
@property(nonatomic) CDStruct_f9c2ea2a cardPosition; // @synthesize cardPosition=_cardPosition;
- (id)cellClassName;
- (double)cellHeight;
- (id)cellIdentifier;
- (id)cellViewClassName;
@property(copy, nonatomic) NSString *errorText; // @synthesize errorText=_errorText;
- (id)eventHandleClassName;
- (id)initWithMessageModel:(id)arg1;
@property(retain, nonatomic) ArkAppMsgConfig *messageConfig; // @synthesize messageConfig=_messageConfig;
- (void)parseMessageContent;
@property(nonatomic) _Bool showSender; // @synthesize showSender=_showSender;
- (_Bool)shouldDisplaySelfNick;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

