//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSMutableArray, QQCoin, QQWalletRecommendApp, QQWealth;

@interface QQWalletDatas : NSObject
{
    NSMutableArray *recommendServices;
    QQWalletRecommendApp *_recommendApp;
    NSMutableArray *_appServices;
    NSMutableArray *_folderServices;
    QQWealth *_qWealth;
    QQCoin *_qCoin;
    NSMutableArray *_bankCards;
}

- (void).cxx_destruct;
- (void)commitInit;
- (id)init;

@end
