//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSString, QQYPBusinessDetailInfoModal;

@interface QQYPSearchItemModal : NSObject
{
    int _eItemType;
    QQYPBusinessDetailInfoModal *_companyInfo;
    NSString *_moreSearchCategory;
    NSString *_moreSearchWording;
    int _xo;
}

- (void)dealloc;

// Remaining properties
@property(retain, nonatomic) QQYPBusinessDetailInfoModal *companyInfo; // @dynamic companyInfo;
@property(nonatomic) int eItemType; // @dynamic eItemType;
@property(copy, nonatomic) NSString *moreSearchCategory; // @dynamic moreSearchCategory;
@property(copy, nonatomic) NSString *moreSearchWording; // @dynamic moreSearchWording;

@end

