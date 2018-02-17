//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@interface BCardRequestEngine : NSObject
{
    unsigned int _REQ_GET_LIST_SEQ;
    unsigned int _REQ_GET_LIST_NEXT_FLAG;
    long long _cardFlag;
    long long _ocrUserStyle;
}

+ (id)sharedInstance;
@property(nonatomic) unsigned int REQ_GET_LIST_NEXT_FLAG; // @synthesize REQ_GET_LIST_NEXT_FLAG=_REQ_GET_LIST_NEXT_FLAG;
@property(nonatomic) unsigned int REQ_GET_LIST_SEQ; // @synthesize REQ_GET_LIST_SEQ=_REQ_GET_LIST_SEQ;
- (void)addCardInfo:(id)arg1 controller:(id)arg2 isSelf:(_Bool)arg3 callBack:(CDUnknownBlockType)arg4;
@property(nonatomic) long long cardFlag; // @synthesize cardFlag=_cardFlag;
- (void)clearRequstListData;
- (void)deleteCardInfo:(id)arg1 controller:(id)arg2;
- (id)init;
- (void)modifyCardInfo:(id)arg1 controller:(id)arg2 isSelf:(_Bool)arg3 callBack:(CDUnknownBlockType)arg4;
@property(nonatomic) long long ocrUserStyle; // @synthesize ocrUserStyle=_ocrUserStyle;
- (void)requestCardDetailData:(id)arg1 controller:(id)arg2 callBack:(CDUnknownBlockType)arg3;
- (void)requestCardInfoArray:(id)arg1;
- (void)requestCardInfoArrayAndSaveDataBase;
- (void)requestCommendFriendListWithBlock:(CDUnknownBlockType)arg1;

@end
