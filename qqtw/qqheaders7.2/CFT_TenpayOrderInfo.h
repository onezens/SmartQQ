//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSArray, NSDictionary, NSMutableDictionary, NSString;

@interface CFT_TenpayOrderInfo : NSObject
{
    NSString *orderNum;
    NSString *bankType;
    NSString *userName;
    NSString *passwd;
    NSString *rpasswd;
    NSString *mobileNo;
    NSString *bankcardNum;
    NSString *bankName;
    NSString *CVV;
    NSString *validDate;
    NSString *bindSerial;
    NSString *cardtail;
    NSString *totalfee;
    NSString *payType;
    NSString *balance;
    NSString *vCode;
    NSString *payComeFrom;
    NSString *smsResendTag;
    NSMutableDictionary *smsResendParam;
    NSMutableDictionary *origOrder;
    NSArray *userCardInfo;
    NSMutableDictionary *fullInfo;
    NSMutableDictionary *authKeyInfo;
    NSMutableDictionary *validPayType;
    NSString *suggestPayType;
    NSString *payItemDesc;
    NSString *sellerName;
    NSString *bargainor_id;
    NSString *app_info;
    NSMutableDictionary *qwalletBuffer;
    NSString *draw_fee;
    NSString *draw_desc;
    NSString *appid;
    NSString *appname;
    NSString *guid;
    unsigned char supportWxpay;
    NSString *notPswSms;
    NSString *notPswForBanlance;
    NSMutableDictionary *verifyPswInfo;
    NSString *paySuccAction;
    unsigned char needAskChangePsw;
    unsigned char touchid_can_open;
    _Bool _payWithSMS;
    _Bool _verifyPasswordSuccess;
    _Bool _resetTouchIdIfPaySuccess;
    NSString *order_fee;
    NSString *discount_type;
    NSString *promotionfee;
    NSString *promotiontype;
    NSString *promotionid;
    NSDictionary *ctpay_param;
    NSString *cert_user;
    NSString *pay_fee_flag;
    NSString *draw_fee_rate;
    NSString *exec_code;
    NSString *trans_uin;
    NSString *can_use_touchid;
    NSString *touchPayRecommWords;
    NSString *touchid_time_interval;
    NSString *touchid_force_flag;
    NSString *bank_category;
    NSString *_identifyCard;
    NSString *_identifyType;
    NSString *_sp_billno;
    NSString *_promotion_show;
    NSString *_originPayComeFrom;
    NSString *_back_button_text;
    NSString *_sub_mch_id;
    NSString *_business_id;
    NSMutableDictionary *_draw_succ_desc_Dict;
    NSDictionary *_balanceInfo;
    NSMutableDictionary *_dataReportExDict;
    NSString *_trade_state;
    NSString *_trade_state_desc;
    NSString *_qpay_cert_cn;
    NSMutableDictionary *_pay_pskey_data;
    NSMutableDictionary *_trustpaymodel;
    NSMutableDictionary *_pfa_param;
    NSString *_ad_display;
    NSString *_transaction_id;
    NSString *_offerid;
    NSString *_listid;
    NSDictionary *_golden_msg_guide;
}

+ (void)clearAllData;
+ (id)getInstanceWithScene:(int)arg1;
+ (id)getPayInstance;
+ (id)getVerifyPswInstance;
+ (id)getWalletInstance;
@property(retain, nonatomic) NSString *CVV; // @synthesize CVV;
@property(retain, nonatomic) NSString *ad_display; // @synthesize ad_display=_ad_display;
@property(retain, nonatomic) NSString *app_info; // @synthesize app_info;
@property(retain, nonatomic) NSMutableDictionary *authKeyInfo; // @synthesize authKeyInfo;
@property(retain, nonatomic) NSString *back_button_text; // @synthesize back_button_text=_back_button_text;
@property(retain, nonatomic) NSDictionary *balanceInfo; // @synthesize balanceInfo=_balanceInfo;
@property(retain, nonatomic) NSString *bankName; // @synthesize bankName;
@property(retain, nonatomic) NSString *bankType; // @synthesize bankType;
@property(retain, nonatomic) NSString *bank_category; // @synthesize bank_category;
@property(retain, nonatomic) NSString *bankcardNum; // @synthesize bankcardNum;
@property(retain, nonatomic) NSString *bargainor_id; // @synthesize bargainor_id;
@property(retain, nonatomic) NSString *bindSerial; // @synthesize bindSerial;
@property(copy, nonatomic) NSString *business_id; // @synthesize business_id=_business_id;
@property(retain, nonatomic) NSString *can_use_touchid; // @synthesize can_use_touchid;
@property(retain, nonatomic) NSString *cardtail; // @synthesize cardtail;
@property(retain, nonatomic) NSString *cert_user; // @synthesize cert_user;
- (void)clearData;
@property(retain, nonatomic) NSDictionary *ctpay_param; // @synthesize ctpay_param;
@property(retain, nonatomic) NSMutableDictionary *dataReportExDict; // @synthesize dataReportExDict=_dataReportExDict;
@property(retain, nonatomic) NSString *discount_type; // @synthesize discount_type;
@property(retain, nonatomic) NSString *draw_desc; // @synthesize draw_desc;
@property(retain, nonatomic) NSString *draw_fee; // @synthesize draw_fee;
@property(retain, nonatomic) NSString *draw_fee_rate; // @synthesize draw_fee_rate;
@property(retain, nonatomic) NSMutableDictionary *draw_succ_desc_Dict; // @synthesize draw_succ_desc_Dict=_draw_succ_desc_Dict;
@property(retain, nonatomic) NSString *exec_code; // @synthesize exec_code;
@property(retain, nonatomic) NSMutableDictionary *fullInfo; // @synthesize fullInfo;
@property(copy, nonatomic) NSDictionary *golden_msg_guide; // @synthesize golden_msg_guide=_golden_msg_guide;
@property(retain, nonatomic) NSString *identifyCard; // @synthesize identifyCard=_identifyCard;
@property(retain, nonatomic) NSString *identifyType; // @synthesize identifyType=_identifyType;
- (id)init;
@property(copy, nonatomic) NSString *listid; // @synthesize listid=_listid;
@property(retain, nonatomic) NSString *mobileNo; // @synthesize mobileNo;
@property(nonatomic) unsigned char needAskChangePsw; // @synthesize needAskChangePsw;
@property(retain, nonatomic) NSString *notPswForBanlance; // @synthesize notPswForBanlance;
@property(retain, nonatomic) NSString *notPswSms; // @synthesize notPswSms;
@property(retain, nonatomic) NSString *offerid; // @synthesize offerid=_offerid;
@property(copy, nonatomic) NSString *orderNum; // @synthesize orderNum;
@property(retain, nonatomic) NSString *order_fee; // @synthesize order_fee;
@property(retain, nonatomic) NSMutableDictionary *origOrder; // @synthesize origOrder;
@property(retain, nonatomic) NSString *originPayComeFrom; // @synthesize originPayComeFrom=_originPayComeFrom;
@property(retain, nonatomic) NSString *passwd; // @synthesize passwd;
@property(retain, nonatomic) NSString *payComeFrom; // @synthesize payComeFrom;
@property(copy, nonatomic) NSString *payItemDesc; // @synthesize payItemDesc;
@property(retain, nonatomic) NSString *paySuccAction; // @synthesize paySuccAction;
@property(retain, nonatomic) NSString *payType; // @synthesize payType;
@property(nonatomic) _Bool payWithSMS; // @synthesize payWithSMS=_payWithSMS;
@property(retain, nonatomic) NSString *pay_fee_flag; // @synthesize pay_fee_flag;
@property(retain, nonatomic) NSMutableDictionary *pay_pskey_data; // @synthesize pay_pskey_data=_pay_pskey_data;
@property(retain, nonatomic) NSMutableDictionary *pfa_param; // @synthesize pfa_param=_pfa_param;
@property(retain, nonatomic) NSString *promotion_show; // @synthesize promotion_show=_promotion_show;
@property(retain, nonatomic) NSString *promotionfee; // @synthesize promotionfee;
@property(retain, nonatomic) NSString *promotionid; // @synthesize promotionid;
@property(retain, nonatomic) NSString *promotiontype; // @synthesize promotiontype;
@property(retain, nonatomic) NSString *qpay_cert_cn; // @synthesize qpay_cert_cn=_qpay_cert_cn;
@property(retain, nonatomic) NSMutableDictionary *qwalletBuffer; // @synthesize qwalletBuffer;
- (void)qwalletBufferExpire;
@property(nonatomic) _Bool resetTouchIdIfPaySuccess; // @synthesize resetTouchIdIfPaySuccess=_resetTouchIdIfPaySuccess;
@property(retain, nonatomic) NSString *rpasswd; // @synthesize rpasswd;
@property(copy, nonatomic) NSString *sellerName; // @synthesize sellerName;
@property(retain, nonatomic) NSMutableDictionary *smsResendParam; // @synthesize smsResendParam;
@property(retain, nonatomic) NSString *smsResendTag; // @synthesize smsResendTag;
@property(copy, nonatomic) NSString *sp_billno; // @synthesize sp_billno=_sp_billno;
@property(copy, nonatomic) NSString *sub_mch_id; // @synthesize sub_mch_id=_sub_mch_id;
@property(retain, nonatomic) NSString *suggestPayType; // @synthesize suggestPayType;
@property(retain, nonatomic) NSString *totalfee; // @synthesize totalfee;
@property(retain, nonatomic) NSString *touchPayRecommWords; // @synthesize touchPayRecommWords;
@property(nonatomic) unsigned char touchid_can_open; // @synthesize touchid_can_open;
@property(retain, nonatomic) NSString *touchid_force_flag; // @synthesize touchid_force_flag;
@property(retain, nonatomic) NSString *touchid_time_interval; // @synthesize touchid_time_interval;
@property(retain, nonatomic) NSString *trade_state; // @synthesize trade_state=_trade_state;
@property(retain, nonatomic) NSString *trade_state_desc; // @synthesize trade_state_desc=_trade_state_desc;
@property(retain, nonatomic) NSString *trans_uin; // @synthesize trans_uin;
@property(retain, nonatomic) NSString *transaction_id; // @synthesize transaction_id=_transaction_id;
@property(retain, nonatomic) NSMutableDictionary *trustpaymodel; // @synthesize trustpaymodel=_trustpaymodel;
@property(retain, nonatomic) NSArray *userCardInfo; // @synthesize userCardInfo;
@property(retain, nonatomic) NSString *userName; // @synthesize userName;
@property(retain, nonatomic) NSString *vCode; // @synthesize vCode;
@property(retain, nonatomic) NSString *validDate; // @synthesize validDate;
@property(retain, nonatomic) NSMutableDictionary *validPayType; // @synthesize validPayType;
@property(nonatomic) _Bool verifyPasswordSuccess; // @synthesize verifyPasswordSuccess=_verifyPasswordSuccess;
@property(retain, nonatomic) NSMutableDictionary *verifyPswInfo; // @synthesize verifyPswInfo;

@end

